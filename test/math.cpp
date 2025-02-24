#include<cmath>
#include<iostream>

int main() {
    int a = -5;
    int int_abs = abs(a);

    double b = -5.5;
    double float_abs = fabs(b);

    double power = pow(2, 3);
    double sqrt_num = sqrt(4);

    double ceil_num = ceil(4.2);
    double floor_num = floor(4.7);

    double fmod_num = fmod(5.5, 2.0);
    double exponent = exp(1);
    double logarithm = log(2.718281828459045);
    double log_base_10 = log10(1000);

    double rounded = round(2.5);

    std::cout << "int abs: " << int_abs << std::endl;
    std::cout << "float abs: " << float_abs << std::endl;
    std::cout << "power: " << power << std::endl;
    std::cout << "sqrt_num: " << sqrt_num << std::endl;
    std::cout << "ceil num: " << ceil_num << std::endl;
    std::cout << "floor num: " << floor_num << std::endl;
    std::cout << "fmod num: " << fmod_num << std::endl;
    std::cout << "exponent: " << exponent << std::endl;
    std::cout << "logarithm: " << logarithm << std::endl;
    std::cout << "log_base_10: " << log_base_10 << std::endl;
    std::cout << "rounded: " << rounded << std::endl;

    return 0;
}