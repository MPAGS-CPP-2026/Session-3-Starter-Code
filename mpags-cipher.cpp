#include <iostream>
#include <string>
int main()
{
    // This is a comment
    /* This is a
 Multiline comment */

 // Exercises 3.1 -3.4
    std::cout << "Hello World!\n";

    int a{1};
    a += 2;
    std::cout << a << std::endl;

    double b{3.14};
    std::cout << b << std::endl;

    int c = b;
    std::cout << c << std::endl;

    const double d{2.71};
    std::cout << d << std::endl;

    int e{5};
    e *= 2;
    const int f{e};
    std::cout << f << std::endl;

    std::string g{"Hello"};
    std::cout << g << "\n";

    int h{10};
    double i{5.2};
    std::cout << h * i << std::endl;
    std::cout << i / h << std::endl;
    std::cout << h / e << std::endl;

    std::string j{"Goodbye"};
    char k{j[1]};
    std::cout << k << "\n";

    // Exercise 3.5
    char in_char{'x'};
    std::string out_str{""};
    // Take each letter from user input and in each case:
    while(std::cin >> in_char)
    {
    // - Convert to upper case
    if (std::isalpha(in_char)) {
        out_str += std::toupper(in_char);
        continue;
    }
    // - Change numbers to words
    switch (in_char) {
            case '0':
                out_str += "ZERO";
                break;
            case '1':
                out_str += "ONE";
                break;
            case '2':
                out_str += "TWO";
                break;
            case '3':
                out_str += "THREE";
                break;
            case '4':
                out_str += "FOUR";
                break;
            case '5':
                out_str += "FIVE";
                break;
            case '6':
                out_str += "SIX";
                break;
            case '7':
                out_str += "SEVEN";
                break;
            case '8':
                out_str += "EIGHT";
                break;
            case '9':
                out_str += "NINE";
                break;
            default:
                break;
            }
    // - Ignore any other (non-alpha) characters
    // DON’T add to the variable
    }
    // print out the new string
    std::cout << out_str << std::endl;
}