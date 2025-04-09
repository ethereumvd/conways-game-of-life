#include "raylib.h"
#include "sim.h"

const int win_height = 750;
const int win_width = 750;
const char* win_title = "Conway's Game of life";
const int fps = 12;
const int cell_size = 25;
Color grey = {29, 29, 29, 255};

int main() {

  InitWindow(win_width, win_height, win_title);
  SetTargetFPS(fps);
  Simulate simulate = Simulate();

  while(!WindowShouldClose()) {

    BeginDrawing();
    ClearBackground(grey);
    simulate.Draw();
    EndDrawing();

  }

  CloseWindow();

}
