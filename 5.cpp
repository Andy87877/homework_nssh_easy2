// https://replit.com/@andy8787main/homeworknssheasy25#main.cpp
#include <iostream>
using namespace std;

int main() {
    int apple = 100, student = 23;
    int temp; //每一題的答案

    //蘋果可吃的天數為
    temp = apple / student;
    cout << "蘋果可吃的天數為: " << temp << endl;
    //第幾天產生蘋果不足供應
    temp = (apple / student)+1;
    cout << "第幾天產生蘋果不足供應: " << temp << endl;
    //蘋果不足的數量為
    temp = student - (apple % student);
    temp *= ((apple % student) != 0);//蘋果剛好分夠時
    cout << "蘋果不足的數量為: " << temp << endl;
}
