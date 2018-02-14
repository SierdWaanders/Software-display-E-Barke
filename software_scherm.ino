\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
\\\\\\\\\ Gemaakt door: Sierd Waanders \\\\\\\\
\\\\\\\\\Studenten Num: 437068 \\\\\\\\\\\\\\\\
\\\\\\\\\\\\\\\ Studie: Mechatronica \\\\\\\\\\
\\\\\\\\\\\\\\\\\ Klas: EMT2B \\\\\\\\\\\\\\\\\
\\\\\\\\\\\\\\ Project: E - Barke \\\\\\\\\\\\\\\
\\\\\\\\\\\ Gemaakt op: 8 - 12 - 2017 \\\\\\\\\\\\\
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\


#include <Adafruit_GFX.h>                           //libary voor de figuren en letters op scherm
#include <TouchScreen.h>                            //libary voor touchscreen gedeelte
#include <Adafruit_TFTLCD.h>                        //libary voor de figuren en letters op scherm

#define YP A3
#define XM A2
#define YM 9
#define XP 8

#define TS_MINX 210
#define TS_MINY 210
#define TS_MAXX 920
#define TS_MAXY 910


#define LCD_CS A3
#define LCD_CD A2
#define LCD_WR A1
#define LCD_RD A0
#define LCD_RESET A4


#define BLACK     0x0000
#define BLUE      0x001F
#define GREY      0xCE79
#define LIGHTGREY 0xDEDB
#define RED       0xF800
#define GREEN     0x07E0
#define CYAN      0x07FF
#define MAGENTA   0xF81F
#define YELLOW    0xFFE0
#define WHITE     0xFFFF
#define ORANGE    0xFEA0

#define MINPRESSURE 1
#define MAXPRESSURE 1000

TouchScreen ts = TouchScreen(XP, YP, XM, YM, 364);

