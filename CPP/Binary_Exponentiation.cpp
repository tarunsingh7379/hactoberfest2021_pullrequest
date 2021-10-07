#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

// This function will help you to calculate base^n in O(logn)

ll power(ll base, ll n, ll m)
{
    ll ans = 1;
    while (n != 0)
    {
        if (n % 2 == 1)
        {
            n = n - 1;
            ans = (ans * base) % m;
        }
        else
        {
            n = n / 2;
            base = (base * base) % m;
        }
    }
    return ans;
}

int main()
{
    int base, n;
    cin >> base >> n;
    cout << power(base, n, M) << endl;
    return 0;
}