/* Tìm diện tích max
Viết chương trình nhập vào chu vi của một hình chữ nhật 
rồi suy ra diện tích lớn nhất mà hình đó có thể đạt được. 
Biết hình chữ nhật đạt diện tích lớn nhất khi nó là hình vuông.
- Mô tả đầu vào
Cho chu vi hình chữ nhật

- Ràng buộc
Số thực

-Mô tả đầu ra
Kết quả làm tròn đến 2 chữ số phần thập phân
Ghi ra diện tích lớn nhất mà hình chữ nhật có thể đạt được
====================== */
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double chuvi;
    cin >> chuvi; 
    /*
    chuvi = p = 2(a+b); pmax khi a = b ==> p = 2*2*a = 4a; => a = p/4
    => s = a*b = a^2
    */
   double a = chuvi/4;
   cout << round(a*a*100)/100 << endl;

    return 0;
}