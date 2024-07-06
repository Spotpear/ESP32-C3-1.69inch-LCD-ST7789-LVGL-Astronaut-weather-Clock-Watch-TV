#define LGFX_USE_V1
#include "Arduino.h"
#include "lvgl.h"
#include "pin_config.h"
#include <HTTPClient.h>
#include <WiFiClientSecure.h>
#include "ArduinoJson.h"
#include <TimeLib.h>
#include <WiFi.h>
#include "demos/lv_demos.h"
#include <LovyanGFX.hpp>
#include <Ticker.h>
#include "CST816D.h"
#include "do_mian.h"
#include <WiFiUdp.h>
#include "do_mian.h"
#include <OneButton.h>
#define buf_size 120
class LGFX : public lgfx::LGFX_Device
{

  lgfx::Panel_ST7789 _panel_instance;

  lgfx::Bus_SPI _bus_instance;

public:
  LGFX(void)
  {
    {
      auto cfg = _bus_instance.config();

      // SPI总线的设置
      cfg.spi_host = SPI2_HOST; // 选择使用的SPI ESP32- s2,C3: spi2_host or spi3_host / ESP32 VSPI_HOST or HSPI_HOST
      // 随着ESP-IDF版本的升级，vspi_host和hspi_host的描述将被不推荐，因此出现错误时请使用spi2_host和spi3_host代替。
      cfg.spi_mode = 2;                  // 设置SPI通信模式0 (0 ~ 3)
      cfg.freq_write = 40000000;         // 传输时的SPI时钟（最高80MHz，四舍五入为80MHz除以整数得到的值）
      cfg.freq_read = 40000000;          // 接收时的SPI时钟
      cfg.spi_3wire = true;              // 用MOSI引脚进行接收时设置为真
      cfg.use_lock = true;               // 使用事务锁时设置为 true
      cfg.dma_channel = SPI_DMA_CH_AUTO; // 设定使用的DMA信道(0=不使用DMA / 1= ch / 2=ch /SPI_DMA_CH_AUTO=自動設定)
      // 随着ESP-IDF版本的升级，DMA频道推荐spi_dma _ch_auto(自动设定)。不推荐指定1ch,2ch。
      cfg.pin_sclk = PIN_LCD_SCK;  // 设置SPI_SCLK引脚
      cfg.pin_mosi = PIN_LCD_SDA;  // 设置SPI_CLK引脚
      cfg.pin_miso = -1; // 设置SPI_MISO引脚 (-1 = disable)
      cfg.pin_dc = PIN_LCD_RS;    // 设置SPI_DC引脚 (-1 = disable)

      _bus_instance.config(cfg);              // 将设定值反映在总线上。
      _panel_instance.setBus(&_bus_instance); // 把总线放在面板上。
    }

    {                                      // 设置显示面板控制。
      auto cfg = _panel_instance.config(); // 取得显示面板设定用的构造体。

      cfg.pin_cs = PIN_LCD_CS;   // CS接线引脚   (-1 = disable)
      cfg.pin_rst = PIN_LCD_RES;  // RST接线引脚  (-1 = disable)
      cfg.pin_busy = -1; // BUSY接线引脚 (-1 = disable)

      // 以下的设定值是按面板设置的一般初始值，连接BUSY的针脚号(-1 = disable)，

      cfg.memory_width = 240;   // 驱动IIC所支持的最大宽度
      cfg.memory_height = 280;  // 驱动IiC所支持的最大高度
      cfg.panel_width = 240;    // 实际可显示的宽度
      cfg.panel_height = 280;   // 实际可显示的高度
      cfg.offset_x = 0;         // 面板的X方向偏移量
      cfg.offset_y = 20;         // 面板的Y方向偏移量
      cfg.offset_rotation = 1;  // 值在旋转方向的偏移0~7（4~7是倒置的）
      cfg.dummy_read_pixel = 8; // 在读取像素之前读取的虚拟位数
      cfg.dummy_read_bits = 1;  // 读取像素以外的数据之前的虚拟读取位数
      cfg.readable = true;     // 如果可以读取数据，则设置为 true
      cfg.invert = true;        // 如果面板的明暗反转，则设置为 true
      cfg.rgb_order = false;    // 如果面板的红色和蓝色被交换，则设置为 true
      cfg.dlen_16bit = false;   // 对于以 16 位单位发送数据长度的面板，设置为 true
      cfg.bus_shared = false;   // 如果总线与 SD 卡共享，则设置为 true（使用 drawJpgFile 等执行总线控制）

      _panel_instance.config(cfg);
    }

    setPanel(&_panel_instance); // 设置使用的面板。
  }
};

