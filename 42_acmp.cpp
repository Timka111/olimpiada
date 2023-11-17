#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long m=pow(3,n/3);
    if (n%3==2)
    m=m*2;
    if (n%3==1)
    m=m*4/3;
    cout<<m;

    return 0;
}

