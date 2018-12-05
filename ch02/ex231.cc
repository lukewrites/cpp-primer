#include <iostream>

int main(int argc, char const *argv[])
{
    int ival = 1024;
    std::cout << "ival: " << ival << '\n';

    int &refVal = ival;
    std::cout << "&refVal: " << refVal << '\n';

    // int &newRef = &refVal;  <-- can't do this.

    std::cout << "&refVal: " << &refVal << '\n'; // won't work?
    // so it does work, but gives a memory address!?

    // int &refVal2;  <-- won't work

    refVal = 2;
    std::cout << "refVal: " << refVal << '\n';
    std::cout << "ival: " << ival << '\n';
    // pretty crazy, these references are powerful.

    int ii = refVal;
    std::cout << "ii: " << ii << '\n';
    // `ii` has the newly assigned value.

    return 0;
}
