#include <iostream>

using std::string; using std::endl; using std::cout; using std::cin;

int main(int argc, char const *argv[])
{
    string s5 = "hiya";
    string s6("heyya");
    string s7(10, 'c');

    cout << s5 << '\n'
         << s6 << '\n'
         << s7 << endl;

    string s1, s2;

    cin >> s1 >> s2;

    cout << s1 << '\n' << s2 << endl;

    return 0;
}
