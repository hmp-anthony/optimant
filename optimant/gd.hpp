#include <iostream>

#include <autodiff/var.hpp>
#include <autodiff/gradient.hpp>

using autodiff::base::var;

std::array<double, 2>  gd(std::array<var, 2>& v, var& eqn, double step_size, int num_steps) {

    for(int i = 0; i < num_steps; ++i) {    
        auto G = autodiff::base::gradient(eqn);
        auto c0 = v[0].value();
        auto c1 = v[1].value();

        c0 = c0 - G[v[0]] * step_size;
        c1 = c1 - G[v[1]] * step_size;

        set_value(v[0], c0);
        set_value(v[1], c1);
    }

    return {v[0].value(), v[1].value()};
}
