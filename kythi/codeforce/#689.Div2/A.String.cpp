#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n,k;
        cin >> n >> k;
        int index =0;
        int curr =0;
        char arr[3] = {'a','b','c'};
        // string arr = "abc";

        while(n>0) {
            // cout << "n:" << n << "\n";
            // cout << "char: ";
            cout << arr[index%3];
            // cout <<"\n";
            curr++;
            n--;
            // cout << "k:" << k << "\n";
            if(curr == k) {
                index ++;
                curr = 0;
            }
        }
        cout << "\n";
    }
    return 0;
}