#include <iostream>

int main(int argc, char const *argv[])
{
    int first, second;
    std::cout << "Please enter two numbers:" << std::endl;
    std::cin >> first >> second;

    int big, small;

    if (first > second) {
        big = first;
        small = second;
    }
    else {
        big = second;
        small = first;
    }

    while(small <= big){
        std::cout << small << std::endl;
        ++small;
    }
    return 0;
}
