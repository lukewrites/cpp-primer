#include <iostream>

int main(){
    unsigned u1 = 42, u2 = 10;
    std::cout << u1 - u2 << '\n';
    std::cout << u2 - u1 << '\n';

    for (int i = 10; i >= 0; --i)
    {
        std::cout << i << '\n';
    }

    // doing the same with `unsigned` rather than an `int`
    unsigned u = 11;

    while(u > 0){
        --u;
        std::cout << u << '\n';
    }


    return 0;
}