Adafruit_TFTLCD tft(LCD_CS, LCD_CD, LCD_WR, LCD_RD, LCD_RESET);
char assist = 49;                                  //1 is in ASCII-tabel 49
int a = 0;                                         //stand van assist lvl

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////BATTERY LVL/////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Battery_lvl() {
  float battery = A5;

  if (battery < 1) {                              //minder dan %10 batterij lvl dan gaat dit aan
    tft.drawRect(10, 10, 19, 30, RED);
    tft.drawRect(34, 10, 19, 30, RED);
    tft.drawRect(57, 10, 19, 30, RED);
    tft.drawRect(82, 10, 19, 30, ORANGE);
    tft.drawRect(106, 10, 19, 30, ORANGE);
    tft.drawRect(130, 10, 19, 30, ORANGE );
    tft.drawRect(154, 10, 19, 30, GREEN);
    tft.drawRect(178, 10, 19, 30, GREEN);
    tft.drawRect(204, 10, 19, 30, GREEN);
  }

  if (battery < 2) {                              //minder dan %20 batterij lvl dan gaat dit aan
    tft.fillRect(10, 10, 19, 30, RED);
    tft.drawRect(34, 10, 19, 30, RED);
    tft.drawRect(57, 10, 19, 30, RED);
    tft.drawRect(82, 10, 19, 30, ORANGE);
    tft.drawRect(106, 10, 19, 30, ORANGE);
    tft.drawRect(130, 10, 19, 30, ORANGE );
    tft.drawRect(154, 10, 19, 30, GREEN);
    tft.drawRect(178, 10, 19, 30, GREEN);
    tft.drawRect(204, 10, 19, 30, GREEN);
  }

  if (battery < 3) {                              //minder dan %30 batterij lvl dan gaat dit aan
    tft.fillRect(10, 10, 19, 30, RED);
    tft.fillRect(34, 10, 19, 30, RED);
    tft.drawRect(57, 10, 19, 30, RED);
    tft.drawRect(82, 10, 19, 30, ORANGE);
    tft.drawRect(106, 10, 19, 30, ORANGE);
    tft.drawRect(130, 10, 19, 30, ORANGE );
    tft.drawRect(154, 10, 19, 30, GREEN);
    tft.drawRect(178, 10, 19, 30, GREEN);
    tft.drawRect(204, 10, 19, 30, GREEN);
  }

  if (battery < 4) {                              //minder dan %40 batterij lvl dan gaat dit aan
    tft.fillRect(10, 10, 19, 30, RED);
    tft.fillRect(34, 10, 19, 30, RED);
    tft.fillRect(57, 10, 19, 30, RED);
    tft.drawRect(82, 10, 19, 30, ORANGE);
    tft.drawRect(106, 10, 19, 30, ORANGE);
    tft.drawRect(130, 10, 19, 30, ORANGE );
    tft.drawRect(154, 10, 19, 30, GREEN);
    tft.drawRect(178, 10, 19, 30, GREEN);
    tft.drawRect(204, 10, 19, 30, GREEN);
  }

  if (battery < 5) {                               //minder dan %50 batterij lvl dan gaat dit aan
    tft.fillRect(10, 10, 19, 30, RED);
    tft.fillRect(34, 10, 19, 30, RED);
    tft.fillRect(57, 10, 19, 30, RED);
    tft.fillRect(82, 10, 19, 30, ORANGE);
    tft.drawRect(106, 10, 19, 30, ORANGE);
    tft.drawRect(130, 10, 19, 30, ORANGE );
    tft.drawRect(154, 10, 19, 30, GREEN);
    tft.drawRect(178, 10, 19, 30, GREEN);
    tft.drawRect(204, 10, 19, 30, GREEN);
  }

  if (battery < 6) {                               //minder dan %60 batterij lvl dan gaat dit aan
    tft.fillRect(10, 10, 19, 30, RED);
    tft.fillRect(34, 10, 19, 30, RED);
    tft.fillRect(57, 10, 19, 30, RED);
    tft.fillRect(82, 10, 19, 30, ORANGE);
    tft.fillRect(106, 10, 19, 30, ORANGE);
    tft.drawRect(130, 10, 19, 30, ORANGE );
    tft.drawRect(154, 10, 19, 30, GREEN);
    tft.drawRect(178, 10, 19, 30, GREEN);
    tft.drawRect(204, 10, 19, 30, GREEN);
  }

  if (battery < 7) {                                //minder dan %70 batterij lvl dan gaat dit aan
    tft.fillRect(10, 10, 19, 30, RED);
    tft.fillRect(34, 10, 19, 30, RED);
    tft.fillRect(57, 10, 19, 30, RED);
    tft.fillRect(82, 10, 19, 30, ORANGE);
    tft.fillRect(106, 10, 19, 30, ORANGE);
    tft.fillRect(130, 10, 19, 30, ORANGE);
    tft.drawRect(154, 10, 19, 30, GREEN);
    tft.drawRect(178, 10, 19, 30, GREEN);
    tft.drawRect(204, 10, 19, 30, GREEN);
  }

  if (battery < 8) {                                //minder dan %80 batterij lvl dan gaat dit aan
    tft.fillRect(10, 10, 19, 30, RED);
    tft.fillRect(34, 10, 19, 30, RED);
    tft.fillRect(57, 10, 19, 30, RED);
    tft.fillRect(82, 10, 19, 30, ORANGE);
    tft.fillRect(106, 10, 19, 30, ORANGE);
    tft.fillRect(130, 10, 19, 30, ORANGE);
    tft.fillRect(154, 10, 19, 30, GREEN);
    tft.drawRect(178, 10, 19, 30, GREEN);
    tft.drawRect(204, 10, 19, 30, GREEN);
  }

  if (battery < 9) {                                //minder dan %90 batterij lvl dan gaat dit aan
    tft.fillRect(10, 75, 19, 30, RED);
    tft.fillRect(34, 75, 19, 30, RED);
    tft.fillRect(57, 75, 19, 30, RED);
    tft.fillRect(82, 75, 19, 30, ORANGE);
    tft.fillRect(106, 75, 19, 30, ORANGE);
    tft.fillRect(130, 75, 19, 30, ORANGE);
    tft.fillRect(154, 75, 19, 30, GREEN);
    tft.fillRect(178, 75, 19, 30, GREEN);
    tft.drawRect(204, 75, 19, 30, GREEN);
  }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////START SCREEN///////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void StartScreen() {

  tft.fillScreen(WHITE);

  tft.drawRect(240, 150, 80, 90, BLACK);
  tft.drawRect(240, 60, 80, 90, BLACK);           //blokken van assist lvl
  tft.drawRect(240, 0, 80, 60, BLACK);

  tft.fillRect(255, 100, 50, 10, BLACK);
  tft.fillRect(275, 80, 10, 50, BLACK);           //plus en min
  tft.fillRect(255, 190, 50, 10, BLACK);

  tft.drawChar(243, 2, 65, BLACK, WHITE, 2);
  tft.drawChar(253, 2, 115, BLACK, WHITE, 2);
  tft.drawChar(263, 2, 115, BLACK, WHITE, 2);
  tft.drawChar(273, 2, 105, BLACK, WHITE, 2);
  tft.drawChar(283, 2, 115, BLACK, WHITE, 2);
  tft.drawChar(293, 2, 116, BLACK, WHITE, 2);     //Asist lvl
  tft.drawChar(243, 17, 108, BLACK, WHITE, 2);
  tft.drawChar(253, 17, 118, BLACK, WHITE, 2);
  tft.drawChar(263, 17, 108, BLACK, WHITE, 2);


  tft.drawRect(0, 120, 120, 120, BLACK);
  tft.drawRect(120, 120, 120, 120, BLACK);
  tft.drawChar(15, 130, 83, BLACK, WHITE, 2);
  tft.drawChar(30, 130, 112, BLACK, WHITE, 2);    //bloken van snelheid en trip
  tft.drawChar(45, 130, 101, BLACK, WHITE, 2);
  tft.drawChar(60, 130, 101, BLACK, WHITE, 2);
  tft.drawChar(75, 130, 100, BLACK, WHITE, 2);

  tft.drawChar(135, 130, 84, BLACK, WHITE, 2);
  tft.drawChar(150, 130, 114, BLACK, WHITE, 2);
  tft.drawChar(165, 130, 105, BLACK, WHITE, 2);   // Trip
  tft.drawChar(180, 130, 112, BLACK, WHITE, 2);

  tft.drawChar(65, 215, 75, BLACK, WHITE, 2);
  tft.drawChar(80, 215, 77, BLACK, WHITE, 2);
  tft.drawChar(93, 215, 47, BLACK, WHITE, 2);     //km/h  snelheid
  tft.drawChar(106, 215, 72, BLACK, WHITE, 2);

  tft.drawChar(200, 215, 75, BLACK, WHITE, 2);    //km        trip
  tft.drawChar(215, 215, 77, BLACK, WHITE, 2);

  tft.drawLine(0, 60 , 130, 60, BLACK);           //lijnen battery lvl
  tft.drawLine(130, 60 , 130, 0, BLACK);

  tft.drawChar(10, 20, 79, BLACK, WHITE, 3);
  tft.drawChar(50, 20, 70, BLACK, WHITE, 3);      //off
  tft.drawChar(90, 20, 70, BLACK, WHITE, 3);

  tft.drawChar(133, 5, 66, BLACK, WHITE, 2);
  tft.drawChar(148, 5, 97, BLACK, WHITE, 2);
  tft.drawChar(163, 5, 116, BLACK, WHITE, 2);
  tft.drawChar(178, 5, 116, BLACK, WHITE, 2);
  tft.drawChar(193, 5, 101, BLACK, WHITE, 2);     //battery lvl
  tft.drawChar(208, 5, 114, BLACK, WHITE, 2);
  tft.drawChar(223, 5, 121, BLACK, WHITE, 2);
  tft.drawChar(133, 25, 108, BLACK, WHITE, 2);
  tft.drawChar(148, 25, 118, BLACK, WHITE, 2);
  tft.drawChar(163, 25, 108, BLACK, WHITE, 2);

}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////ASIST LVL/////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Assist_lvl() {
  digitalWrite(12, HIGH);                          //initialise voor touchscreen
  TSPoint p = ts.getPoint();
  digitalWrite(13, LOW);
  pinMode(XM, OUTPUT);
  pinMode(YP, OUTPUT);
  if (p.z > MINPRESSURE && p.z < MAXPRESSURE) {
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //////////////////////////PLUS ASIST LVL/////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    if (p.y > 700 && p.y < 910 && p.x > 330 && p.x < 630 && a == 0) {
      StartScreen();

      tft.drawChar(290, 20, 50, BLACK, WHITE, 4); //49-55
      a++;
    }

    else if (p.y > 700 && p.y < 910 && p.x > 330 && p.x < 630 && a == 1) {
      StartScreen();

      tft.drawChar(290, 20, 51, BLACK, WHITE, 4); //49-55
      a++;
    }

    else if (p.y > 700 && p.y < 910 && p.x > 330 && p.x < 630 && a == 2) {
      StartScreen();

      tft.drawChar(290, 20, 52, BLACK, WHITE, 4); //49-55
      a++;
    }

    else if (p.y > 700 && p.y < 910 && p.x > 330 && p.x < 630 && a == 3) {
      StartScreen();

      tft.drawChar(290, 20, 53, BLACK, WHITE, 4); //49-55
      a++;
    }

    else if (p.y > 700 && p.y < 910 && p.x > 330 && p.x < 630 && a == 4) {
      StartScreen();

      tft.drawChar(290, 20, 54, BLACK, WHITE, 4); //49-55
      a++;
    }

    else if (p.y > 700 && p.y < 910 && p.x > 330 && p.x < 630 && a == 5) {
      StartScreen();

      tft.drawChar(290, 20, 55, BLACK, WHITE, 4); //49-55
      a++;
    }
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //////////////////////////MIN ASIST LVL/////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    if (p.y > 700 && p.y < 910 && p.x > 630 && p.x < 930 && a == 1) {
      StartScreen();

      tft.drawChar(290, 20, 49, BLACK, WHITE, 4); //49-55
      a--;
    }

    else if (p.y > 700 && p.y < 910 && p.x > 630 && p.x < 930 && a == 2) {
      StartScreen();

      tft.drawChar(290, 20, 50, BLACK, WHITE, 4); //49-55
      a--;
    }

    else if (p.y > 700 && p.y < 910 && p.x > 630 && p.x < 930 && a == 3) {
      StartScreen();

      tft.drawChar(290, 20, 51, BLACK, WHITE, 4); //49-55
      a--;
    }

    else if (p.y > 700 && p.y < 910 && p.x > 630 && p.x < 930 && a == 4) {
      StartScreen();

      tft.drawChar(290, 20, 52, BLACK, WHITE, 4); //49-55
      a--;
    }

    else if (p.y > 700 && p.y < 910 && p.x > 630 && p.x < 930 && a == 5) {
      StartScreen();

      tft.drawChar(290, 20, 53, BLACK, WHITE, 4); //49-55
      a--;
    }

    else if (p.y > 700 && p.y < 910 && p.x > 630 && p.x < 930 && a == 6) {
      StartScreen();

      tft.drawChar(290, 20, 54, BLACK, WHITE, 4); //49-55
      a--;
    }
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////OFF/////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    else if (p.y > 1 && p.y < 400 && p.x > 1 && p.x < 350) {



      bool a = false;
OFF:
      tft.fillScreen(LIGHTGREY);

      if (p.y > 250 && p.y < 750 && p.x > 250 && p.x < 750) {
        a = true;
      }

      else if (a = false) {
        goto OFF;
      }
    }
  }
}


void setup() {
  tft.reset();
  uint16_t identifier = tft.readID();
  tft.begin(identifier);
  tft.setRotation(3);
  StartScreen();
  tft.drawChar(290, 20, 49, BLACK, WHITE, 4);       // cijfer 1 van assist lvl
}

void loop() {
  Battery_lvl();                                    // functies word in de loop gezet
  Assist_lvl();                                     // functies word in de loop gezet



}
