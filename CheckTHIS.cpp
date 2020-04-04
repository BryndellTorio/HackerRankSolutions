#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string input, T;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    getline(cin, input);

    stringstream Y(input);
    while (getline(Y, T, ' '))
    {
        cout << T << '\n';
    }
    return 0;
}

//Possible Solution for GEO command that you want to implement.
//i.e. GEO start generator.