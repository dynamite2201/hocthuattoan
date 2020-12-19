#include <bits/stdc++.h>
#include<math.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <string>
#include <typeinfo>
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
const int INF = (int) 2e9 + 22011995;
const ll LINF = (ll) 9e18 + 22011995;
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



void solve() {

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);



    int testCase;
    cin >> testCase;

 
    for (int t = 1; t <= testCase; t++) {

        int n;
        cin >> n;

        string s;
        cin.ignore();
        getline(cin, s);


        int end = n-1 ;

        string s1, s2, s3, s4, s5, s6, s7, s8;

        std::string s10(1,s[0]);
        std::string s11(1,s[1]);
        std::string s12(1,s[2]);
        std::string s13(1,s[3]);

        s1 = s10+s11+s12+s13;

        std::string s20(1,s[0]);
        std::string s21(1,s[1]);
        std::string s22(1,s[2]);
        std::string s23(1,s[end]);

        s2 = s20+s21+s22+s23;

        std::string s30(1,s[0]);
        std::string s31(1,s[1]);
        std::string s32(1,s[end-1]);
        std::string s33(1,s[end]);

        s3 = s30+s31+s32+s33;

        std::string s40(1,s[0]);
        std::string s41(1,s[end-2]);
        std::string s42(1,s[end-1]);
        std::string s43(1,s[end]);

        s4 = s40+s41+s42+s43;

        std::string s50(1,s[end-3]);
        std::string s51(1,s[end-2]);
        std::string s52(1,s[end-1]);
        std::string s53(1,s[end]);

        s5 = s50+s51+s52+s53;

        if (s1=="2020" || s2=="2020" || s3=="2020"||s4=="2020"||s5=="2020"){
            cout <<"YES";
        } else {
            cout <<"NO";
        }
        cout << "\n";
    }
    
}





