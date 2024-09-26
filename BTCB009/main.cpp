/* Tính phần nguyên - phần dư
Viết chương trình nhập vào hai số chứa trong hai biến a và b sau đó tiến hành tính:
Phép chia lấy phần dư của a cho b
Phép chia lấy phần nguyên của b cho a
In các kết quả tính được ra màn hình.
- Mô tả đầu vào
Dòng thứ nhất nhập số a
Dòng thứ hai nhập số b
- Ràng buộc:
Số nguyên
- Mô tả đầu ra:
Dòng thứ nhất ghi kết quả phép chia lấy phần dư của a cho b
Dòng thứ hai ghi kết quả phép chia lấy phần nguyên của b cho a
==================================================================*/
#include <iostream>
//#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    cout << a % b << endl;
    cout << b / a << endl;
    return 0;
}