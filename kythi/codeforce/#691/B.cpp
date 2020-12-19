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

    int n;
    cin >>n;
    if(n%2==0) {
        cout <<(n/2+1)*(n/2+1);
    }
    if(n%2==1) {
        cout <<(n+2)*(n+2) - ((n+1)/2+1)*((n+1)/2+1)- ((n-1)/2+1)*((n-1)/2+1);
    }

    

    
    return 0;
}