#include <iostream>

int main(int argc, char const *argv[])
{

    int i = 42;
    int *p1 = &i;
    *p1 = *p1 * *p1;

    std::cout << "answer: " << *p1 << '\n';
    // answer: 1764

    return 0;
}
