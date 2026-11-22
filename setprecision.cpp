#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double x = 4.12345654;
    cout << fixed << setprecision(2) << x << endl;
    return 0;
}