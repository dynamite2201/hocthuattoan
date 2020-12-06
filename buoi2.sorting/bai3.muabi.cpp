#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Bi {
    int id;
    int sohop;
    int sovienmoihop;
};

bool compare(const Bi& x, const Bi& y) {
    return x.sovienmoihop > y.sovienmoihop;
}

int main() {
    vector<Bi> bi;
    int N, M;
    cin >> N >> M;

    for (int i= 0; i < M; i++) {
        int a, b;
        cin >> a >>b;
        bi.push_back(Bi{i,a,b});
    }

    sort(bi.begin(), bi.end(), compare);    
    
    // for (Bi& x: bi) {
    //     cout << x.id << " " << x.sohop << " " << x.sovienmoihop << "\n";
    // }
    // bi[2].sohop--;
    // cout << bi[2].id << " " << bi[2].sohop << " " << bi[2].sovienmoihop << "\n";

    // M loai so thu tu 0, 1, 2, ..., M- 1

    int res = 0;
    int index = 0;

    while (N > 0 and index < M) {
        // cout << index <<  "\n";
        N--;
        bi[index].sohop--;

        res = res + bi[index].sovienmoihop;
        if (bi[index].sohop == 0) {
            index++;
        }
        
    }

    cout <<res;

    return 0;
}