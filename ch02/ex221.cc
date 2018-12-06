#include <iostream>

int main(int argc, char const *argv[])
{
    int i = 0;

    // double* dp = &i; -> no go bc a double is pointing to an int
    int* dp = &i;
    std::cout << "dp: " << dp << '\n';
    // dp: 0x7ffeebe176bc

    // int *ip = i;
    // error: cannot initialize a variable of type 'int *' with an lvalue of type 'int'

    int *ip = &i;  // can't point to an int directly
    std::cout << "ip: " << *ip << '\n';
    // ip: 0

    int *p = &i;
    std::cout << "*p: " << *p << '\n';
    // p: 0
    return 0;
}
