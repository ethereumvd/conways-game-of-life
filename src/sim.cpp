#include "sim.h"

Simulate::Simulate() {

  grid = Grid();

}

void Simulate::Draw() {

  grid.draw_grid();

}

void Simulate::setval(int row, int column, int val) {

  grid.set_value(row, column, val);

}
