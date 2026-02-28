#include <TFT_eSPI.h>
#include <SPI.h>

static const unsigned char PROGMEM image_ArrowUpFilled_bits[] = {0x03,0x00,0x04,0x80,0x0b,0x40,0x17,0xa0,0x2f,0xd0,0x5f,0xe8,0x86,0x84,0xf5,0xbc,0x16,0xa0,0x15,0xa0,0x16,0xa0,0x15,0xa0,0x17,0xa0,0x10,0x20,0x1f,0xe0};
static const unsigned char PROGMEM image_message_bits[] = {0x7f,0xfe,0x80,0x02,0x80,0x01,0x96,0xd1,0x9f,0xf9,0x80,0x01,0x80,0x01,0x95,0xb1,0x9f,0xf9,0x80,0x01,0x80,0x01,0x63,0xfe,0x14,0x00,0x08,0x00,0x10,0x00,0x00,0x00};
static const unsigned char PROGMEM image_passport_left_bits[] = {0x3c,0x40,0x98,0xa4,0xa4,0x98,0x80,0x80,0xa0,0x90,0x88,0xa4,0x90,0x88,0xa4,0x90,0x88,0xa4,0x90,0x88,0xa4,0x90,0x88,0xa4,0x90,0x88,0x84,0x80,0x40,0x60,0x70,0x78,0x7c,0x5c,0x4c,0x4c,0x4c,0x4c,0x4c,0x4c,0x4c,0x4c,0x4c,0x4c,0x4c,0x4c};

TFT_eSPI tft = TFT_eSPI();
TFT_eSPI_Button A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z, one, two, three, four, five, six, seven, eight, nine, zero;
TFT_eSPI_Button caps, lower, symbols, send;

void drawScreen_1(void) {
    tft.drawRect(49, 6, 264, 88, 0xFFFF);
    tft.drawBitmap(43, 6, image_passport_left_bits, 6, 46, 0xFFFF);
    tft.drawBitmap(293, 9, image_message_bits, 16, 16, 0xFFFF);
    tft.drawRect(6, 7, 31, 221, 0xFFFF);
    tft.drawBitmap(15, 201, image_ArrowUpFilled_bits, 14, 15, 0xFFFF);
    tft.drawLine(6, 36, 36, 36, 0xFFFF);
    tft.drawLine(6, 67, 36, 67, 0xFFFF);
    tft.drawLine(6, 98, 36, 98, 0xFFFF);
    tft.drawLine(6, 191, 36, 191, 0xFFFF);
    tft.drawLine(48, 139, 311, 139, 0xFFFF);
    tft.drawLine(48, 168, 312, 168, 0xFFFF);
    tft.drawLine(48, 197, 311, 197, 0xFFFF);
    tft.drawLine(77, 110, 77, 227, 0xFFFF);
    tft.drawLine(105, 110, 105, 226, 0xFFFF);
    tft.drawLine(135, 111, 135, 226, 0xFFFF);
    tft.drawLine(164, 111, 164, 226, 0xFFFF);
    tft.drawLine(193, 110, 193, 226, 0xFFFF);
    tft.drawLine(250, 110, 250, 227, 0xFFFF);
    tft.drawLine(280, 110, 280, 227, 0xFFFF);
    tft.drawLine(221, 227, 221, 111, 0xFFFF);
    tft.drawRect(48, 110, 265, 118, 0xFFFF);
    tft.setTextColor(0xFFFF);
    tft.setTextSize(1);
    tft.setFreeFont(&FreeMonoBold18pt7b);
    tft.drawString("A", 12, 9);
    tft.drawString("a", 11, 37);
    tft.drawString("1", 11, 69);
    tft.drawString("A", 53, 112);
    tft.drawString("B", 82, 112);
    tft.drawString("C", 110, 112);
    tft.drawString("D", 140, 112);
    tft.drawString("E", 169, 112);
    tft.drawString("F", 198, 112);
    tft.drawString("G", 226, 112);
    tft.drawString("H", 256, 112);
    tft.drawString("I", 53, 140);
    tft.drawString("J", 82, 140);
    tft.drawString("K", 110, 140);
    tft.drawString("L", 140, 140);
    tft.drawString("M", 169, 140);
    tft.drawString("N", 198, 140);
    tft.drawString("O", 226, 140);
    tft.drawString("P", 256, 140);
    tft.drawString("Q", 53, 167);
    tft.drawString("R", 82, 169);
    tft.drawString("S", 110, 169);
    tft.drawString("T", 140, 169);
    tft.drawString("U", 169, 169);
    tft.drawString("V", 198, 169);
    tft.drawString("W", 226, 169);
    tft.drawString("X", 256, 169);
    tft.drawString("Y", 53, 199);
    tft.drawString("Z", 82, 199);
    tft.drawString(",", 110, 196);
    tft.drawString(".", 140, 199);
    tft.drawString("/", 169, 199);
    tft.drawString(";", 198, 199);
    tft.drawString(":", 226, 199);
    tft.drawString("'", 256, 199);
    tft.drawString("*", 287, 112);
    tft.drawString("]", 287, 138);
    tft.drawString("[", 283, 168);
    tft.drawString("\"", 287, 199);
}

