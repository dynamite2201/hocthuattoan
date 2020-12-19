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





bool check(int a[], int n, int m){
    int sum = 0;

    for(int i = 1; i<=n;i++) {     
        sum +=a[i];
    }

    if(sum%m!=0) return false;

    sum = sum/m;
    cout <<"m: " <<m <<"\n";
    cout <<"sum: " <<sum <<"\n";
    int count = 0;
    int subsum =0;
    for(int i = 1; i<=n;i++) {     
        subsum+=a[i];
        cout <<"subsum: " <<subsum <<"\n";
        if(subsum == sum) {
            count ++;
            subsum=0;
            
        }
        if(subsum > sum) {
            cout <<"vuotqua "<<"\n";
            return false;
        }

        // if (subsum >m) {
        //     if(i==1) {
        //         return false;
        //     } else {                
        //         subsum-=a[i];
        //         count++;
        //         subsum=0;
        //         i--;
        //     }
        // }
    }

    // if(subsum!=0) {
    //     count++;
    // } 

    return (count==m&&subsum==0);
}

int Findt(int a[], int n){
    // max M = 30000 * 15000 = 450000000
    int L = 1, Right = n; // (int) 1e18 + 23111992;
    
    while(L < Right){
        cout <<"loop" << "\n";
        int mid = L + (Right-L) / 2;
        cout <<"L" <<L <<"\n";
        cout <<"Right" <<Right <<"\n";
        cout <<"mid" <<mid <<"\n";
        if(!check(a, n, mid)){
            Right = mid;
        }
        else L = mid + 1;
    }

    return Right;
}



int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int testcase;
    cin>>testcase;
    for (int i=0;i<testcase;i++) {
        int n;
        cin >>n;

        int a[n+1];

        for(int i = 1; i<=n;i++) {
            cin>>a[i];
        }
        cout <<"Test: " <<i <<"\n";
        cout <<n-Findt(a,n)<<"\n";
    }
}
