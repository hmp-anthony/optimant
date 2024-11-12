#include <iostream>

#include <autodiff/var.hpp>
#include <autodiff/gradient.hpp>

using autodiff::base::var;


template<int N>
std::array<double, N>  gd(std::array<var, N>& v, var& eqn, double step_size, int num_steps) {

    for(int i = 0; i < num_steps; ++i) {
	
        auto G = autodiff::base::gradient(eqn);
	std::array<double, N> c;

	for(int i = 0; i < N; ++i) {
            c[i] = v[i].value();
            c[i] = c[i] - G[v[i]] * step_size;
            set_value(v[i], c[i]);
	}

	eqn.forward_pass();
    }
    
    std::array<double, N> output;
    for(int i = 0; i < N; ++i) {
	output[i] = v[i].value();
    }
    return output;
}
