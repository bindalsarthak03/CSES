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
    ll sum=0,ans=INT_MIN;
    vector<pair<ll,ll>> table;
    for(ll i=0;i<n;i++){
        ll val1,val2;
        cin>>val1>>val2;
        table.push_back(make_pair(val1,1));
        table.push_back(make_pair(val2,-1));
    }
    sort(table.begin(),table.end());
    for(auto it: table){
        sum+=it.second;
        ans = max(ans,sum);
    }
    cout<<ans;
return 0;
}