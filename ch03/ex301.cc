#include <iostream>
using std::cout; using std::endl; using std::cout; using std::cin;

int main(int argc, char const *argv[])
{
    int sum=0, val=50;

    while(val <= 100){
        sum += val;
        ++val;
    }
    cout << "1.9 rewritten:\nThe sum of 50-100 inclusive is " << sum << endl;
    cout << "1.10 rewritten:\n" << endl;
    int val2=10;

    while(val2 > 0){
        cout << val2 << endl;
        --val2;
    }

    cout << "1.11 rewritten:\n" << endl;
    int first, second;
    cout << "Please enter two numbers:" << std::endl;
    cin >> first >> second;

    int big, small;

    if (first > second)
    {
        big = first;
        small = second;
    }
    else
    {
        big = second;
        small = first;
    }

    while (small <= big)
    {
        cout << small << endl;
        ++small;
    }

    return 0;
}
