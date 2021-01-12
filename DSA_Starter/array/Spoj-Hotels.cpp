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
Problem Link: https://www.spoj.com/problems/HOTELS/

*/
void solve() 
{ 
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    in(a)
    int p = 0, q = 0, max_so_far = a[0], cur_sum = a[0];
    // Sliding window Approach 
    for(int i=1;i<n;i++){
        cur_sum += a[i]; q++;
        while(cur_sum > m){
            cur_sum -= a[p];
            p++;
        } 
        max_so_far = max(max_so_far, cur_sum);
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
// cin >> t;  
while (t--) { 
solve(); 
cout << "\n"; 
} 
return 0; 
} 
