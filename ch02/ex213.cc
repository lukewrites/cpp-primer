#include <iostream>

int i = 42;
int main(int argc, char const *argv[])
{
    int i = 100;
    int j = i;

    std::cout << "i: " << i << " j: " << j << '\n';
    // i: 100 j: 100

    j = ::i;
    // i: 100 j: 42
    // NB: no `int` before j because it's been declared already :)

    std::cout << "i: " << i << " j: " << j << '\n';

    return 0;
}
