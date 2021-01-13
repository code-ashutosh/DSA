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
Problem Link: https://www.spoj.com/problems/ARRAYSUB/

Input: 
12
1 2 3 3 1 2 4 5 1 1 2 3
3

Output:
3 3 3 3 4 5 5 5 2 3 

Solution: https://stackoverflow.com/questions/12239042/spoj-arraysub-on-complexity-approach

*/
void solution1() 
{ // solution_using_two_pointer_approach => O(n*k)
    int n; cin>>n;
    int a[n]; in(a)
    int k; cin>>k;

    int cur_max = INT_MIN, sec_max = INT_MIN;
    // max in first k elements
    int i, p=0, q=0;
    for(i=0;i<n;i++){
        q++;
        if(q-p > k){
            p++;
        }
        if(q-p == k){
            for(int j=p;j<q;j++){
                cur_max = max(cur_max, a[j]);
            }
            cout<<cur_max<<" ";
            cur_max = INT_MIN;
        }
    }
} 
void solution2(){
    // solution using deque => O(n)
    int n; cin>>n;
    int A[n]; in(A)
    int k; cin>>k;
    vector<int> B(n-k+1);
    deque<int> dq;
    for (int i = 0; i < k; i++) {
        while (!dq.empty() && A[i] >= A[dq.back()])
        dq.pop_back();
        dq.push_back(i);
    }
    for (int i = k; i < n; i++) {
        B[i-k] = A[dq.front()];
        while (!dq.empty() && A[i] >= A[dq.back()])
        dq.pop_back();
        while (!dq.empty() && dq.front() <= i-k)
        dq.pop_front();
        dq.push_back(i);
    }
    B[n-k] = A[dq.front()];
    //B stores the maximum of every contiguous sub-array of size k    
    for(int i=0;i<B.size();i++)
    cout<<B[i]<<" ";
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
solution2(); 
cout << "\n"; 
} 
return 0; 
} 
