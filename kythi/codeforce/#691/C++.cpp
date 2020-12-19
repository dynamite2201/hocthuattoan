#include <iostream>
#include<vector>
#include<algorithm>
#include <unordered_map> 
using namespace std;

int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 
  
// Function to find gcd of array of 
// numbers 
int findGCD(int arr[], int n) 
{ 
    int result = arr[0]; 
    for (int i = 1; i < n; i++) 
    { 
        result = gcd(arr[i], result); 
  
        if(result == 1) 
        { 
           return 1; 
        } 
    } 
    return result; 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int n;
    cin >>n;
    if(n%2==0) {
        cout <<(n/2+1)*(n/2+1);
    }
    if(n%2==1) {
        cout <<(n+2)*(n+2) - ((n+1)/2+1)*((n+1)/2+1)- ((n-1)/2+1)*((n-1)/2+1);
    }

    

    
    return 0;
}