#define key1_pin  9     
#define beep_pin  1   //连无源喇叭
 
// float k=1.0594631;
struct YINFU{       //定义音符
  int    freq;
  float  Duration;
};
struct YINFU YUEPU[128]={
  {831,0.3},	{740,0.3},	{622,0.3},	{740,0.3}
};


void getCityWeater();
void weaterData(String *cityDZ, String *dataSK, String *dataFC);

// WiFiManager wm; 
//----------------------温湿度参数------------------
unsigned long wdsdTime = 0;
byte wdsdValue = 0;
String wendu1 = "",wendu2 = "",shidu1 = "",yaqiang = "",tianqi = "",kjd = "";

//----------------------------------------------------


//创建准备好的类的实例。
LGFX tft;
LGFX_Sprite sprite(&tft);
CST816D touch(I2C_SDA, I2C_SCL, TP_RST, TP_INT);

/*更改为您的屏幕分辨率*/
static const uint32_t screenWidth = 280;
static const uint32_t screenHeight = 240;

static lv_disp_draw_buf_t draw_buf;
static lv_color_t buf[2][270 * buf_size];

static const char ntpServerName[] = "time.nist.gov";//ntp6.aliyun.com time.nist.gov 
const int timeZone = 8;

WiFiUDP Udp;
String wendu,shidu;
WiFiClient wificlient;
String cityCode = "101250101";

char i=1;
char a=0;
short Clock=1;
short hou,sec;
short min_a;
char shi[10];
char fen[10];
char wendu_l2[10];
char shidu_l1[10];
char rili_l[10];
char xq_l[10];
char chenshi[20];
char tianqi_l[20];
char tqzl_l[20];

unsigned int localPort = 8000;
byte setNTPSyncTime = 20;  //设置NTP时间同步频率
uint16_t xkColor = 0xFFFF;
lv_obj_t * ui_Label5;
lv_obj_t *ui_Label4;
lv_obj_t *ui_Label6;
lv_obj_t *ui_Label7;
lv_obj_t * ui_Image5;



time_t getNtpTime();
void digitalClockDisplay();
void sendNTPpacket(IPAddress &address);
time_t prevDisplay = 0;


OneButton btn(key1_pin, true);


//蜂鸣器音效
void music()
{
  lv_timer_handler();
  for(int k=0;k<30;k++){        //顺序演奏128音符
    float d=YUEPU[k].Duration; 
    for(int D=0;D<int(d*YUEPU[k].freq);D++){   //演奏YUEPU[k].freq的音符，时长=d
      if(YUEPU[k].freq != 0){    //演奏音符
        //频率转化为时间间隔,1秒=500000微秒*2。一半高电平，一半低电平，所以用500000/音符频率。
        int freq_to_us=int(300000/YUEPU[k].freq);
        digitalWrite(beep_pin,HIGH); //一半高电平
        delayMicroseconds(freq_to_us);
        digitalWrite(beep_pin,LOW);  //一半低电平
        delayMicroseconds(freq_to_us);
      }
      
      else{                     //停顿
        digitalWrite(beep_pin,LOW);  //低电平，不发声  
        delayMicroseconds(500);
      }
    }
  }
}


