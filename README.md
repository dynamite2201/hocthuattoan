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

## 1. Một dạng bài sử dụng Binary Search
**Bài 1:** [BINHPHUONG](https://v2.bigocoder.com/courses/45/lectures/598/problems/1125?view=statement)

**Bài 2:** [CAKE](https://v2.bigocoder.com/courses/45/lectures/598/problems/1126?view=statement)

**Bài 3:** [SOK](https://v2.bigocoder.com/courses/45/lectures/598/problems/1127?view=statement)

#### Điểm chung của các bài toán:
  - Thường có một **dãy tăng** $a_n$
  - Tìm một số thỏa mãn **điều kiện** nào đó (thường là: "Tìm số bé nhất thỏa mãn...")

  **Sử dụng Binary Search như sau:**
  - Tìm một **dãy tăng chứa đáp án** cần tìm (thường chứa luôn dãy $a_n$)
  - Dùng **Binary search** tìm ra đáp án cần tìm dựa vào **điêù kiện**
---

#### Bài 1


Xét dãy số  đã được sắp xếp từ ma trận $A =(i^2 + j^2)_{10^6 \times 10^6}$:

$$(a_{n}) = {2, 5, 5, 8, 10, 10, 13, 13, 17, 17, 18,...}$$

Tìm số có thứ tự $K$ là $a_K$ trong dãy trên:

  - **dãy tăng:** $a_n$
  - **điều kiện:** 
    - Số đó có thứ tự là $K$ (hay số đó bằng $a_K$)
    - Điều kiện tương đương: Số đó là số bé nhất lớn hơn hoặc bằng $a_K$



Dùng Binary search, tìm trong dãy: $$(b_n) = 2,3, 4,...,2.10^{12}$$

Số $X \in b_n$ thỏa mãn: $X$ là số bé nhất trong các số lớn hơn $a_K$. Do dãy $a_n \subset b_n$ suy ra $X = a_K$

$$ X = \min\{x \ge a_K, x \in b_n\} = a_K$$

---
#### Bài 2
- Dãy khối lượng các bánh:
  $$(a_n)=a_1, a_2,...,a_n$$
- dãy tăng chứa đáp án: Tất cả số lượng chồng bánh có thể tạo ra từ dãy $(a_n)$
$$(m_k) =m_1< m_2 <... < m_k$$
- **Điều kiện**: 

$$ X = \min\{x, x \in m_k\ } = a_K$$








