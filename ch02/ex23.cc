#include <iostream>

int main(int argc, char const *argv[])
{
    unsigned u = 10, u2 = 42;
    std::cout << u2 - u << '\n';
    std::cout << u - u2 << '\n';

    int i = 10, i2 = 42;
    std::cout << i2 - i << '\n';
    std::cout << i - i2 << '\n';

    std::cout << i - u << '\n';
    std::cout << u - i << '\n';
    // those both poop the bed because it's mixing signed & unsigned

    std::cout << '\115' << '\n';

    std::cout << 3.14159L << '\n';

    // wide char literal
    std::cout << L'a' << '\n';
    // wow, this prints `97`

    std::cout << L"a" << '\n';

    std::cout << u8"hi!" << '\n';

    std::cout << "Who goes with F\145rgus?\012" << '\n';
    // look at that awesome newline thanks to \012

    std::cout << "1024f" << '\n';

    return 0;
}
