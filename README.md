# Học thuật toán

## Code C++ Sample and Compile C++ in Ubuntu

```file test.cpp```

```C++
#include <iostream>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cout << "Time " << i << ": " <<"Hello, World!!!\n";
  }
  return 0;
}
```

```Ubuntu terminal```
```console
g++ -o output test.cpp
./output
```


