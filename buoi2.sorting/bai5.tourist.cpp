#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int w = 0; w < T; w++) {
        int K, N;
        cin >> N >> K;

        long long int V;
        cin >> V;
        
        cin.ignore();

        string places[N];
        for (int i = 0; i < N; i++) {
            string nameOfPlace;
            getline(cin, nameOfPlace);
            places[i] = nameOfPlace;
        }

        int t = (V*K)%N;

// xét hàng đợi chỉ còn N+t địa điểm.
// lấy K điểm cuối trong hàng đợi điểm này:

        cout <<"Case #"<< w+1 <<": ";
        string newplaces[N+t];

        for (int i = 0; i < N+t; i++) {
            newplaces[i] = places[i%N];
        }
                    
        for(int j=0; j<N;j++) {
            for (int i=0; i<K;i++) {
                if(places[j] == newplaces[N+t-i-1])  
                cout << places[j] << " ";
            }
        }
        cout <<"\n";
    }
}