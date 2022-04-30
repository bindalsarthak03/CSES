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
int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   ll n;
   cin>>n;
   vll a;
   for(ll i=0;i<n;i++){
      ll val;
      cin>>val;
      a.push_back(val);
   }
   ll sum=0;
   for(ll i=0;i<n-1;i++){
      if(a[i]>a[i+1]){
         sum+=a[i]-a[i+1];
         a[i+1] = a[i];
      }
   }
   cout<<sum;
   return 0;
}