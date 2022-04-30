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

ll binarySearch(ll key,vll &h, ll l, ll r){
    while(l<r){
        ll m = l + (r-l)/2;
        if(h[m]<=key){
            ll ans = h[m];
            h[m]=-1;
            return ans;
        }
        else if(h[m]<key){
            l = m+1;
        }
        else{
            r=m-1;
        }
    }
    return -1;

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,m;
    cin>>n>>m;
    vll h,t;
    for(ll i=0;i<n;i++){
        ll val;
        cin>>val; h.push_back(val);
    }
    for(ll i=0;i<m;i++){
        ll val;
        cin>>val; t.push_back(val);
    }
    sort(h.begin(),h.end());
    for(ll i=0;i<m;i++){
       cout<<binarySearch(t[i],h,0,n-1)<<endl;
    }
return 0;
}