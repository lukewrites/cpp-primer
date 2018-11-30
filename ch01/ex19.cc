#include <iostream>
int main(int argc, char const *argv[])
{
    int sum=0, val=50;

    while(val<=100){
        sum += val;
        ++val;
    }
    std::cout << "The sum of 50-100 (inclusive) is " << sum << std::endl;

    return 0;
}