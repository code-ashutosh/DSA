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
/*
Problem Link: https://practice.geeksforgeeks.org/problems/kadanes-algorithm/0
Description: Maximum Subarray Problem
Tutorial: 
1.) https://medium.com/@rsinghal757/kadanes-algorithm-dynamic-programming-how-and-why-does-it-work-3fd8849ed73d
*/
void solve() 
{ 
    int n;
    cin>>n;
    int a[n];
    in(a)
    // 
    int cur_sum = a[0], max_so_far = a[0];
    for(int i=1;i<n;i++){
        cur_sum += a[i];
        if(cur_sum > max_so_far) max_so_far = cur_sum;
        if(cur_sum < 0) cur_sum = 0;
    }
    cout<<max_so_far;
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
