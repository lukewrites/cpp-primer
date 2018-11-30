#include <iostream>

int main(int argc, char const *argv[])
{
    int sum=0;

    // sum vals from 1-10 inclusive
    for (int val = 1; val <= 10; ++val)
    {
        sum += val;
    }
    std::cout << "Sum for 1-10 inclusive is " << sum << std::endl;
    return 0;
}
