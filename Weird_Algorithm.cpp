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
   cout<<n<<" ";
   while(n!=1){
      if(n%2==0){ n/=2; cout<<n<<" "; continue;}
      else {n=n*3+1; cout<<n<<" "; continue;}
   }
   return 0;
}