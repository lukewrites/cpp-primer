#include <iostream>

int main(int argc, char const *argv[])
{
    int i = 100, sum = 0;

    for (int i = 0; i !=10 ; i++)
    {
        sum += i;
    }

    std::cout << i << " " << sum << std::endl;
    // print 100 45 because the `i` in the for loop def is what's used

    return 0;
}
