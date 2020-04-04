#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s, result[10];
    int length, t;
    cin >> t;
    for (int x = 0; x < t; x++)
    {
        cin >> s;
        length = strlen(s.c_str());
        for (int i = 0; i < length; i++)
        {
            if (i % 2 == 0)
            {
                cout << s[i];
            }
        }
        cout << " ";
        for (int j = 0; j < length; j++)
        {
            if (j % 2 != 0)
            {
                cout << s[j];
            }
        }
        cout << '\n';
    }
    return 0;
}
