#include <iostream>
#include <climits>
using namespace std;

int main() {
    int i;
    char ch;
    short sh;
    long ln;
    unsigned short us;

    cout << "this" << endl;
    cout << "size int: " << sizeof(int) << endl;
    cout << "size char: " << sizeof(char) << endl;
    cout << "short: " << SHRT_MAX << endl;
    cout << "short: " << SHRT_MIN << endl;
    cout << "ushort: " << USHRT_MAX << endl;
    cout << "long: " << LONG_MAX << endl;
    cout << "long: " << LONG_MIN << endl;

    cout << "enter int " << endl;
    cin >> i;
    cout << "enter a char " << endl;
    cin >> ch;
    cout <<"enter short " << endl;
    cin >> sh;
    cout << "enter unsigned " << endl;
    cin >> us;
    cout << "enter long " << endl;
    cin >> ln;
    cout << endl;
    cout << 10 * sh << endl;

    //cout << i << " " << ch << " " << sh << " " << endl;
    //cout << us << " " << ln << " " << endl;
    return 0;
}