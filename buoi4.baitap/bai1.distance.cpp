#include <iostream>
using namespace std;

int main() {
    string S;
    string T;
    cin >> S;
    cin >> T;
    int res = 0;
    int cntS[26] = {0};
    int cntT[26] = {0};
    // for(int i = 0;i< 26;i++) {
    //     cntS[i] = 0;
    //     cntT[i] = 0;
    // }
    for(int i = 0;i< S.size();i++) {
        cntS[S[i]-'a'] ++;
    }
    for(int i = 0;i< T.size();i++) {
        cntT[T[i]-'a'] ++;
    }

    for(int i = 0;i< 26;i++) {
        res+= abs(cntS[i]-cntT[i]);
    }
    cout <<res;



    return 0;
}