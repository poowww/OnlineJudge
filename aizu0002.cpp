#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    int a;
    int b;
    while(cin >> a >> b)
    {
        string sum = to_string(a + b);
        cout << sum.length() << endl;
    }
}