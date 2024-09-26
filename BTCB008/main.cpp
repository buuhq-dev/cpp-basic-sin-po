/* ======================
Viết chương trình nhập vào hai số chứa trong hai biến a và b 
sau đó tiến hành tính a^2 và b^3 rồi in kết quả tính được ra màn hình.
- Mô tả đầu vào:
Dòng thứ nhất nhập số a
Dòng thứ hai nhập số b
- Ràng buộc
Số nguyên
====================== */
#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    
    cout << a*a << endl;; //a^2 
    cout << b*b*b << endl;; //b^3
    
    return 0;
}