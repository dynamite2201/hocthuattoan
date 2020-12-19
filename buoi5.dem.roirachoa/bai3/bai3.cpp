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
    
    for(int tcase=1;tcase<=t;tcase++) {
        long long int n;
        cin>>n;

        long long int a[n];

        for (long long int i=0;i<n;i++) {
            cin>>a[i];
        }


        vector<long long int>b;
        for(long long int i=0;i<n;i++){
            b.push_back(a[i]);
        }   
        sort(b.begin(),b.end());

        unordered_map<long long int, long long int> zipIdx;
        long long int newIdx = 1;
        for(int i = 0; i < n; i++) {
            if (i == 0 || b[i] != b[i-1]) {
                zipIdx[b[i]] = newIdx;
                newIdx++;
            }
        }


        for (long long int i = 0; i < n; i++) {
            a[i] = zipIdx[a[i]];
        }


        // for (int j=0;j<n;j++) {
        //     cout<<a[j]<< " ";
        // }

        long long int c[1000001] = {0};

        for (long long int j=0;j<n;j++) {
            c[a[j]]++;
        }

        long long int res = 0;

        for (long long int j=0;j<1000001;j++) {
            if(c[j]!=0) {
                res+=(long long int)((c[j]+1)*c[j])/2;
            }
        }
        cout <<res;

        cout <<"\n";

    }
    return 0;
}