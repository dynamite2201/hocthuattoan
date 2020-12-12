#include <iostream>
#include <cmath>
using namespace std;

int main() {

    // long long int ID, K;
    // cin >> ID >> K;
    for (long long int K = 1; K < 100; K++){
        cout << "So thu " << K << ": ";

        long long int n = floor(sqrt(K));
        
        long long int  sodu;
        sodu = K-n*n;

        if (sodu == 0) {
            cout << "cap so: (" << n << "," << 1 << ")  ";
            cout << n*n +1 << "\n";
        } else {
        
            if(n%2 == 0 ){
                long long int  dich = sodu/2;
                long long int  z = (n+2)/2 - dich;
                cout << "cap so: (" << z << "," << (n+2-z) << ")  ";
                cout << z*z+(n+2-z)*(n+2-z)<< "\n";
            }

            if(n%2 == 1) {
                long long int  dich = sodu/2-(1-sodu%2);
                long long int  z = (n+2)/2 - dich;
                cout << "cap so: (" << z << "," << (n+2-z) << ")  ";
                cout << z*z+(n+2-z)*(n+2-z)<< "\n";
            }    
        }
    }
    return 0;
}