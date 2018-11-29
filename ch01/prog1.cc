#include <iostream>

using std::cout;  using std::endl;  using std::cin;

int main()
{
    cout << "Enter two numbers:" << endl;
    int v1 = 0, v2 = 0;
    cin >> v1 >> v2;
    cout << "The sum of " << v1 << " and " << v2
              << " is " << v1 + v2 << endl;

    return 0;
}
