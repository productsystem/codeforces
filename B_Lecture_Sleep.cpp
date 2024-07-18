#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    int a[n];
    int t[n];

    int res = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < n ; i++)
    {
        cin >> t[i];
    }

    for(int i = 0; i < n; i++)
    {
        res += (a[i] * t[i]);
    }

    int num = 0;

    for(int i = 0; i< k; i++)
    {
        if(t[i] == 0)
        {
            num += a[i];
        }
    }

    int numMax = num;

    for(int i = 0; i < n-k; i++)
    {
        num += a[i+k] - (a[i+k]*t[i+k]);
        num -= a[i] - (a[i]*t[i]);
        numMax = max(num, numMax);
    }

    cout << res + numMax << endl;


}