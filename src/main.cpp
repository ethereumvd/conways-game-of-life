#include "raylib.h"
#include "sim.h"

const int win_height = 800;
const int win_width = 1200;
const char* win_title = "Conway's Game of life";
const int fps = 12;
const int cell_size = 4;
Color grey = {29, 29, 29, 255};

int main() {

  InitWindow(win_width, win_height, win_title);
  SetTargetFPS(fps);
  Simulate simulate = Simulate(win_width, win_height, cell_size);
  // simulate.setval(5, 29, 1);
  // simulate.setval(6, 0, 1);
  // simulate.setval(5, 0, 1);
  // simulate.setval(4, 0, 1);

  while(!WindowShouldClose()) {

    BeginDrawing();
    ClearBackground(grey);
    simulate.Draw();
    simulate.update_state();
    EndDrawing();

  }

  CloseWindow();

}
