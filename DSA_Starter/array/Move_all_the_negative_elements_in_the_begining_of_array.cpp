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
Problem Link: https://www.geeksforgeeks.org/move-negative-numbers-beginning-positive-end-constant-extra-space/

Description: An array contains both positive and negative numbers in random order. Rearrange the array elements so that all negative numbers appear before all positive numbers, without using extra space.
Input: - 12, 11, -13, -5, 6, -7, 5, -3, -6
Output: - 12 -13 -5 -7 -3 -6 11 6 5

*/
void solve() 
{ 
        int n;
        cin>>n;
    	int a[n];
    	for(int i=0;i<n;i++) cin>>a[i];
    	int tail = -1;
    	// tail points to end of negative elements array
    	for(int i=0;i<n;i++){
    	    if(a[i]<0 && i!=tail){
    	        tail++;
    	        swap(a[i], a[tail]);
    	    }
    	}
        show(a)
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
