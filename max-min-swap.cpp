// #include <iostream>
// #include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a, b;
    cin >> a >> b;

    // MAX
    cout << max(a, b) << endl;
    cout << max({-1, 2, 30, -10}) << endl;

    // MIN
    cout << min(a, b) << endl;
    cout << min({-1, 2, 30, -10}) << endl;

    swap(a,b) ;
    cout << a <<" " << b <<endl;

    return 0;
}