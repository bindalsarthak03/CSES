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

void ans(ll n, int l,int m, int r){
    
    if(n>=1){
        ans(n-1,l,r,m);
        cout<<l<<" "<<r<<endl;
        ans(n-1,m,l,r);
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    ll nMoves;
    nMoves = pow(2,n) - 1;
    cout<<nMoves<<endl;
    ans(n,1,2,3);
return 0;
}