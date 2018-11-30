#include <iostream>

using std::cout;  using std::cin; using std::endl;

int main(int argc, char const *argv[])
{
    cout << "Enter two number to multiply" << endl;
    double int1, int2;
    cin >> int1 >> int2;
    cout << "The product of " << int1 << " and " << int2
         << " is " << int1 * int2 << endl;
    return 0;
}
