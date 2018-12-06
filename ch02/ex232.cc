#include <iostream>
#include <cstdlib>

int main(int argc, char const *argv[])
{
    int *ip1, *ip2;
    std::cout << "ip1: " << ip1 << " ip2: " << ip2 << '\n';
    // ip1: 0x0 ip2: 0x0 <- both are pointers to `int`

    double dp, *dp2;
    std::cout << "dp: " << dp << " dp2: " << dp2 << '\n';
    // dp: 0 dp2: 0x0 <- double 0 and pointed to `double`

    int ival = 42;
    int *p = &ival;
    std::cout << "ival: " << ival << " p: " << p << '\n';
    // ival: 42 p: 0x7ffeebe3469c
    std::cout << "&ival: " << &ival << " p: " << p << '\n';
    // &ival: 0x7ffeebe3469c p: 0x7ffeebe3469c

    *p = 0;
    std::cout << "*p: " << *p << '\n';
    // *p: 0

    std::cout << "ival: " << ival << '\n';
    // ival: 0

    /*
    * The above is to show that you can use a pointer
    * via "dereferencing" to change the value of the obj
    * it points to.
    *
    * Pretty cool.
    */

    int *p1 = nullptr;  // preferred, C++ 11 way, can be converted to any other
                        // pointer type
    int *p2 = 0;        // ok to do.
    int *p3 = NULL;     // old school

    std::cout << "p1: " << p1 << " p2: " << p2 << " p3: " << p3 << '\n';
    // p1: 0x0 p2: 0x0 p3: 0x0

    return 0;
}
