#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item total; // var to hold data for next transaction
    // read first transac and ensure there are data to process
    if (std::cin >> total){
        Sales_item trans; // var to hold running sum
        // read and process remaining tranactions

        while(std::cin >> trans){
            // if we're still processing the same book
            if (total.isbn() == trans.isbn()) {
                total += trans;  // update running total
            }
            else {
                std::cout << total << std::endl;
                total = trans;  // `total` now refers to the next/new book.
            }
        }
        std::cout << total << std::endl; // print last transaction
    } else {
        // no input! warn the user
        std::cerr << "No data?!?" << std::endl;
        return -1;
    }
    return 0;
}
