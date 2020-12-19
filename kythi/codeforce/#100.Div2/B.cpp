#include <iostream>
using namespace std;

long long findmin(long long a, long long b,long long int c) {
    { 
    
  
    if (a <= b && a <= c) 
        return a; 
  
    else if (b <= a && b <= c) 
        return b;
  
    else
        return c;
  
    return 0; 
} 
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >>t;
    
    for(int i=1;i<=t;i++) {
        int n;
        long long int a[n+1];
        long long int b[n+1];

        for (int i=1;i<=n;i++) {
            cin>>a[n];
        }

        if(n%2==0) {
            for (int i=1;i<=n-1;i+=2) {
                if(a[i]<=a[i+1]) {
                    b[i] = a[i];
                    b[i+1] = a[i+1] - a[i+1]%a[i];
                }
            }
        }


        

    }

    return 0;
}