//获取城市信息ID
void getCityCode() {
 
  String URL = "http://wgeo.weather.com.cn/ip/?_="+String(now());
  //创建 HTTPClient 对象

HTTPClient httpClient;
httpClient.begin(wificlient,URL);

  //设置请求头中的User-Agent
  httpClient.setUserAgent("Mozilla/5.0 (iPhone; CPU iPhone OS 11_0 like Mac OS X) AppleWebKit/604.1.38 (KHTML, like Gecko) Version/11.0 Mobile/15A372 Safari/604.1");
  httpClient.addHeader("Referer","http://www.weather.com.cn/");

  //启动连接并发送HTTP请求
  int httpCode = httpClient.GET();
  Serial.print("Send GET request to URL: ");
  Serial.println(URL);

  //如果服务器响应OK则从服务器获取响应体信息并通过串口输出
  if (httpCode == HTTP_CODE_OK) {
    String str = httpClient.getString();
    int aa = str.indexOf("id=");
    if(aa>-1)
    {
      //  cityCode = str.substring(aa+4,aa+4+9).toInt();
       cityCode = str.substring(aa+4,aa+4+9);  //获取当地的城市名称
       cityCode = cityCode;
       Serial.println(cityCode);
       getCityWeater();
    }
    else
    {
      Serial.println("获取城市代码失败");
    }
  } else {
    Serial.println("请求城市代码错误：");
    Serial.println(httpCode);
  }
  //关闭ESP与服务器连接
  httpClient.end();
}


void getCityWeater() {
  //创建 HTTPClient 对象
  
  String URL = "http://d1.weather.com.cn/weather_index/" + cityCode + ".html?_="+String(now());  //原来

  HTTPClient httpClient;
  httpClient.begin(wificlient, URL);
  //设置请求头中的User-Agent
  httpClient.setUserAgent("Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/116.0.0.0 Safari/537.36 Edg/116.0.1938.76");
  httpClient.addHeader("Referer", "http://www.weather.com.cn/");

  //启动连接并发送HTTP请求
  int httpCode = httpClient.GET();
  Serial.println("正在获取天气数据");
  Serial.println(URL);

  //如果服务器响应OK则从服务器获取响应体信息并通过串口输出
  if (httpCode == HTTP_CODE_OK) {
    
    String str = httpClient.getString();

    int indexStart = str.indexOf("weatherinfo\":");
    int indexEnd = str.indexOf("};var alarmDZ");

    String jsonCityDZ = str.substring(indexStart + 13, indexEnd);
    //Serial.println(jsonCityDZ);

    indexStart = str.indexOf("dataSK =");
    indexEnd = str.indexOf(";var dataZS");
    String jsonDataSK = str.substring(indexStart + 8, indexEnd);
    //Serial.println(jsonDataSK);


    indexStart = str.indexOf("\"f\":[");
    indexEnd = str.indexOf(",{\"fa");
    String jsonFC = str.substring(indexStart + 5, indexEnd);
    //Serial.pritln(jsonFC);
    
    weaterData(&jsonCityDZ, &jsonDataSK, &jsonFC);
    Serial.println("获取成功");
  } else {
    Serial.println("请求城市天气错误：");
    Serial.print(httpCode);
    }
  //关闭ESP32与服务器连接
  httpClient.end();
}



String scrollText[7];
//int scrollTextWidth = 0;
//天气信息写到屏幕上
void weaterData(String *cityDZ, String *dataSK, String *dataFC) {
  //解析第一段JSON
  DynamicJsonDocument doc(4096);
  deserializeJson(doc, *dataSK);
  JsonObject sk = doc.as<JsonObject>();


  /***绘制相关文字***/
  //温度
  wendu = sk["temp"].as<String>();

  //湿度

  shidu = sk["SD"].as<String>();

  strcpy(wendu_l2,wendu.c_str());
  strcpy(shidu_l1,shidu.c_str());
  
  //城市名称
  // clk.drawString(sk["cityname"].as<String>(), 1, 8);
  
  String cityCode_name = sk["cityname"].as<String>();
  // strcpy(tianqi_l,tianqi.c_str());
  strcpy(chenshi,cityCode_name.c_str());

  //PM2.5空气指数
  // uint16_t pm25BgColor = tft.color565(156, 202, 127);  //优
  String aqiTxt = "优";
  int pm25V = sk["api"];
  if (pm25V > 200) {
    aqiTxt = "重度";
  } else if (pm25V > 150) {
    aqiTxt = "中度";
  } else if (pm25V > 100) {
    aqiTxt = "轻度";
  } else if (pm25V > 50) {
    aqiTxt = "良";
  }
  
  // clk.drawString(aqiTxt, 3, 7);
  strcpy(tqzl_l,aqiTxt.c_str());

  // scrollText[0] = "实时天气 " + sk["weather"].as<String>();
  // scrollText[1] = "空气质量 " + aqiTxt;
  String tianqi = sk["weather"].as<String>();
  strcpy(tianqi_l,tianqi.c_str());

}




