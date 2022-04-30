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
    for(ll i=1;i<=n;i++){
        if(i==0) cout<<"0"<<endl;
        else{
            ll ans = (i*i)*(i*i-1)/2-4*(i-1)*(i-2);
            cout<<ans<<endl;
        }
    } 
return 0;
}