void drawScreen_2(void) {
    tft.drawRect(49, 6, 264, 88, 0xFFFF);
    tft.drawBitmap(43, 6, image_passport_left_bits, 6, 46, 0xFFFF);
    tft.drawBitmap(293, 9, image_message_bits, 16, 16, 0xFFFF);
    tft.drawRect(6, 7, 31, 221, 0xFFFF);
    tft.drawBitmap(15, 201, image_ArrowUpFilled_bits, 14, 15, 0xFFFF);
    tft.drawLine(6, 36, 36, 36, 0xFFFF);
    tft.drawLine(6, 67, 36, 67, 0xFFFF);
    tft.drawLine(6, 98, 36, 98, 0xFFFF);
    tft.drawLine(6, 191, 36, 191, 0xFFFF);
    tft.drawLine(48, 197, 311, 197, 0xFFFF);
    tft.drawLine(77, 110, 77, 227, 0xFFFF);
    tft.drawLine(105, 110, 105, 226, 0xFFFF);
    tft.drawLine(135, 111, 135, 226, 0xFFFF);
    tft.drawLine(164, 111, 164, 226, 0xFFFF);
    tft.drawLine(193, 110, 193, 226, 0xFFFF);
    tft.drawLine(250, 110, 250, 227, 0xFFFF);
    tft.drawLine(280, 110, 280, 227, 0xFFFF);
    tft.drawRect(48, 110, 265, 118, 0xFFFF);
    tft.drawLine(48, 139, 311, 139, 0xFFFF);
    tft.drawLine(48, 168, 312, 168, 0xFFFF);
    tft.drawLine(221, 227, 221, 111, 0xFFFF);
    tft.setTextColor(0xFFFF);
    tft.setTextSize(1);
    tft.setFreeFont(&FreeMonoBold18pt7b);
    tft.drawString("A", 12, 9);
    tft.drawString("a", 11, 37);
    tft.drawString("1", 11, 69);
    tft.drawString("a", 53, 112);
    tft.drawString("b", 82, 112);
    tft.drawString("c", 110, 112);
    tft.drawString("d", 140, 112);
    tft.drawString("e", 169, 112);
    tft.drawString("f", 198, 112);
    tft.drawString("g", 226, 107);
    tft.drawString("h", 256, 112);
    tft.drawString("i", 53, 140);
    tft.drawString("j", 82, 140);
    tft.drawString("k", 110, 140);
    tft.drawString("l", 140, 140);
    tft.drawString("m", 169, 140);
    tft.drawString("n", 198, 140);
    tft.drawString("o", 226, 140);
    tft.drawString("p", 256, 136);
    tft.drawString("q", 53, 165);
    tft.drawString("r", 82, 169);
    tft.drawString("s", 111, 169);
    tft.drawString("t", 140, 169);
    tft.drawString("u", 169, 169);
    tft.drawString("v", 198, 169);
    tft.drawString("w", 226, 169);
    tft.drawString("x", 256, 169);
    tft.drawString("y", 53, 194);
    tft.drawString("z", 82, 199);
    tft.drawString("|", 110, 196);
    tft.drawString("\\", 140, 199);
    tft.drawString("{", 169, 197);
    tft.drawString("}", 198, 197);
    tft.drawString("[", 226, 197);
    tft.drawString("]", 256, 197);
    tft.drawString("-", 287, 112);
    tft.drawString("_", 287, 135);
    tft.drawString("=", 287, 168);
    tft.drawString("+", 287, 199);
}

