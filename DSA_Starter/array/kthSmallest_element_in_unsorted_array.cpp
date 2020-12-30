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
// Problem Description: https://practice.geeksforgeeks.org/problems/kth-smallest-element/0

/*
Input: 
2
6
7 10 4 3 20 15
3
5
7 10 4 20 15
4

Output:
7
15
*/
int partition(int A[], int p, int r){
    
    int random = (rand() % (r-p+1))+p; //choose a random number in range [p,q]
    swap(A[random], A[r]); // swap it with the last number
    int pivot = A[r];
    int i = p; 
    for(int j=p; j<=r-1; j++){
        
        if(A[j] <= pivot){
            swap(A[j], A[i]);
            i++;
        }
        
    }
    swap(A[i], A[r]);
    return i; // ith element is at it's correct position
}
int kthSmallest(int arr[], int l, int r, int k) {
    //code here
    
    int ans = -1;
  
    if(l<=r){
        int q = partition(arr, l, r);
        if(k == q+1) 
            ans = arr[q];
        else if(k < q+1) 
            ans = kthSmallest(arr, l, q-1, k);
        else
            ans = kthSmallest(arr, q+1, r, k);
    }
    return ans;
}
void solve() 
{ 
    int n, k; cin>>n;
    int arr[n];
    in(arr)
    cin>>k;
    srand(time(0)); 
    cout<<kthSmallest(arr, 0, n-1, k);
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
