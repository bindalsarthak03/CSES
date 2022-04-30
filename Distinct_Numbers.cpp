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
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    vi a;
    for(ll i=0;i<n;i++){
        ll val;
        cin>>val;
        a.push_back(val);
    } 
    sort(a.begin(),a.end());
    ll count = 0;
    for(ll i=0;i<n;i++){
        if(i==0) count++;
        else if(a[i]!=a[i-1]){
            count++;
        }
    }
    cout<<count;
return 0;
}