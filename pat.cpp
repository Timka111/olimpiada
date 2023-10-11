#include <iostream>
using namespace std;
int main()
{
   
    int a, b, c, d;
    cin >> a;
    if (a <= 10) {
        cout << a * a;
    }
    else {
        b = (a - 5) / 10;
        c = b++;
        d = b * c;
        cout << d << "25";
    }
    return 0;
}