#!/usr/bin/env bash

g++ src/main.cpp src/grid.cpp -lraylib -lGL -lm -lpthread -ldl -lrt -lX11 -o bin/game

./bin/game