void get_wifi() {
  // 连接网络
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  //等待wifi连接
  while (WiFi.status() != WL_CONNECTED) {
    delay(10);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi connected");  //连接成功
  Serial.print("IP address: ");      //打印IP地址
  Serial.println(WiFi.localIP());
}


#if LV_USE_LOG != 0
/* Serial debugging */
void my_print(lv_log_level_t level, const char *file, uint32_t line, const char *fn_name, const char *dsc)
{
  Serial.printf("%s(%s)@%d->%s\r\n", file, fn_name, line, dsc);
  Serial.flush();
}
#endif

/* Display flushing */
void my_disp_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p)
{
  if (tft.getStartCount() == 0)
  {
    tft.endWrite();
  }

  tft.pushImageDMA(area->x1, area->y1, area->x2 - area->x1 + 1, area->y2 - area->y1 + 1, (lgfx::swap565_t *)&color_p->full);

  lv_disp_flush_ready(disp); /* tell lvgl that flushing is done */
}

/*Read the touchpad*  *读取触摸板*/
void my_touchpad_read(lv_indev_drv_t *indev_driver, lv_indev_data_t *data)
{

  bool touched;
  uint8_t gesture;
  uint16_t touchX, touchY;

  touched = touch.getTouch(&touchX, &touchY, &gesture);

  if (!touched)
  {
    data->state = LV_INDEV_STATE_REL;
  }
  else
  {
    data->state = LV_INDEV_STATE_PR; //触摸开关

    /*Set the coordinates*/
    data->point.x = touchX;  
    data->point.y = touchY;
  }
}

Ticker ticker;

void tcr1s()
{
  Serial.printf("SRAM free size: %d\n", heap_caps_get_free_size(MALLOC_CAP_INTERNAL));
}

