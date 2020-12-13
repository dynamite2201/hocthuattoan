# Học thuật toán

## 1. Code C++ Sample and Compile C++ in Ubuntu

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

## 2. Một dạng bài sử dụng Binary Search
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
    - Điều kiện tương đương: Số đó là số bé nhất lớn hơn hoặc bằng $a_K$ và nằm trong $(b_n)$



Dùng Binary search, tìm trong dãy: $$(b_n) = 2,3, 4,...,2.10^{12}$$

Số $X \in b_n$ thỏa mãn: $X$ là số bé nhất trong các số lớn hơn $a_K$. Do dãy $a_n \subset b_n$ suy ra $X = a_K$

$$ X = \min\{x \ge a_K, x \in b_n\} = a_K$$

---
#### Bài 2
- Dãy khối lượng các bánh:
  $$(a_n)=a_1, a_2,...,a_n$$
- **Dãy tăng chứa đáp án**:
- dãy tăng chứa đáp án: Tất cả số lượng chồng bánh có thể tạo ra từ dãy $(a_n)$
$$(m_k) =m_1< m_2 <... < m_k$$
- **Điều kiện**: 
  - chỉ có thể sắp xếp mỗi chồng tối đa 2 bánh kem và bánh kem ở trên có trọng lượng tối đa bằng một nửa trọng lượng bánh đặt bên dưới.
- **Đáp án**:

$$ X = \min\{x,chồng \ tối \ đa \ 2 \ bánh \ kem , \ kl \ bánh \ trên <=1/2 \ kl \ bánh \ dưới , x \in m_k\} = a_K$$

----
#### Bài 3
* Dãy tăng $(a_n)$
$$(a_n) = 3,5,6,7,8,10,12,14,15,18,20...$$
  - Cần tìm: $a_K$
* Dãy tăng $(b_n)$ chứa đáp án:
$$(b_n) = 3,4,5,6,7,...,3K$$

    - $a_K \le 3K$, quy nạp: điều kiện đầu đúng $a_1 = 3.1$. Giả sử đúng đến $K$ thì $a_K+1, a_K+2, a_K+3$ sẽ có một số là $a_{K+1}$ vì trong $3$ số có một số chia hết cho $3$. Nhưng cả $3$ số đều không quá $3(K+1)$. Ta có đpcm.
  - Hoặc đơn giản là quan sát dãy: $(c_n) = 3,6,9,....$ đương nhiên dãy $c_K > a_K$ vì giữa các số chia hết cho $3$ này vẫn còn các khe hở cho các số chia hết $5,7$ cho nên khi đếm đến $c_K$ rồi thì $a_K$ vẫn là một số ở ke hở nào đó trước số $c_K$.

* **Điều kiện**:
  - Số đó có thứ tự là $K$ (hay số đó bằng $a_K$)
  - Điều kiện tương đương: Số đó là số bé nhất lớn hơn hoặc bằng $a_K$
  - Điều kiện tương đương: Số đó là số bé nhất lớn hơn hoặc bằng $a_K$ và nằm trong $(b_n)$

- **Đáp án**:
  - Do $(a_n) \subset (b_n)$ nên đáp án là:
$$ X = \min\{x \ge a_K, x \in b_n\} = a_K$$
----
#### Phân tích:
  - **Khó ở 2 điểm**:
    - Tìm dãy tăng chứa đáp án
    - Làm sao để kiểm tra điều kiện là đúng hay sai?
      - Ví dụ ở bài 1 BINHPHUONG và bài 3 SOK: làm sao để kiểm tra $x \ge a_K$
      - Ở bài 2 CAKE: Làm sao để kiểm tra nếu số chồng là $x$ thì có thỏa mãn điều kiện không?
#### Mã giả
---
header-includes:
  - \usepackage{algorithm2e}
---
---
header-includes:
  - \usepackage[ruled,vlined,linesnumbered]{algorithm2e}
---
# Algorithm 1
Just a sample algorithmn
\begin{algorithm}[H]
\DontPrintSemicolon
\SetAlgoLined
\KwResult{Write here the result}
\SetKwInOut{Input}{Input}\SetKwInOut{Output}{Output}
\Input{Write here the input}
\Output{Write here the output}
\BlankLine
\While{While condition}{
    instructions\;
    \eIf{condition}{
        instructions1\;
        instructions2\;
    }{
        instructions3\;
    }
}
\caption{While loop with If/Else condition}
\end{algorithm} 




.
.
.
.
.
.
.
.
.
.
.
.
.
.
.
.
.
.
.
.
.
.























