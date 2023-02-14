#include <Pocuter.h>

uint16_t screenSizeX;
uint16_t screenSizeY;

UGUI* gui;

void setupGUI(Pocuter* pocuterInstance, const char* title) {
  gui = pocuterInstance->ugui;

  pocuterInstance->Display->getDisplaySize(screenSizeX, screenSizeY);

  gui->UG_FillFrame(0, 0, screenSizeX - 1, 9, C_MIDNIGHT_BLUE);
  gui->UG_FillFrame(0, 10, screenSizeX - 1, screenSizeY - 1, C_BLACK);
  gui->UG_FontSelect(&FONT_5X8);
  gui->UG_SetForecolor(C_WHITE);
  gui->UG_SetBackcolor(C_MIDNIGHT_BLUE);
  gui->UG_PutString(1, 1, title);
}