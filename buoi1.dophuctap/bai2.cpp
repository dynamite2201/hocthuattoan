#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    for(int j = 1; j <= T; j ++ ) {
        int n;
        cin >> n;

        string str = to_string(n);
        int len = str.length();

        string min_str = str;
        string max_str = str;

        for (int i = 0; i < len - 1; i++) {
            
            for (int k = i + 1; k < len; k ++) {
                string new_str = str;
                new_str[i] = str[k];
                new_str[k] = str[i];

                if (new_str[0] == '0') {
                    continue;
                }

                if (new_str < min_str) {
                    min_str = new_str;
                }
                
                if (new_str > max_str) {
                    max_str = new_str;
                    
                }

            }
        }

        
        cout<< "Case #" <<j<<": "<< min_str << " " << max_str << "\n";


    }

    return 0;
}