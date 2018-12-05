#include <iostream>

int main(int argc, char const *argv[])
{
    int i, &ri = i;
    i=5, ri=10;
    std::cout << "i: " << i << " ri: " << ri << '\n';
    // prints i: 10 ri: 10 because ri is changed and that changes i.
    return 0;
}
