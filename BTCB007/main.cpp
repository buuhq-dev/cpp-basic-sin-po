/*
Viết chương trình nhập vào họ tên, năm sinh, năm hiện tại 
sau đó in ra màn hình họ tên và tuổi của người đó.
- Mô tả đầu vào
Dòng thứ nhất nhập họ tên không dấu có khoảng trắng
Dòng thứ hai nhập năm sinh
Dòng thứ ba nhập năm hiện tại
- Ràng buộc
Số nguyên
*/
#include <iostream>

using namespace std;

int main()
{
    string hoten;
    int ns, nht;
    //cout << "Nhap Ho va Ten: "; 
    getline(cin, hoten); //cin >> hoten;
    //cout << "nam sinh: "; 
    cin >> ns;
    //cout << "nam hien tai: "; 
    cin >> nht;
    
    int t = nht - ns;
    cout << "Ban " << hoten << " nam nay " << t << " tuoi";
    
    return 0;
}