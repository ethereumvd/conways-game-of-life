#pragma once

#include "grid.h"

class Simulate {

public:
  Simulate();
  void Draw();
  void setval(int row, int column, int val);

private:
  Grid grid ;
  
};
