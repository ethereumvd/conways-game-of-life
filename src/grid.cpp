#include "grid.h"
#include "raylib.h"

Color alive_color = Color{0, 255, 0, 255};
Color ded_color = Color{55, 55, 55, 255};

Grid::Grid(){

  rows = 30;
  columns = 30;
  cell_size = 25;

  Initialise();

}

void Grid::Initialise() {
  for(int i=0; i<rows; i++) {

    for(int j=0; j<columns; j++) {

      grid[i][j] = 0;

    }

  }
}

void Grid::draw_grid() {

  for(int i=0; i<rows; i++) {

    for(int j=0; j<columns; j++) {

      Color col = grid[i][j] != 0 ? alive_color : ded_color; 
      DrawRectangle(i * cell_size, j * cell_size, cell_size - 1, cell_size - 1, col);

    }

  }

}

void Grid::set_value(int row, int column, int val) {

  if(row >= 0 && row < rows && column < columns && column >= 0) {

    grid[row][column] = val;

  }

}
