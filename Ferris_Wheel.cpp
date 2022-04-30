#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<ll> vll;
typedef vector<vector<ll>> vvl;
typedef vector<string> vs;
typedef vector<vector<string>> vvs;
typedef vector<bool> vb;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, x;
    cin >> n >> x;
    vi a;
    for (ll i = 0; i < n; i++)
    {
        ll val;
        cin >> val;
        a.push_back(val);
    }
    sort(a.begin(), a.end());
    ll count = 0;
    int i = 0;
    for (int j = n - 1; j >=i; j--)
    {
        if (a[i] + a[j] <= x)
        {
            i++;
        }

        count++;
    }
    cout << count;

    return 0;
}