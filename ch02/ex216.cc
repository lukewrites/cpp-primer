#include <iostream>

int main(int argc, char const *argv[])
{
    int i = 0, &r1 = i;
    double d=0, &r2=d;

    std::cout << "i: " << i << " r1: " << r1 << " d: " << d << " r2: " << r2 << '\n';
    // i: 0 r1: 0 d: 0 r2: 0

    r2 = 3.14159;
    std::cout << "i: " << i << " r1: " << r1 << " d: " << d << " r2: " << r2 << '\n';
    // i: 0 r1: 0 d: 3.14159 r2: 3.14159

    r2 = r1;
    std::cout << "i: " << i << " r1: " << r1 << " d: " << d << " r2: " << r2 << '\n';
    // i: 0 r1: 0 d: 0 r2: 0

    i = r2;
    std::cout << "i: " << i << " r1: " << r1 << " d: " << d << " r2: " << r2 << '\n';
    // i: 0 r1: 0 d: 0 r2: 0

    r1 = d;
    std::cout << "i: " << i << " r1: " << r1 << " d: " << d << " r2: " << r2 << '\n';
    // i: 0 r1: 0 d: 0 r2: 0

    return 0;
}
