#include <iostream>

using std::cout; using std::cin; using std::endl; using std::string;
using std::getline;

/*
Write a program to read the std input a line at a time. Modify your program to
read a word at a time.
*/

int main(int argc, char const *argv[])
{
    string line;
    cout << "please type as much as you want: " << endl;
    while (getline(cin, line))
        cout << line << endl;

    string line2;
    cout << "please type as much as you want & it'll be returned word by word: "
         << endl;
    while (cin >> line2)
        cout << line2 << endl;

    return 0;
}
