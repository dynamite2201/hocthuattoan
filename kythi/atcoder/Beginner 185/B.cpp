#include <bits/stdc++.h>
#include<algorithm>
#include<math.h>
#include<cmath>
using namespace std;
//#pragma GCC optimize("Ofast")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
 
#define ms(s, n) memset(s, n, sizeof(s))
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORd(i, a, b) for (int i = (a) - 1; i >= (b); --i)
#define FORall(it, a) for (__typeof((a).begin()) it = (a).begin(); it != (a).end(); it++)
#define sz(a) int((a).size())
#define present(t, x) (t.find(x) != t.end())
#define all(a) (a).begin(), (a).end()
#define uni(a) (a).erase(unique(all(a)), (a).end())
#define pb push_back
#define pf push_front
#define mp make_pair
#define fi first
#define se second
#define prec(n) fixed<<setprecision(n)
#define bit(n, i) (((n) >> (i)) & 1)
#define bitcount(n) __builtin_popcountll(n)
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
const int MOD = (int) 1e9 + 7;
const int FFTMOD = 119 << 23 | 1;
const int INF = (int) 1e9 + 23111992;
const ll LINF = (ll) 1e18 + 23111992;
const ld PI = acos((ld) -1);
const ld EPS = 1e-6;
inline ll gcd(ll a, ll b) {ll r; while (b) {r = a % b; a = b; b = r;} return a;}
inline ll lcm(ll a, ll b) {return a / gcd(a, b) * b;}
inline ll fpow(ll n, ll k, int p = MOD) {ll r = 1; for (; k; k >>= 1) {if (k & 1) r = r * n % p; n = n * n % p;} return r;}
template<class T> inline int chkmin(T& a, const T& val) {return val < a ? a = val, 1 : 0;}
template<class T> inline int chkmax(T& a, const T& val) {return a < val ? a = val, 1 : 0;}
inline ull isqrt(ull k) {ull r = sqrt(k) + 1; while (r * r > k) r--; return r;}
inline ll icbrt(ll k) {ll r = cbrt(k) + 1; while (r * r * r > k) r--; return r;}
inline void addmod(int& a, int val, int p = MOD) {if ((a = (a + val)) >= p) a -= p;}
inline void submod(int& a, int val, int p = MOD) {if ((a = (a - val)) < 0) a += p;}
inline int mult(int a, int b, int p = MOD) {return (ll) a * b % p;}
inline int inv(int a, int p = MOD) {return fpow(a, p - 2, p);}
inline int sign(ld x) {return x < -EPS ? -1 : x > +EPS;}
inline int sign(ld x, ld y) {return sign(x - y);}
mt19937 mt(chrono::high_resolution_clock::now().time_since_epoch().count());
inline int mrand() {return abs((int) mt());}
inline int mrand(int k) {return abs((int) mt()) % k;}
#define db(x) cerr << "[" << #x << ": " << (x) << "] ";
#define endln cerr << "\n";
 
 
// int solve(int A1, int A2, int A3, int A4) {
//     int a[4] = {A1,A2,A3,A4};
//     sort(a, a+4);
//     return a[0];
// }
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
 
    int N,M,T;
    cin >> N >> M >> T;
    int A[M+1];
    int B[M+1];
    int C[2*M+2];
    for (int i = 1; i<=M;i++) {
        cin>> A[i] >> B[i];
    }
 
 
    int currN = N;
    C[1] = A[1];
    C[2*M + 1] = T-B[M];
    for (int j=2;j<=2*M;j++) {
        if(j%2==0) {
            C[j] = (B[j/2]-A[j/2]);
        } else {
            C[j] = (A[j/2 + 1]-B[j/2]);            
        }
    }
 
 
 
    for (int j=1;j<=2*M+1;j++) {
        if(j==1 or j==2*M+1) {
            currN = currN - C[j];
            if (currN <= 0) {
            currN = 0;
            break;
            } 
        } else {
            if(j%2==0) {
                C[j] = (B[j/2]-A[j/2]);
                currN = currN + C[j];
                if (currN >= N) {
                    currN = N;
                }
            } else {
                C[j] = (A[j/2 + 1]-B[j/2]);
                currN = currN - C[j];
                if (currN <= 0) {
                    currN = 0;
                    break;
                }            
            }            
        }
    }
 
    if(currN == 0) {
        cout << "No";
    } else {
        cout << "Yes";
    }
 
 
 
    return 0;
}