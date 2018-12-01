#include <iostream>
#include "Sales_item.h"

int main(int argc, char const *argv[])
{
    Sales_item book;
    // read ISB, numbers of copies sold, and sales price
    std::cin >> book;
    // write ISBN, numbr of copies sold, and avg price
    std::cout << book << std::endl;
    return 0;
}
