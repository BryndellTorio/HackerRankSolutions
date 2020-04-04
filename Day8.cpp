#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <iterator>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string name;
    long num;
    cin >> n;
    cin.ignore();
    map<string, long> pbook;
    for (int i = 0; i < n; i++)
    {
        cin >> name;
        cin >> num;
        pbook[name] = num;
    }
    while (cin >> name)
    {
        if (pbook.find(name) != pbook.end())
        {
            cout << name << "=" << pbook.find(name)->second << '\n';
        }
        else
        {
            cout << "Not found" << '\n';
        }
    }
    return 0;
}

//Possible Solution for GEO command that you want to implement.
//i.e. GEO start generator.