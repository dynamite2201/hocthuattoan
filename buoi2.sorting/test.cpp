#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {

  std::array<int, 100> a;
  a.fill(-1);

  for(int i = 0; i < 100; i++) {
    cout <<  a[i] <<" ";
    
  }return 0;
}