void drawScreen_4(void) {
    tft.drawRect(49, 6, 264, 88, 0xFFFF);
    tft.drawBitmap(43, 6, image_passport_left_bits, 6, 46, 0xFFFF);
    tft.drawBitmap(293, 9, image_message_bits, 16, 16, 0xFFFF);
    tft.drawRect(6, 7, 31, 221, 0xFFFF);
    tft.drawBitmap(15, 201, image_ArrowUpFilled_bits, 14, 15, 0xFFFF);
    tft.drawLine(6, 36, 36, 36, 0xFFFF);
    tft.drawLine(6, 67, 36, 67, 0xFFFF);
    tft.drawLine(6, 98, 36, 98, 0xFFFF);
    tft.drawLine(6, 191, 36, 191, 0xFFFF);
    tft.drawLine(48, 197, 311, 197, 0xFFFF);
    tft.drawLine(77, 110, 77, 227, 0xFFFF);
    tft.drawLine(105, 110, 105, 226, 0xFFFF);
    tft.drawLine(135, 111, 135, 226, 0xFFFF);
    tft.drawLine(164, 111, 164, 226, 0xFFFF);
    tft.drawLine(193, 110, 193, 226, 0xFFFF);
    tft.drawLine(250, 110, 250, 227, 0xFFFF);
    tft.drawLine(280, 110, 280, 227, 0xFFFF);
    tft.drawRect(48, 110, 265, 118, 0xFFFF);
    tft.drawLine(48, 139, 311, 139, 0xFFFF);
    tft.drawLine(48, 168, 312, 168, 0xFFFF);
    tft.drawLine(221, 227, 221, 111, 0xFFFF);
    tft.setTextColor(0xFFFF);
    tft.setTextSize(1);
    tft.setFreeFont(&FreeMonoBold18pt7b);
    tft.drawString("A", 12, 9);
    tft.drawString("a", 11, 37);
    tft.drawString("1", 11, 69);
    tft.drawString("1", 53, 112);
    tft.drawString("2", 82, 112);
    tft.drawString("3", 110, 112);
    tft.drawString("4", 140, 112);
    tft.drawString("5", 169, 112);
    tft.drawString("6", 198, 112);
    tft.drawString("7", 226, 112);
    tft.drawString("8", 256, 112);
    tft.drawString("0", 53, 140);
    tft.drawString("!", 82, 140);
    tft.drawString("@", 110, 140);
    tft.drawString("#", 140, 140);
    tft.drawString("$", 169, 140);
    tft.drawString("%", 198, 140);
    tft.drawString("^", 226, 139);
    tft.drawString("&", 256, 140);
    tft.drawString("(", 53, 167);
    tft.drawString(")", 82, 169);
    tft.drawString("9", 287, 112);
    tft.drawString("*", 287, 138);
}

void setup()
{
  tft.init();             // Initialize the display
  tft.setRotation(1);     // Set rotation (adjust as needed)
  tft.fillScreen(TFT_BLACK);
  drawScreen_1();
  caps.initButton(&tft, 20, 20, 29, 29, TFT_TRANSPARENT, TFT_TRANSPARENT, TFT_TRANSPARENT, "", 2);
  caps.drawButton();
  lower.initButton(&tft, 20, 50, 29, 29, TFT_TRANSPARENT, TFT_TRANSPARENT, TFT_TRANSPARENT, "", 2);
  lower.drawButton();
  symbols.initButton(&tft, 20, 83, 29, 29, TFT_TRANSPARENT, TFT_TRANSPARENT, TFT_TRANSPARENT, "", 2);
  symbols.drawButton();
  send.initButton(&tft, 20, 208, 29, 29, TFT_TRANSPARENT, TFT_TRANSPARENT, TFT_TRANSPARENT, "", 2);
  send.drawButton();
  drawScreen_1();

  
}

void loop() {
  uint16_t x = 0, y = 0;    // Variables to store touch coordinates

  // Check for touch
  if (tft.getTouch(&x, &y)) {
    if (caps.contains(x, y)) {
      tft.fillScreen(TFT_BLACK);
      caps.drawButton();
      symbols.drawButton();
      lower.drawButton();
      send.drawButton();
      drawScreen_1();
    }
    else if (lower.contains(x, y)) {
      tft.fillScreen(TFT_BLACK);
      caps.drawButton();
      symbols.drawButton();
      lower.drawButton();
      send.drawButton();
      drawScreen_2();
    }
    else if (symbols.contains(x, y)) {
      tft.fillScreen(TFT_BLACK);
      caps.drawButton();
      symbols.drawButton();
      lower.drawButton();
      send.drawButton();
      drawScreen_4();
    }
    else if (send.contains(x, y)) {
      tft.fillScreen(TFT_BLACK);
      caps.drawButton();
      symbols.drawButton();
      lower.drawButton();
      send.drawButton();
      drawScreen_2();
    }
  }

  delay(50); // Small delay to debounce
}
