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
  - Thường có một **dãy tăng** <img src="svgs/6512cbd0d448700a036bf3a691c37acc.svg?invert_in_darkmode" align=middle width=16.81517804999999pt height=14.15524440000002pt/>
  - Tìm một số thỏa mãn **điều kiện** nào đó (thường là: "Tìm số bé nhất thỏa mãn...")

  **Sử dụng Binary Search như sau:**
  - Tìm một **dãy tăng chứa đáp án** cần tìm (thường chứa luôn dãy <img src="svgs/6512cbd0d448700a036bf3a691c37acc.svg?invert_in_darkmode" align=middle width=16.81517804999999pt height=14.15524440000002pt/>)
  - Dùng **Binary search** tìm ra đáp án cần tìm dựa vào **điêù kiện**
---

#### Bài 1


Xét dãy số  đã được sắp xếp từ ma trận <img src="svgs/cd5544558e1b8fda2122c6528964588d.svg?invert_in_darkmode" align=middle width=143.73913949999996pt height=26.76175259999998pt/>:

<p align="center"><img src="svgs/1a7225afdae8c5382a16b927db7f28e3.svg?invert_in_darkmode" align=middle width=294.34931129999995pt height=16.438356pt/></p>

Tìm số có thứ tự <img src="svgs/d6328eaebbcd5c358f426dbea4bdbf70.svg?invert_in_darkmode" align=middle width=15.13700594999999pt height=22.465723500000017pt/> là <img src="svgs/18388dd958853045e13e838cb9076390.svg?invert_in_darkmode" align=middle width=20.54082194999999pt height=14.15524440000002pt/> trong dãy trên:

  - **dãy tăng:** <img src="svgs/6512cbd0d448700a036bf3a691c37acc.svg?invert_in_darkmode" align=middle width=16.81517804999999pt height=14.15524440000002pt/>
  - **điều kiện:** 
    - Số đó có thứ tự là $K$ (hay số đó bằng $a_K$)
    - Điều kiện tương đương: Số đó là số bé nhất lớn hơn hoặc bằng $a_K$
    - Điều kiện tương đương: Số đó là số bé nhất lớn hơn hoặc bằng $a_K$ và nằm trong $(b_n)$



Dùng Binary search, tìm trong dãy: <p align="center"><img src="svgs/d7f9432e75e2f552763a7ef224f991b3.svg?invert_in_darkmode" align=middle width=160.61457719999999pt height=18.312383099999998pt/></p>

Số <img src="svgs/9c9fdc4c2227dafa78a577c8cc554cd9.svg?invert_in_darkmode" align=middle width=50.180624999999985pt height=22.831056599999986pt/> thỏa mãn: <img src="svgs/cbfb1b2a33b28eab8a3e59464768e810.svg?invert_in_darkmode" align=middle width=14.908688849999992pt height=22.465723500000017pt/> là số bé nhất trong các số lớn hơn <img src="svgs/18388dd958853045e13e838cb9076390.svg?invert_in_darkmode" align=middle width=20.54082194999999pt height=14.15524440000002pt/>. Do dãy <img src="svgs/f9d4c35781241262224c794779ff37d6.svg?invert_in_darkmode" align=middle width=54.73554239999999pt height=22.831056599999986pt/> suy ra <img src="svgs/68d2bebcd562b4ae5c84ad7e7ccb71e2.svg?invert_in_darkmode" align=middle width=57.36711914999999pt height=22.465723500000017pt/>

<p align="center"><img src="svgs/48ba87be7ded0954b4c732b8959c3094.svg?invert_in_darkmode" align=middle width=228.59061059999996pt height=16.438356pt/></p>

---
#### Bài 2
- **Dãy khối lượng các bánh:**
  <p align="center"><img src="svgs/41f1d2792f0c83c512dcaa84b65f35e1.svg?invert_in_darkmode" align=middle width=136.89888135pt height=16.438356pt/></p>
- **Dãy tăng chứa đáp án**:
  - dãy tăng chứa đáp án: Tất cả số lượng chồng bánh có thể tạo ra từ dãy <img src="svgs/bb3344fd34b5b34a751f89fb77f742aa.svg?invert_in_darkmode" align=middle width=30.422525099999987pt height=24.65753399999998pt/>
<p align="center"><img src="svgs/162ab714633198aea435b93f73697f2e.svg?invert_in_darkmode" align=middle width=201.98992275pt height=16.438356pt/></p>

- **Điều kiện**: 
  - chỉ có thể sắp xếp mỗi chồng tối đa 2 bánh kem và bánh kem ở trên có trọng lượng tối đa bằng một nửa trọng lượng bánh đặt bên dưới.

- **Đáp án**:
<p align="center"><img src="svgs/fb153135178e5fc41d03ede4adb32f4c.svg?invert_in_darkmode" align=middle width=600.02976165pt height=16.438356pt/></p>

----
#### Bài 3
* Dãy tăng <img src="svgs/bb3344fd34b5b34a751f89fb77f742aa.svg?invert_in_darkmode" align=middle width=30.422525099999987pt height=24.65753399999998pt/>
<p align="center"><img src="svgs/7cad805ab0c9a5403b563973b9f529c6.svg?invert_in_darkmode" align=middle width=278.82421875pt height=16.438356pt/></p>
  - Cần tìm: <img src="svgs/18388dd958853045e13e838cb9076390.svg?invert_in_darkmode" align=middle width=20.54082194999999pt height=14.15524440000002pt/>

