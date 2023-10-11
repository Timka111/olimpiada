#include <iostream>
using namespace std;
int main()
{
    int N, z, x, i=0;
    cin >> N;
    int* a = new int[N];
    for (i = 0; i < N; i++) {
        cin >> a[i];
    }
    for (i = 0; i < N; ++i) {
        if (a[i] % 2 != 0) {
            cout << a[i] << ' ';
        }
    }
    cout << endl;
    for (int i = 0; i < N; ++i) {
        if (a[i] % 2 == 0) {
            cout << a[i] << ' ';
        }
    }
    cout << endl;
    x = 0;
    z = 0;
    for (i = 0; i < N; i++) {
        if (a[i] % 2 == 0) {
            z++;
        }
        else x++;
    }
    cout << '\n';

    if (x == z)
        cout << "YES";
    if (z > x)
        cout << "YES";
    if(x>z) cout << "NO";
    delete[] a;
    return 0;
}