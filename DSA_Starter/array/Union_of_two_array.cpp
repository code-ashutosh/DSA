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
Problem Link: https://practice.geeksforgeeks.org/problems/union-of-two-arrays/0

Problem: Count unique elements in two unsorted arrays

Input:
2
5 3
1 2 3 4 5
1 2 3
6 2
85 25 1 32 54 6
85 2

Output: 
5
7
*/
void solve() 
{ 
    int n,m,x;
	cin>>n>>m;
	unordered_set<int> cnt;
	for(int i=0;i<n+m;i++) 
    cin>>x,cnt.insert(x);

	cout<<cnt.size();
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
