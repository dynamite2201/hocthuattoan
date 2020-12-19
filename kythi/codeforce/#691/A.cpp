#include <iostream>
#include<vector>
#include<algorithm>
#include <unordered_map> 
using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int t;
    cin >>t;
    for (int i=0;i<t;i++) {
        int n;

        cin>>n;

        string r;
        cin.ignore();
        getline(cin, r);

        string b;
        // cin.ignore();
        getline(cin, b);

        // int ar[n+1], b[n+1]; 

        // for (int j=0;j<n;j++) {
        //     r[j+1]=r[j];
        // }
        // for (int j=0;j<n;j++) {
        //     cin>>b[j];
        // }

        // cout<<"\n";
        // for (int j=0;j<n;j++) {
        //     cout<<r[j];
        // }

        // cout<<"\n";
        // for (int k=0;k<n;k++) {
        //     cout<<b[k];
        // }
        // cout << r << " " <<b;

        int res = 0;        
        for (int j=0;j<n;j++) {
            if(r[j]>b[j]) {
                res++;
            }
            if(r[j]<b[j]){
                res--;
            }
        }

        // cout <<res<<"\n";
        if(res==0) {
            cout << "EQUAL" <<"\n";
        }
        if(res>0) {
            cout << "RED" <<"\n";
        }
        if(res<0) {
            cout << "BLUE" <<"\n";
        }
    }

    
    return 0;
}