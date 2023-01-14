#include <bits/stdc++.h>

using namespace std;




#define ll            long long 
#define lll           __int128_t




#define F              first
#define S              second
#define pb             push_back
#define si             set <int>
#define msi            multiset<int>
#define vi             vector <int>
#define pi             pair <int, int>
#define vpi            vector <pi>
#define vsi            vector <si>
#define vpp            vector <pair<int, pi>>
#define vvi            vector<vector<int>>
#define mii            map <int, int>
#define mpi            map <pi, int>
#define spi            set <pi>
#define nline           "\n"
#define sz(x)          ((int) x.size())
#define all(p)         p.begin(), p.end()
#define ld           long double 
#define que_max        priority_queue <int>
#define que_min        priority_queue <int, vi, greater<int>>
#define mod            1000000007
#define ar             array


void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
// #define debug(x...)
#else
#define debug(x...)
#endif








// #define int long long




void __solve() {

int n; cin >> n;
vi arr(n);
for(int i = 0; i < n; i++) cin >> arr[i];
ll ans = 0;
for(int i = 1; i < n; i++) {
  if(arr[i] < arr[i-1]) {
    ans += (arr[i-1] - arr[i]);
    arr[i] = arr[i-1];
  }
}
cout << ans << nline;


}

int32_t main() {
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);



int t = 1;
// cin >> t;
    while (t--) __solve();
return 0;


}