* Dãy tăng <img src="svgs/ece3cbfa82d027419eb51dc4e8505433.svg?invert_in_darkmode" align=middle width=28.78816874999999pt height=24.65753399999998pt/> chứa đáp án:
<p align="center"><img src="svgs/c561793fa59f0d6999b3ca5ae0924117.svg?invert_in_darkmode" align=middle width=172.69203105pt height=16.438356pt/></p>

  - <img src="svgs/308767f0a0dda0449f3a3930114211e5.svg?invert_in_darkmode" align=middle width=66.63658319999999pt height=22.465723500000017pt/>, quy nạp: điều kiện đầu đúng <img src="svgs/d24558f0e461d42d989742e64f621286.svg?invert_in_darkmode" align=middle width=58.985887949999984pt height=21.18721440000001pt/>. Giả sử đúng đến <img src="svgs/d6328eaebbcd5c358f426dbea4bdbf70.svg?invert_in_darkmode" align=middle width=15.13700594999999pt height=22.465723500000017pt/> thì <img src="svgs/533c0b4a311b7acb252730eb512d6da4.svg?invert_in_darkmode" align=middle width=163.63117649999998pt height=21.18721440000001pt/> sẽ có một số là <img src="svgs/fcc50933a875b396d5cf8605857fa5db.svg?invert_in_darkmode" align=middle width=37.18474154999999pt height=14.15524440000002pt/> vì trong <img src="svgs/5dc642f297e291cfdde8982599601d7e.svg?invert_in_darkmode" align=middle width=8.219209349999991pt height=21.18721440000001pt/> số có một số chia hết cho <img src="svgs/5dc642f297e291cfdde8982599601d7e.svg?invert_in_darkmode" align=middle width=8.219209349999991pt height=21.18721440000001pt/>. Nhưng cả <img src="svgs/5dc642f297e291cfdde8982599601d7e.svg?invert_in_darkmode" align=middle width=8.219209349999991pt height=21.18721440000001pt/> số đều không quá <img src="svgs/f1b92acfd1155bc606b904ea6455c43b.svg?invert_in_darkmode" align=middle width=64.45204259999998pt height=24.65753399999998pt/>. Ta có đpcm.
  - Hoặc đơn giản là quan sát dãy: <img src="svgs/2c329f4ccb56d63dd5a078bfdcebe413.svg?invert_in_darkmode" align=middle width=115.60497959999998pt height=24.65753399999998pt/> đương nhiên dãy <img src="svgs/adee21fad675f83c06223fa42e6022a4.svg?invert_in_darkmode" align=middle width=62.245839149999995pt height=17.723762100000005pt/> vì giữa các số chia hết cho <img src="svgs/5dc642f297e291cfdde8982599601d7e.svg?invert_in_darkmode" align=middle width=8.219209349999991pt height=21.18721440000001pt/> này vẫn còn các khe hở cho các số chia hết <img src="svgs/a37833a5494dbc3407c97f8d3239d766.svg?invert_in_darkmode" align=middle width=23.744301899999993pt height=21.18721440000001pt/> cho nên khi đếm đến <img src="svgs/e174358fb892b6a64d40bb2a8cada9a4.svg?invert_in_darkmode" align=middle width=18.965471249999986pt height=14.15524440000002pt/> rồi thì <img src="svgs/18388dd958853045e13e838cb9076390.svg?invert_in_darkmode" align=middle width=20.54082194999999pt height=14.15524440000002pt/> vẫn là một số ở ke hở nào đó trước số <img src="svgs/e174358fb892b6a64d40bb2a8cada9a4.svg?invert_in_darkmode" align=middle width=18.965471249999986pt height=14.15524440000002pt/>.

* **Điều kiện**:
  - Số đó có thứ tự là <img src="svgs/d6328eaebbcd5c358f426dbea4bdbf70.svg?invert_in_darkmode" align=middle width=15.13700594999999pt height=22.465723500000017pt/> (hay số đó bằng <img src="svgs/18388dd958853045e13e838cb9076390.svg?invert_in_darkmode" align=middle width=20.54082194999999pt height=14.15524440000002pt/>)
  - Điều kiện tương đương: Số đó là số bé nhất lớn hơn hoặc bằng <img src="svgs/18388dd958853045e13e838cb9076390.svg?invert_in_darkmode" align=middle width=20.54082194999999pt height=14.15524440000002pt/>
  - Điều kiện tương đương: Số đó là số bé nhất lớn hơn hoặc bằng <img src="svgs/18388dd958853045e13e838cb9076390.svg?invert_in_darkmode" align=middle width=20.54082194999999pt height=14.15524440000002pt/> và nằm trong <img src="svgs/ece3cbfa82d027419eb51dc4e8505433.svg?invert_in_darkmode" align=middle width=28.78816874999999pt height=24.65753399999998pt/>

- **Đáp án**:
  - Do <img src="svgs/68af6b41938000900ac651c4ed8cff31.svg?invert_in_darkmode" align=middle width=81.12832364999998pt height=24.65753399999998pt/> nên đáp án là:
<p align="center"><img src="svgs/48ba87be7ded0954b4c732b8959c3094.svg?invert_in_darkmode" align=middle width=228.59061059999996pt height=16.438356pt/></p>

---------

#### Phân tích:
  - **Khó ở 2 điểm**:
    - Tìm dãy tăng chứa đáp án
    - Làm sao để kiểm tra điều kiện là đúng hay sai?
      - Ví dụ ở bài 1 BINHPHUONG và bài 3 SOK: làm sao để kiểm tra $x \ge a_K$
      - Ở bài 2 CAKE: Làm sao để kiểm tra nếu số chồng là $x$ thì có thỏa mãn điều kiện không?
#### Mã giả

```
    while (left < right)
        mid = left + (right - left)/2
        if (Điều kiện của mid đúng)
            right = mid
        else
            left = mid + 1

    return right
```

















