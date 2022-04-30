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
    ll n,m,k;
    cin>>n>>m>>k;
    vi a(n);
    for(ll i=0;i<n;i++) cin>>a[i]; //desired size
    vi b(n);
    for(ll i=0;i<m;i++) cin>>b[i]; //size of room
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    ll count=0;
    ll i=0, j=0;
    while(i<n and j<m){
        if(abs(a[i]-b[j])<=k){ 
            count++; 
            i++;
            j++;
        }
        else if(a[i]-b[j]>k) j++;
        else i++;
    }
    cout<<count; 
return 0;
}