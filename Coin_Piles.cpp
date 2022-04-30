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
    ll t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        if(a==0&&b==0) cout<<"YES"<<endl;
        else if(a>2*b || b>2*a) cout<<"NO"<<endl;
        else if((a+b)%3==0 && a!=0 && b!=0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    } 
return 0;
}