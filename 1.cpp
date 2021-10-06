// https://replit.com/@andy8787main/homeworknssheasy21
#include <iostream>
using namespace std;

int main() {
    int n, ans;//ans為答案
    cout << "請輸入任意3位數字: ";
    cin >> n;

    ans = 100*(n%10);//百位數
    ans += 10*((n % 100 - n % 10) / 10);//十位數
    ans += (n - n % 100)/100; //個位數
    cout << "顛倒後的3位數字: " << ans;
}
