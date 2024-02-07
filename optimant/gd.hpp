#include <iostream>

#include <autodiff/gradient.hpp>

using autodiff::base::var;

void fun_manip(const var init_value, const var func) {
    std::cout << "in fun_manip" << std::endl;
}
