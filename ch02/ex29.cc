#include <iostream>

int main(int argc, char const *argv[])
{
    // std::cin >> int input_value; throws an error.
    // however, so does:
    // std::cin >> int(input_value);
    // std::cout << input_value << '\n';
    // int i = {3.14} will throw an error & a warning. the below throws
    // a warning only.
    int i = (3.14);
    std::cout << i << '\n';
    // returns `3`

    double salary, wage = 9999.99;
    // salary=0, wage=9999.99
    std::cout << "salary: " << salary << " wage: " << wage << '\n';

    double wage2 = 9999.99;
    double salary2(wage2);
    std::cout << "salary2: " << salary2 << " wage2: " << wage2 << '\n';
    // you could also do `double salary2 = wage2;

    return 0;
}
