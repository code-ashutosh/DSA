#include <bits/stdc++.h> 
using namespace std; 
#define in(array) for(auto& i:array) cin>>i;
#define in2(array2d) for(auto& i:array2d) for(auto& j:i) cin>>j;
#define show(array) for(auto i:array) cout<<i<<" ";
#define show2(array2d) for(auto i:array2d) {for(auto j:i) cout<< j <<" "; cout<<"\n";}
#define endl "\n"
#define MOD 1000000007
#define ll long long int

ll add(ll x, ll y) {ll res=x+y; return ((res >= MOD) ? (res - MOD):res);}
ll mul(ll x, ll y) {ll res=x*y; return ((res >= MOD) ? (res % MOD):res);}

void solve() 
{ 
    
} 

int main() 
{
ios_base::sync_with_stdio(false); 
cin.tie(NULL); 

// input is read from input.txt so make sure it exist
#ifndef ONLINE_JUDGE 
freopen("input.txt", "r", stdin); 
freopen("output.txt", "w", stdout); 
#endif 

int t = 1; 
cin >> t;   // comment this out for single test case
while (t--) { 
solve(); 
cout << "\n"; 
} 
return 0; 
} 
