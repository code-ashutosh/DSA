#include<bits/stdc++.h>
using namespace std;


/*
Problem Link: https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1

Problem: Sort an Array containing only 0, 1 and 2 as it's element.

Input:
2
6
1 2 2 2 0 0 
3
2 0 1

Output: 
0 0 1 2 2 2
0 1 2
*/

void sort012(int a[], int n)
{
    
    int x=-1,y=n;
    //x is pointing tail of 0's array & y is pointing at head of 2's array
    for(int i=0;i<n;){
        if(i>=y){
            break;
        }
        if(a[i] == 0){
            x++;
            swap(a[i], a[x]);
            i++;
        }
        else if(a[i] == 2){
            y--;
            swap(a[i], a[y]);
        }
        else{
            i++;
        }
        
    }
}
int main() {

    // input is read from input.txt so make sure it exist
    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
    #endif 

    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

