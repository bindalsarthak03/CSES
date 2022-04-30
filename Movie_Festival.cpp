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

// bool function(vector<pair<ll,ll>> t1,vector<pair<ll,ll>> t2){
//     if(t1.first == t2.first && t1.first )
// }
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    vector<pair<ll,ll>> table;
    for(ll i=0;i<n;i++){
        ll val1,val2;
        cin>>val1>>val2;
        table.push_back(make_pair(val2,val1));
    } 
    ll count=0,sum=0;
    sort(table.begin(),table.end());
    for(auto id:table){
        if(id.second >= sum){
            sum = id.first;
            count++;
        }
    }
    cout<<count;
return 0;
}