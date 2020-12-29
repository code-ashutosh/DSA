#include <bits/stdc++.h> 
using namespace std; 
#define in(x) for(auto& i:x) cin>>i;
#define in2(x) for(auto& i:x) for(auto& j:i) cin>>j;
#define show(x) for(auto i:x) cout<<i<<" ";
#define show2(x) for(auto i:x) {for(auto j:i) cout<< j <<" "; cout<<"\n";}
#define endl "\n"
#define MOD 1000000007
#define ll long long int

ll add(ll x, ll y) {ll res=x+y; return ((res >= MOD) ? (res - MOD):res);}
ll mul(ll x, ll y) {ll res=x*y; return ((res >= MOD) ? (res % MOD):res);}
// Problem Description: https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/

/*
input: n=5, arr = [5 4 3 2 1]
output: arr = [1 2 3 4 5]
*/
void solve() 
{ 
    int n;
    cin>>n;
    vector<int> arr(n);
    in(arr)
    for(int i=0;i<(n/2);i++){
      swap(arr[i], arr[n-i-1]);
    }
    // or you can use:  reverse(arr.begin(), arr.end()); Time Complexity: O(n)
    show(arr)
} 

int main() 
{
ios_base::sync_with_stdio(false); 
cin.tie(NULL); 

#ifndef ONLINE_JUDGE 
freopen("input.txt", "r", stdin); 
freopen("output.txt", "w", stdout); 
#endif 

int t = 1; 
cin >> t;  
while (t--) { 
solve(); 
cout << "\n"; 
} 
return 0; 
} 
