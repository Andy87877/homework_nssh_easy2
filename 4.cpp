// https://replit.com/@andy8787main/homeworknssheasy24#main.cpp
#include <iostream>
using namespace std;

int main() {
    int n, ans;
    cout << "請輸入消費金額: ";
    cin >> n;

    ans = n - (n / 1000)*100;
    cout << "應付金額為: " << ans;
}
