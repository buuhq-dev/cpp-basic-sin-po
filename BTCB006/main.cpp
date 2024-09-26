/*
Viết chương trình nhập vào hai số, tính tổng, hiệu, tích, thương của hai số đó 
rồi in kết quả tính được ra màn hình.
- Mô tả đầu vào:
Dòng đầu ghi số thứ nhất
Dòng tiếp theo ghi số thứ hai
- Ràng buộc:
Giới hạn kết quả trong miền giá trị int
*/
#include <iostream>

using namespace std;

int main()
{
    double so1, so2;
    cin >> so1;
    cin >> so2;
    
    double tong = so1 + so2;
    double hieu = so1 - so2;
    double tich = so1 * so2;
    double thuong = so1 / so2;
    cout << so1 << " + " << so2 << " = " << tong << endl;
    cout << so1 << " - " << so2 << " = " << hieu << endl;
    cout << so1 << " * " << so2 << " = " << tich << endl;
    cout << so1 << " / " << so2 << " = " << thuong << endl;
    return 0;
}