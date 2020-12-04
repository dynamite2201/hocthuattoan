#include <iostream>
using namespace std;
char matrix[50][50];

int check (int n, int m) {

    for (int i = 0; i < n; i++) {
        for (int k = 0; k < m; k++) {
            if (matrix[i][k] == '#') {
                
                if ((i == n-1) or (k == m-1)) {
                    return 0;
                }
                else {
                    if ((matrix[i+1][k] == '#') and (matrix[i+1][k+1] == '#') and (matrix[i][k+1] == '#') ) {
                        matrix[i][k] = '/';
                        matrix[i+1][k] = '\\';
                        matrix[i][k+1] = '\\';
                        matrix[i+1][k+1] = '/';
                    }
                    else {
                        return 0;
                    }
                }
            }
        }
    }

    return 1;
}

// void initial (int n, int m) {
//     for (int i = 0; i < n; i++) {
//         for (int k = 0; k < m; k++) {
//             matrix[i][k] = '0';
//         }
//     }
// }

void display (int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < m; k++) {
            cout << matrix[i][k];
        }
        cout << '\n';
    }
}

int main() {
    int T;
    cin >> T;
    for(int j = 1; j <= T; j ++ ) {
        int n, m;
        cin >> n >> m;
        
        for (int i = 0; i < n; i++) {
            for (int k = 0; k < m; k++) {
                cin >> matrix[i][k];
            }
        }

        int check_result = check(n, m);
        
        if (check_result == 0) {
            cout <<"Case #"<< j <<": \n" <<"Impossible \n";
        }
        else {
            cout <<"Case #"<< j <<": \n";
            display (n, m);
        }

    }
    return 0;
}