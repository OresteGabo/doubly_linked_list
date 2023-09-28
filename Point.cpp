//
// Created by oreste on 28/09/23.
//

#include "Point.h"

Point::Point(int dX, int dY) : d_x(dX), d_y(dY) {}

Point::Point(int dXY) : Point(dXY,dXY){}

Point::Point() : Point(0){}
