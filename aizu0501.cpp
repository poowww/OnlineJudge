#include <iostream>
#include <map>

using namespace std;

int main()
{
    int conv_num;
    map<char, char> conv_map;
    while(cin >> conv_num)
    {
        char from, to;
        for(int i = 0; i < conv_num; ++i)
        {
            cin >> from >> to;
            conv_map[from] = to;
        }
    }
}
