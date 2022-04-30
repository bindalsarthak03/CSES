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
    ll n,x;
    cin>>n>>x;
    vll a;
    for(ll i=0;i<n;i++){
        ll val;
        cin>>val;
        a.push_back(val);
    }
    for(ll i=0;i<n-1;i++){
        vll b;
        b=a;
        sort(b.begin(),b.end());
        ll l = 0, h = n-1;
        while(l<h){
            ll m = l + (h-l)/2;
            if(b[m] == x-a[i]){
                for(ll j=0;j<n;j++){
                    if(b[m]==a[j]){
                        cout<<i+1<<" "<<j+1;
                        return 0;
                    }
                }
            }
            else if(b[m] > x-a[i]){
                h = m-1;
            }
            else l = m+1;
        }

    }
     cout<<"IMPOSSIBLE";
return 0;
}