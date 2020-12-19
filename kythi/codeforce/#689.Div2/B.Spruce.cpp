#include <iostream>
using namespace std;


int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n,m;
        cin >>n >>m;
        char a[n+1][m+1];
        for (int i = 1;i <=n;i++) {
            for(int j =1; j<=m;j++)
            cin >> a[i][j];
        }
        
        int count = 0;
        
        for (int u = 1;u <=n;u++) {
            for(int v = 1; v<=m;v++){
                
                cout << "xet origin tai: (" << u << ", " << v << ")" <<"\n";
                if (a[u][v] != '*') continue;
                // int x = u;
                // int y = v;
                int curr_row = u; // max high of row k
                // int curr_col = v;
                int check = true;
                while(curr_row <= n) {
                    // check curr_row
                    cout << "Row hien tai la: " << curr_row << "\n";
                    // cout << "Col hien tai la: " << curr_col << "\n";
                    for (int i = v-(curr_row - u); i<=v+(curr_row - u);i++) {
                        if (a[curr_row][i] != '*') {
                            cout << "Row bi fail la: " << curr_row << "\n";
                            check = false;
                            break;
                        }
                    }
                    if (check == false) {
                        // curr_row--;
                        break;
                    }
                    curr_row++;
                }
                curr_row--;
                // cout << "so luong hien tai dat duoc: " << count << "\n";
                // cout << "Row hien tai la: " << curr_row << "\n";
                // cout << "Toa do origin: " << u << "\n";
                count = count + (curr_row-u+1);
                // cout << "so luong hien tai dat duoc: " << count << "\n";
            }
            
        }
        cout << count;
        cout << "\n";
    }
    return 0;
}