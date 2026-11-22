#include <iostream>
#include <limits>
using namespace std;

int main(){
    char s[100];
    cin >> s;
    cout << s << endl; // Because of space it prints still Hello

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    char str[100];
    cin.getline(str,100);
    cout << str << endl;
    return 0;
}