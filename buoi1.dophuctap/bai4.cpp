#include <iostream>
using namespace std;

char matrix[1000][1000];
char rotate_matrix[1000][1000];


int rotate (int n) {

    for (int i = 0; i < n; i++) {
        for (int k = 0; k < n; k++) {
            rotate_matrix[i][k] = matrix[n-1-k][i];
        }
    }
    return 0;
}

int gravity (int n) {
    int rear_index;
    for (int i = 0; i < n; i++) { // cot 0 -- cot n-1
        rear_index = n-1;
        // cout << "cot " << i << "\n";
        for (int k = n - 1; k >= 0; k--) { // hang n-1 den hang 0
            
            if (rotate_matrix[k][i] != '.') {
                // cout <<rotate_matrix[k][i] << "\n";
                char temp = rotate_matrix[k][i];
                rotate_matrix[k][i] = '.';
                rotate_matrix[rear_index][i] = temp;
                // cout << rotate_matrix[rear_index][i] << "\n";
                rear_index--;
                // cout <<rear_index<< "\n";
            }
        }
    }

    return 0;
}

void display (int n) {
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < n; k++) {
            cout << rotate_matrix[i][k];
        }
        cout << '\n';
    }
}


int main() {

    int T;
    cin >> T;
    for(int w = 1; w <= T; w ++ ) {
        int bluewin_ngang[2] = {-1,-1};
        int bluewin_doc[2] = {-1,-1};
        int bluewin_cheothuan[2] = {-1,-1};
        int bluewin_cheonguoc[2] = {-1,-1};

        int redwin_ngang[2] = {-1,-1};
        int redwin_doc[2] = {-1,-1};
        int redwin_cheothuan[2] = {-1,-1};
        int redwin_cheonguoc[2] = {-1,-1};

        int n;
        cin >> n;
        int K;
        cin >> K;

        for (int i = 0; i < n; i++) {
            for (int k = 0; k < n; k++) {
                cin >> matrix[i][k];
                // matrix[i][k] = '.';
            }
        }
        // matrix[2][1] = 'R';
        // matrix[2][5] = 'R';
        // matrix[3][1] = 'R';
        // matrix[3][4] = 'B';
        // matrix[3][5] = 'B';
        // matrix[4][1] = 'R';
        // matrix[4][3] = 'R';
        // matrix[4][4] = 'B';
        // matrix[4][5] = 'R';
        // matrix[5][0] = 'R';
        // matrix[5][1] = 'B';
        // matrix[5][3] = 'B';
        // matrix[5][4] = 'B';
        // matrix[5][5] = 'B';

        for (int i = 0; i < (n+K); i++) {
            for (int j = 0; j < (n+K); j++) {
                if (rotate_matrix[i][j] != '0') {
                    rotate_matrix[i][j] = '0';
                }
            }
        }

        rotate (n);
        // cout << "\n";
        // display (n);
        gravity(n);
        // cout << "\n";


        // display (n+K);

        // check (n, K);

        for (int i = 0; i < n; i++) {
            for (int k = 0; k < n; k++) {
                if (rotate_matrix[i][k] == 'B') { // check B win

                    int count_ngang = 0; // check hang ngang
                    for (int j = k + 1; j < k+K; j++) { 
                        
                        if (rotate_matrix[i][j] == 'B') {
                            count_ngang++;
                        }
                    }
                    if (count_ngang == (K-1)) {
                        bluewin_ngang[0] = i;
                        bluewin_ngang[1] = k;
                    }

                    int count_doc = 0; // check hang doc
                    for (int j = i + 1; j < i+K; j++) { 
                        
                        if (rotate_matrix[j][k] == 'B') {
                            count_doc++;
                        }
                    }
                    if (count_doc == (K-1)) {
                        bluewin_doc[0] = i;
                        bluewin_doc[1] = k;
                    }

                    int count_cheo_thuan = 0; // check hang cheo thuan
                    for (int j = k + 1; j < k+K; j++) { 
                        
                        if (rotate_matrix[i-k+j][j] == 'B') {
                            count_cheo_thuan++;
                        }
                    }
                    if (count_cheo_thuan == (K-1)) {
                        bluewin_cheothuan[0] = i;
                        bluewin_cheothuan[1] = k;
                    }

                    int count_cheo_nghich = 0; // check hang cheo nghich
                    for (int j = i + 1; j < i+K; j++) { 
                        if (k >= K-1) {
                            if (rotate_matrix[j][i+k-j] == 'B') {
                                count_cheo_nghich++;
                            }
                        }

                    }
                    if (count_cheo_nghich == (K-1)) {
                        bluewin_cheonguoc[0] = i;
                        bluewin_cheonguoc[1] = k;
                    }

                }
                if (rotate_matrix[i][k] == 'R') { // check B win

                    int count_ngang = 0; // check hang ngang
                    for (int j = k + 1; j < k+K; j++) { 
                        
                        if (rotate_matrix[i][j] == 'R') {
                            count_ngang++;
                        }
                    }
                    if (count_ngang == (K-1)) {
                        redwin_ngang[0] = i;
                        redwin_ngang[1] = k;
                    }

                    int count_doc = 0; // check hang doc
                    for (int j = i + 1; j < i+K; j++) { 
                        
                        if (rotate_matrix[j][k] == 'R') {
                            count_doc++;
                        }
                    }
                    if (count_doc == (K-1)) {
                        redwin_doc[0] = i;
                        redwin_doc[1] = k;
                    }

                    int count_cheo_thuan = 0; // check hang cheo thuan
                    for (int j = k + 1; j < k+K; j++) { 
                        
                        if (rotate_matrix[i-k+j][j] == 'R') {
                            count_cheo_thuan++;
                        }
                    }
                    if (count_cheo_thuan == (K-1)) {
                        redwin_cheothuan[0] = i;
                        redwin_cheothuan[1] = k;
                    }

                    int count_cheo_nghich = 0; // check hang cheo nghich
                    for (int j = i + 1; j < i+K; j++) { 
                        if (k >= K-1) {
                            if (rotate_matrix[j][i+k-j] == 'R') {
                                count_cheo_nghich++;
                            }
                        }

                    }                
                    if (count_cheo_nghich == (K-1)) {
                        redwin_cheonguoc[0] = i;
                        redwin_cheonguoc[1] = k;
                    }

                }
            }
        }

        // cout << bluewin_ngang[0] << "\n";
        // cout << bluewin_ngang[1] << "\n";
        // cout << bluewin_doc[0] << "\n";
        // cout << bluewin_doc[1] << "\n";
        // cout << bluewin_cheothuan[0] << "\n";
        // cout << bluewin_cheothuan[1] << "\n";
        // cout << bluewin_cheonguoc[0] << "\n";
        // cout << bluewin_cheonguoc[1] << "\n";
        // cout << "\n";
        // cout << redwin_ngang[0] << "\n";
        // cout << redwin_ngang[1] << "\n";
        // cout << redwin_doc[0] << "\n";
        // cout << redwin_doc[1] << "\n";
        // cout << redwin_cheothuan[0] << "\n";
        // cout << redwin_cheothuan[1] << "\n";
        // cout << redwin_cheonguoc[0] << "\n";
        // cout << redwin_cheonguoc[1] << "\n";

        int bluewin = bluewin_ngang[0]+bluewin_ngang[1]+bluewin_doc[0]+bluewin_doc[1]+ bluewin_cheothuan[0]+bluewin_cheothuan[1]+bluewin_cheonguoc[0]+bluewin_cheonguoc[1];
        int redwin = redwin_ngang[0]+redwin_ngang[1]+redwin_doc[0]+redwin_doc[1]+ redwin_cheothuan[0]+redwin_cheothuan[1]+redwin_cheonguoc[0]+redwin_cheonguoc[1];
        if (bluewin == -8) {
            if (redwin !=-8 ) {
                cout <<"Case #" <<w<<": "<<"Red"<<"\n";
            }
            else {
                cout <<"Case #" <<w<<": "<<"Neither"<<"\n";
            }
        } else {
            if (redwin !=-8 ) {
                cout <<"Case #" <<w<<": "<<"Both"<<"\n";
            }
            else {
                cout <<"Case #" <<w<<": "<<"Blue"<<"\n";
            }
        }
    }
    return 0;
}