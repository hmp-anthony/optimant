#include <iostream>

#include <autodiff/gradient.hpp>

using autodiff::base::var;

/*
template<std::size_t N>
std::vector<double> gd(const std::vector<double> init,
                       const double step_size,
                       const int number_of_steps,
                       const var fun) {

    std::vector<var> var_vector;
    for(int i = 0; i < number_of_steps; ++i) {
        // obtain gradient of loff function.
        auto C = autodiff::base::gradient(fun);
        // take a step
        a_ = a_ - step_size*C[a];
        b_ = b_ - step_size*C[b];
        std::cout << a_ << " " << b_ << std::endl;
    }

}*/
