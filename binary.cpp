#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

int main()
{
    srand(time(0));
    int n;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; i++)
        a[i] = rand() % 10;
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    int x; cin >> x;
    cout << binary_search(a.begin(), a.end(), x) << endl;
    cout << lower_bound(a.begin(), a.end(), x) - a.begin() << endl;
    cout << upper_bound(a.begin(), a.end(), x) - a.begin() << endl;
    return 0;
}