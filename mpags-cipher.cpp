#include <iostream>
int main()
{
    // Exercise 1
    std::cout << "Hello World! \n";

    // Exercise 2
    int my_var{2};
    my_var = 77;
    std::cout << my_var << std::endl;

    double my_double{3.14};
    std::cout << my_double << std::endl;

    int my_int{my_double};
    std::cout << my_int << std::endl;

    // Exercise 3
    constexpr double a{2.9};
    std::cout << a << std::endl;

    const int my_int2{90};
    // my_int2 = 4; this line causes an error as my_int2 is a constant and cannot be modified

    std::string my_string{"Hello Again World!"};
    std::cout << my_string << "\n";

    // Exercise 4
    double ex4_double{5.99};
    int ex4_int{8};
    std::cout << ex4_double * ex4_int << std::endl;

    std::cout << ex4_double / ex4_int << std::endl;

    std::cout << ex4_int / my_int << std::endl;

    std::string ex4_string{"Yay!"};
    char ex4_char{ex4_string[3]};
    std::cout << ex4_char << std::endl;
    
    /* code outputs:
    Hello World!
    77
    3.14
    3
    2.9
    Hello Again World!
    47.92
    0.74875
    2
    !
    */
}   