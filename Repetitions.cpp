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
   string n;
   cin >> n;
   ll max = INT_MIN;
   for(ll i=0;i<(ll)(n.length());i++){
      ll count = 0;
      while(i+1<n.length() && n[i]==n[i+1]){
         count++;
         i++;
      }
      if(count>max){
         max = count;
      }
   }
   cout<<max+1;
   
   return 0;
}