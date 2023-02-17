#include <iostream>
#include "point_controller.h"

point_2d::point_2d(int source_x, int source_y) {
    std::cout << "point_2d created" << std::endl;
}

point_2d::~point_2d() {
    std::cout << "point_2d destroyed" << std::endl;
}

int point_2d::get_x() {
    return x;
}

int point_2d::get_y() {
    return y;
}

void point_2d::set_x(int source_x) {
    x = source_x;
}

void point_2d::set_y(int source_y) {
    y = source_y;
}
