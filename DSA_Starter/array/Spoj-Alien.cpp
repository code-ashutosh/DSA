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
Problem Link: https://www.spoj.com/problems/ALIEN/
*/
void solve() 
{
    int a,b;
    cin>>a>>b;
    vector<int> people(a); // people at station i
    in(people)
    int p=0,q=0,cur_people=0, people_so_far = 0, stations_so_far = 0, max_stations = 0;
    for(int i=0;i<a; i++){
        cur_people +=people[i];
        q++;
        while(cur_people > b){
            cur_people -= people[p];
            p++;
        }
        stations_so_far = q-p;
        if(cur_people <= b){
            if(stations_so_far > max_stations){
                people_so_far = cur_people;
                max_stations = stations_so_far;
            }
            else if(stations_so_far == max_stations){
                people_so_far = min(cur_people, people_so_far); // when num of stations are same then go for minimum num of people
            }
        }
    }
    cout<<people_so_far<<" "<<max_stations;
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
