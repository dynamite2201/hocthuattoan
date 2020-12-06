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

        int t = (V%N)*K;

// xét hàng đợi chỉ còn t địa điểm.
// lấy K điểm cuối trong hàng đợi t điểm này:

        cout <<"Case #"<< w+1 <<": ";
        if (t==0) { 
            for (int i=N-K; i<N;i++) {
                
                cout << places[i] << " ";
            }
        } else {
            string newplaces[t];

            for (int i = 0; i < t; i++) {
                newplaces[i] = places[i%N];
            }
            
            for(int j=0; j<N;j++) {
                for (int i=0; i<K;i++) {
                    if(places[j] == newplaces[t-i-1])  
                    cout << places[j] << " ";
                }
            }
        }
        cout <<"\n";
    }
}