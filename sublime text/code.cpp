#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define PRE(x, p) cout << setprecision(x) << p;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define pi 3.14159265358979
#define mod (ll)(1e9 + 7)
#define endl "\n"
#define high 1e18
#define low -1e18
#define ll long long int
#define ld long double
#define mem(x, val) memset(x, 0, sizeof(x));
#define rep(i, l, r) for (ll i = l; i <= r; i++)
#define p(a)          \
  for (auto i : a)    \
    cout << i << ' '; \
  cout << endl;
#define vll vector<ll>
#define vb vector<bool>
#define vpll vector<pair<ll, ll>>
#define vi vector<int>
#define vpi vector<pair<int, int>>
#define vvll vector<vector<ll>>
#define vvi vector<vector<int>>
#define vvvll vector<vector<vector<ll>>>
#define pll pair<ll, ll>
#define vs vector<string>
#define vvpll vector<vector<pair<ll, ll>>>
#define vvpi vector<vector<pair<int, int>>>
#define vpii vector<pair<int, int>>
#define sz(a) (ll) a.size()
#define po(x) (ll)(1ll << x)
#define all(x) begin(x), end(x)
#define speed                       \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);
#define yes                \
  {                        \
    cout << "YES" << endl; \
    return;                \
  }
#define no                \
  {                       \
    cout << "NO" << endl; \
    return;               \
  }
#define ok cout << "ok" << endl;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

using namespace std;
using namespace __gnu_pbds;

void showa(ll a[], ll n)
{
  for (ll i = 1; i <= n; i++)
    cout << a[i] << ' ';
  cout << endl;
}
ll ison(ll w, ll i) { return w & (1ll << i); }
void amax(ll &a, ll b) { a = max(a, b); }
void amin(ll &a, ll b) { a = min(a, b); }
void modadd(ll &a, ll b) { a = ((a % mod) + (b % mod)) % mod; }
void modsub(ll &a, ll b) { a = ((a % mod) - (b % mod) + mod) % mod; }
void modmul(ll &a, ll b) { a = ((a % mod) * (b % mod)) % mod; }

#ifndef ONLINE_JUDGE
#define debug(x)     \
  cerr << #x << " "; \
  _print(x);         \
  cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t)
{
  cerr << t << ' ';
}
void _print(int t) { cerr << t << ' '; }
void _print(string t) { cerr << t << ' '; }
void _print(char t) { cerr << t << ' '; }
void _print(ld t) { cerr << t << ' '; }
void _print(double t) { cerr << t << ' '; }
template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
  cerr << "{";
  _print(p.f);
  cerr << ",";
  _print(p.s);
  cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
  cerr << "[ ";
  for (T i : v)
  {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T>
void _print(set<T> v)
{
  cerr << "[ ";
  for (T i : v)
  {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
  cerr << "[ ";
  for (T i : v)
  {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
  cerr << "[ ";
  for (auto i : v)
  {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
// const ll l=30;   //log2(n)
// const ll N=200005;

void heapify(vll &a,ll n,ll i) 
{
    ll largest = i;
    ll l = 2*i + 1;
    ll r = 2*i + 2;
  
    if (l < n && a[l] > a[largest]) largest = l;
    if (r < n && a[r] > a[largest]) largest = r;
  
    if (largest != i) 
    {
      swap(a[i], a[largest]);
      heapify(a, n, largest);
    }
  }

    void heap_sort(vll &a) 
    {
      ll n=a.size(); 
      for(ll i= n/2 -1 ; i>=0;i--) heapify(a,n,i);
      for (ll i = n - 1; i >= 0; i--) 
      {
        swap(a[0], a[i]);
        heapify(a, i, 0);
      }
  }
// heap_sort(a);
void solve()
{
  vll a = {33, 2, 55, 1,22 , 0 , 98};
  heap_sort(a);
  p(a);
}

signed main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("err.txt", "w", stderr);
  freopen("output.txt", "w", stdout);
#endif
  speed

      ll t = 1;
  // cin>>t;

  for (ll test = 1; test <= t; test++)
  {
    // cout<<"Case #"<<test<<": ";
    solve();
  }
  return 0;
}