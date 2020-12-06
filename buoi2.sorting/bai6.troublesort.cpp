#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


// void swap(long int *xp, long int *yp)  
// {  
//     int temp = *xp;  
//     *xp = *yp;  
//     *yp = temp;  
// }  
  
// // A function to implement bubble sort  
// void troubleSort(long int arr[], int n)  
// {  
//     int i, j;  
//     for (i = 0; i < n-2; i++)      
      
//     // Last i elements are already in place  
//     for (j = 0; j < n-i-2; j++)  
//         if (arr[j] > arr[j+2])  
//             swap(&arr[j], &arr[j+2]);  
// }  

int main() {
    int T;
    cin >> T;
    for (int w=0; w < T; w++) {
        int N;
        cin >> N;
        long int a[N];
        long int b[N];
        long int c[N];
        long int d[N];

        for (int i = 0; i < N; ++i){
            b[i] = 200000;
            c[i] = 200000;
        }

        for (int i = 0; i < N; i++) {
            cin >> a[i];
            if (i%2==0) {
                b[i] = a[i];
            } else {
                c[i] = a[i];
            }
        }

        sort(a, a+N);
        sort(b, b+N);
        sort(c, c+N);

        // for (int i = 0; i < N/2 + N%2; i++)
        // {
        //     cout << b[i] <<" ";
        // }
        // cout << "\n";
        // for (int i = 0; i < N/2; i++)
        // {
        //     cout << c[i] <<" ";
        // }
        // cout << "\n";
        int b_index = 0;
        int c_index = 0;
        for (int i = 0; i < N; i++) {
            if (i%2==0) {
                d[i] = b[b_index];
                b_index++;
            } else {
                d[i] = c[c_index];
                c_index++;
            }
        }        
        // for (int i = 0; i < N; i++)
        // {
        //     cout << d[i] <<" ";
        // }
        
        //using Trouble Sort for b[i]
        // troubleSort (b, N);

        int curr = 0;
        while (a[curr] == d[curr]) {
            curr++;
        }

        if (curr == N) {
            cout <<"Case #"<< w+1 <<": OK" << "\n";

        } else {
            cout <<"Case #"<< w+1 <<": "<< curr << "\n";
        }
    }
    
    return 0;
}