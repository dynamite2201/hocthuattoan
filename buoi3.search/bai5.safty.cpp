#include <bits/stdc++.h>

using namespace std;
#define PROB "Safety"
#define MAXN 205
int s[MAXN];

bool check(double mid, int n, int sum){
    double sumProb = 0;
    for(int i = 1; i <= n; i++)
        sumProb += (double)(max(0.0, mid - s[i]))/sum;
    return (sumProb >= 1.0);
}

double getThreshold(int n, int sum){
    double L = 0.0, R = sum;
    for(int iter = 1; iter <= 100; iter++){
        double mid = (L+R)/2.0;
        if(check(mid, n, sum))
            R = mid;
        else L = mid;
    }
    return R;
}

int main(){
    //freopen(PROB".inp", "r", stdin);
    //freopen(PROB".out", "w", stdout);
    int nTest;
    cin >> nTest;
    assert(1 <=  nTest && nTest <= 50);
    for(int iTest = 1; iTest <= nTest; iTest++){
        int n; cin >> n;
        assert(n <= 200);
        int sum = 0;
        bool atLeast1 = false;
        for(int i = 1; i <= n; i++){
            cin >> s[i];
            sum += s[i];
            assert(0 <= s[i] && s[i] <= 100);
            if (s[i] > 0)atLeast1 = true;
        }
        assert(atLeast1);
        double threshold = getThreshold(n, sum);
        cout << "Case #" << iTest << ": ";
        for(int i = 1; i <= n; i++){
            double percent;
            percent = (double)(threshold - s[i])/sum*100;
            if(percent < 0)
                cout << fixed << setprecision(6) << 0.0 << ' ';
            else cout << fixed << setprecision(6) << percent << ' ';
        }
        cout << '\n';
    }
}
