// https://replit.com/@andy8787main/homeworknssheasy23#main.cpp
#include <iostream>
using namespace std;

int main() {
    int Num, Odd = 0, Even = 0; //數字 奇數 偶數
    cout << "請輸入任意6位數字: ";
    cin >> Num;

    //分類
    Odd += Num % 10;//1位數
    Num /= 10;
    Even += Num % 10;//2位數
    Num /= 10;
    Odd += Num % 10;//3位數
    Num /= 10;
    Even += Num % 10;//4位數
    Num /= 10;
    Odd += Num % 10;//5位數
    Num /= 10;
    Even += Num % 10;//6位數
    Num /= 10;
    
    //輸出
    cout << "奇數位和: " << Odd << endl;
    cout << "偶數位和: " << Even << endl;
    cout << "奇數位和 - 偶數位和: " << Odd-Even;
}
