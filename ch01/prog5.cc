#include <iostream>

int main()
{
    //currVal is the num we're counting.
    // new vals will be read into `val`

    int currVal = 0, val=0;
    if (std::cin >> currVal) {  // if there's data to process
        int cnt = 1; // store the count for the val we're on
        while(std::cin >> val) {  // read remaining values
            if (val == currVal)  // either augment the count if val is same
                ++cnt;
            else {  //  or give output and start over
                std::cout << currVal << " occurs " << cnt << " times" << std::endl;
                currVal = val;
                cnt = 1;
            }
        }
        std::cout << currVal << " occurs " << cnt << " times" << std::endl;
    }
    return 0;
}
