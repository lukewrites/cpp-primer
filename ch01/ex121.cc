#include <iostream>
#include "Sales_item.h"

int main()
{
    /* code */
    std::cout << "Please enter ISBN, quantity, and price." << std::endl;
    Sales_item item1, item2;
    std::cin >> item1 >> item2;
    std::cout << item1 + item2 << std::endl;

    return 0;
}
