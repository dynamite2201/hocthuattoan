#include <bits/stdc++.h>
#include<math.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <string>
using namespace std;
//#pragma GCC optimize("Ofast")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")





bool check(int a[], int n, int m, int k){
    int subsum = 0;
    int count = 0;

    for(int i = 1; i<=n;i++) {     
        subsum +=a[i];

        if(subsum == m) {
            count ++;
            subsum=0;
            continue;
        }

        if (subsum >m) {
            if(i==1) {
                return false;
            } else {                
                subsum-=a[i];
                count++;
                subsum=0;
                i--;
            }
        }
    }

    if(subsum!=0) {
        count++;
    } 

    return (count<=k);
}

int Findt(int a[], int n, int k){
    // max M = 30000 * 15000 = 450000000
    int L = 0, Right = 450000000; // (int) 1e18 + 23111992;
    
    while(L < Right){
        // cout <<"loop" << "\n";
        int mid = L + (Right-L) / 2;

        if(check(a, n, mid, k)){
            Right = mid;
        }
        else L = mid + 1;
    }

    return Right;
}



int main() {
    // freopen("inputbai3_easy.txt", "r", stdin);
    // freopen("outputbai3_easy.txt", "w", stdout);

    int k,n;
    cin >>n>>k;

    int a[n+1];

    for(int i = 1; i<=n;i++) {
        cin>>a[i];
    }

    cout <<Findt(a,n,k);
}
