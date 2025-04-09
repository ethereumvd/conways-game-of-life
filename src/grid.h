#pragma once

#include<vector>

class Grid {

public:
  Grid();
  void Initialise();
  int grid[30][30];
  void draw_grid();
  void set_value(int row, int column, int val);

private:
  int rows;
  int columns;
  int cell_size;

};
