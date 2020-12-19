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
        long long int a,b,c;
        cin>>a>>b>>c;
        // cout << a+b+c;
        // cout <<"\n";
        // cout <<(long long int)(a+b+c)/9;
        // cout <<"\n";
        // cout <<findmin(a,b,c);
        if((a+b+c)%9!=0){
            cout<<"NO"<<"\n";
        } else {
            if(findmin(a,b,c)<((a+b+c)/9)) {
                cout <<"NO"<<"\n";
            } else {
                cout <<"YES" <<"\n";
            }
        }
        

    }

    return 0;
}