void setup()
{

  Serial.begin(115200); /* prepare for possible serial debug */
  Serial.println("I am LVGL_Arduino");
  // ticker.attach(1, tcr1s);

  tft.init();
  // tft.initDMA();
  // tft.startWrite();
  tft.setColor(0, 0, 0);
  pinMode(beep_pin, OUTPUT);     //设置引脚为输出模式
  
  music();
  // 设置文本大小，文本大小范围为 1~7 的整数
  tft.setTextSize(2);
  tft.setTextColor(TFT_WHITE, TFT_BLACK);
  // 设置显示的文字，注意这里有个换行符 \n 产生的效果
  tft.println("----------------------");
  tft.println(" Configure mobile WLAN\n information:");
  tft.println("WIFI name:spotpear");
  tft.println("WIFI password: 12345678");
  tft.println("-----------------------");

  if (is_touch == 1)
  {
    touch.begin();
  }

  lv_init();

  lv_disp_draw_buf_init(&draw_buf, buf[0], NULL, 240 * buf_size);

  /*Initialize the display*/
  static lv_disp_drv_t disp_drv;
  lv_disp_drv_init(&disp_drv);
  /*Change the following line to your display resolution*  *更改下面一行为您的显示分辨率*/
  disp_drv.hor_res = screenWidth;
  disp_drv.ver_res = screenHeight;
  disp_drv.flush_cb = my_disp_flush;
  disp_drv.draw_buf = &draw_buf;
  lv_disp_drv_register(&disp_drv);

  /*Initialize the (dummy) input device driver*  初始化(虚拟)输入设备驱动程序*/
  if (is_touch == 1)
  {
    static lv_indev_drv_t indev_drv;
    lv_indev_drv_init(&indev_drv);
    indev_drv.type = LV_INDEV_TYPE_POINTER;
    indev_drv.read_cb = my_touchpad_read;
    lv_indev_drv_register(&indev_drv);
  }
  
  get_wifi();
  Udp.begin(localPort);

  setSyncProvider(getNtpTime);
  setSyncInterval(setNTPSyncTime * 60);  //NTP网络同步频率，单位秒。
  Serial.println("Setup done");
  // delay(100);
  digitalClockDisplay();

  getCityCode();
  getCityWeater();
  hou = hour();
  min_a  = minute();
  sec = second();
  ui_mian(); // watch
  btn.attachClick(handleClick);
}
char t_second,t_minute;
void loop()
{
  if (now() != prevDisplay) {
    prevDisplay = now();
    digitalClockDisplay();
  }

  digitalClockDisplay();
  t_second = second();
  // t_minute = 
  if(t_second == 0){
    lv_obj_del(ui_Label5);
    
    ui_Label5 = lv_label_create(ui_Screen4);
    lv_obj_set_width(ui_Label5, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label5, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Label5, 0);
    lv_obj_set_y(ui_Label5, 38);
    lv_obj_set_align(ui_Label5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label5, fen);
    lv_obj_set_style_text_color(ui_Label5, lv_color_hex(0xFF5D18), LV_PART_MAIN | LV_STATE_DEFAULT); //设置局部字体颜色
    lv_obj_set_style_text_opa(ui_Label5, 255, LV_PART_MAIN | LV_STATE_DEFAULT); 
    lv_obj_set_style_text_font(ui_Label5, &ui_font_FontBottom, LV_PART_MAIN | LV_STATE_DEFAULT); //设置字体
    
    lv_obj_del(ui_Label6);
    ui_Label6 = lv_label_create(ui_Screen5);
    lv_obj_set_width(ui_Label6, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label6, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Label6, -59);
    lv_obj_set_y(ui_Label6, -43);
    lv_obj_set_align(ui_Label6, LV_ALIGN_CENTER);
    lv_obj_set_style_text_color(ui_Label6, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_label_set_text(ui_Label6, shi);
    lv_obj_set_style_text_font(ui_Label6, &ui_font_FontTop, LV_PART_MAIN | LV_STATE_DEFAULT);

  }

  if(t_minute == 0 && t_second == 0){
    lv_obj_del(ui_Label4);
    ui_Label4 = lv_label_create(ui_Screen4);
    lv_obj_set_width(ui_Label4, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label4, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Label4, -3);
    lv_obj_set_y(ui_Label4, -29);
    lv_obj_set_align(ui_Label4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label4, shi);
    lv_obj_set_style_text_font(ui_Label4, &ui_font_FontTop, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_del(ui_Label7);
    ui_Label7 = lv_label_create(ui_Screen5);
    lv_obj_set_width(ui_Label7, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label7, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Label7, 53);
    lv_obj_set_y(ui_Label7, -43);
    lv_obj_set_align(ui_Label7, LV_ALIGN_CENTER);
    lv_obj_set_style_text_color(ui_Label7, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_label_set_text(ui_Label7, fen);
    lv_obj_set_style_text_font(ui_Label7, &ui_font_FontTop, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_del(ui_Image5);
    ui_Image5 = lv_img_create(ui_Screen2);
    lv_img_set_src(ui_Image5, &ui_img_watch_back_1_h_png); //时指针
    lv_obj_set_width(ui_Image5, LV_SIZE_CONTENT);  
    lv_obj_set_height(ui_Image5, LV_SIZE_CONTENT); 
    lv_obj_set_x(ui_Image5, -13);
    lv_obj_set_y(ui_Image5, 30);
    lv_obj_set_align(ui_Image5, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image5, LV_OBJ_FLAG_ADV_HITTEST);  /// Flags
    lv_obj_clear_flag(ui_Image5, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_img_set_pivot(ui_Image5, 26, -8);
    lv_img_set_angle(ui_Image5, 1600 + (300*hou) + (5*min_a));
  }
  
  lv_timer_handler(); /* let the GUI do its work */
  btn.tick();
  delay(5);
}


//-------------------------------------------------------------------------------
String week() {
  String wk[7] = { "日", "一", "二", "三", "四", "五", "六" };
  String s = wk[weekday() - 1];
  return s;
}

//月日
String monthDay() {
  String s = String(month());
  s = s + "月" + day() + "日";
  return s;
}

String num2str(int digits) {
  String s = "";
  delay(9);
  if (digits < 10)
    s = s + "0";
  s = s + digits;
  return s;
}

void printDigits(int digits) {
  Serial.print(":");
  if (digits < 10)
    Serial.print('0');
  Serial.print(digits);
}

//时钟显示函数------------------------------------------------------------------------
void digitalClockDisplay() {
  String s = num2str(hour());
  // char c[10];
  // String s="13";
  strcpy(shi,s.c_str());
  
  String f = num2str(minute());
  strcpy(fen,f.c_str());
  // zhou = week();
  
  String xq = week();
  strcpy(xq_l,xq.c_str());

  String rl = monthDay();
  strcpy(rili_l,rl.c_str());

}

//------------------------------------------------------------------------------------

//NTP部分的代码,包含2个函数------------------------------------------------------------

/*-------- NTP code ----------*/

const int NTP_PACKET_SIZE = 48;      // NTP时间在消息的前48字节中
byte packetBuffer[NTP_PACKET_SIZE];  //buffer to hold incoming & outgoing packets

time_t getNtpTime() {
  IPAddress ntpServerIP;  // NTP server's ip address

  while (Udp.parsePacket() > 0);  // discard any previously received packets
  //Serial.println("Transmit NTP Request");
  // get a random server from the pool
  WiFi.hostByName(ntpServerName, ntpServerIP);
  //Serial.print(ntpServerName);
  //Serial.print(": ");
  //Serial.println(ntpServerIP);
  sendNTPpacket(ntpServerIP);
  uint32_t beginWait = millis();
  while (millis() - beginWait < 1500) {
    int size = Udp.parsePacket();
    if (size >= NTP_PACKET_SIZE) {
      Serial.println("NTP同步成功啦");
      Udp.read(packetBuffer, NTP_PACKET_SIZE);  // read packet into the buffer
      unsigned long secsSince1900;
      // convert four bytes starting at location 40 to a long integer
      secsSince1900 = (unsigned long)packetBuffer[40] << 24;
      secsSince1900 |= (unsigned long)packetBuffer[41] << 16;
      secsSince1900 |= (unsigned long)packetBuffer[42] << 8;
      secsSince1900 |= (unsigned long)packetBuffer[43];
      //Serial.println(secsSince1900 - 2208988800UL + timeZone * SECS_PER_HOUR);
      return secsSince1900 - 2208988800UL + timeZone * SECS_PER_HOUR;
    }
  }
  //ESP.restart(); //时间获取失败直接重启
  Serial.println("No NTP Response :-(");
  return 0;  // 无法获取时间时返回0
}

// 向NTP服务器发送请求  
void sendNTPpacket(IPAddress &address) {
  // set all bytes in the buffer to 0
  memset(packetBuffer, 0, NTP_PACKET_SIZE);
  // Initialize values needed to form NTP request
  // (see URL above for details on the packets)
  packetBuffer[0] = 0b11100011;  // LI, Version, Mode
  packetBuffer[1] = 0;           // Stratum, or type of clock
  packetBuffer[2] = 6;           // Polling Interval
  packetBuffer[3] = 0xEC;        // Peer Clock Precision
  // 8 bytes of zero for Root Delay & Root Dispersion
  packetBuffer[12] = 49;
  packetBuffer[13] = 0x4E;
  packetBuffer[14] = 49;
  packetBuffer[15] = 52;
  // all NTP fields have been given values, now
  // you can send a packet requesting a timestamp:
  Udp.beginPacket(address, 123);  //NTP requests are to port 123
  Udp.write(packetBuffer, NTP_PACKET_SIZE);
  Udp.endPacket();
}

static void handleClick() {
  i=1;
  if(i==1){
    delay(100);
    Clock=Clock+1;
    a=1;
    if(Clock == 4)
    Clock=1;
    i=0;
  }
}
