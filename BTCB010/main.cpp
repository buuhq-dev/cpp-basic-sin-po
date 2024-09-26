/* Tính diện tích và chu vi hình chữ nhật
Viết chương trình tính diện tích và chu vi của hình chữ nhật.
- Mô tả đầu vào
Dòng thứ nhất nhập chiều dài
Dòng thứ hai nhập chiều rộng

-Ràng buộc
Số nguyên

- Mô tả đầu ra
Dòng thứ nhất ghi chu vi hình chữ nhật
Dòng thứ hai ghi diện tích hình chữ nhật
====================== */
#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a; cin >> b;
    cout << 2*(a+b) << endl; //chu vi
    cout << a*b << endl; //dien tich

    return 0;
}