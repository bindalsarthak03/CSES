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
    if(n==1) cout<<1<<endl;
    else if(n<=3) cout<<"NO SOLUTION"<<endl;
    else{
       for(ll i=n;i>=1;i--){
          if(i%2){cout<<i<<" ";}
       }
       for(ll i=n;i>=1;i--){
          if(i%2==0){cout<<i<<" ";}
       }
    } 
return 0;
}
