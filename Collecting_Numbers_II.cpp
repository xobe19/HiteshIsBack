#include <bits/stdc++.h>

using namespace std;




#define ll            long long 
#define lll           __int128_t




#define F              first
#define S              second
#define pb             push_back
#define si             set <int>
#define msi            multiset<int>
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








 #define int long long



#define vi             vector <int>

void __solve() {
int n, m; cin >> n >> m;
vi arr(n);

for(int i =0 ; i < n; i++) {
  cin >> arr[i];
}
map<int, int> indx;
for(int i = 0; i < n; i++) {
  indx[arr[i]] = i;
}
int rounds = 1;
int curr = 2;
int prev_indx = indx[1];
while(curr <= n) {

if(indx[curr] > prev_indx) {

  prev_indx = indx[curr];
  curr++;
}
else {
  rounds++;

  prev_indx = indx[curr];
  curr++;
}


}
indx[-1] = -1;
indx[n+1] = -1;
indx[0] = -1;

while(m--) {
  int p1, p2; cin >> p1 >> p2;
  p1--;p2--;
  int x = arr[p1], y = arr[p2];
  if(x > y) {
    swap(p1, p2);
    swap(x, y);
  }
debug(x, y, p1, p2);
  bool px = indx[x-1] < p1;
  bool aspx = indx[x-1] < p2;  
  if(px == false && aspx == true) {
    rounds--;
  }
  else if(px == true && aspx == false) rounds++;


  bool nx = indx[x+1] > p1;
  bool asnx = indx[x+1] > p2;
  if(x + 1 == y) {
    nx = p2 > p1;
    asnx = p1 > p2;
  }
debug(nx, asnx, x + 1);
  if(nx == false && asnx) rounds--;
  else if(nx && !asnx) rounds++;
debug(rounds);
  bool py = indx[y-1] < p2;
  bool aspy = indx[y-1] < p1;

if(y-1 != x) {
  if(!py && aspy) rounds--;
  if(py && !aspy) rounds++;
}
  bool ny = indx[y+1] > p2;
  bool asny = indx[y+1] > p1;

  if(ny && !asny) rounds++;
  else if(!ny && asny) rounds--; 

  cout << rounds << nline;

swap(indx[x], indx[y]);
swap(arr[p1], arr[p2]);



}


}


int32_t main() {
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);



int t = 1;
// cin >> t;
    while (t--) __solve();
return 0;


}