// https://replit.com/@andy8787main/homeworknssheasy22#main.cpp
#include <iostream>
using namespace std;

int main() {
    int n, ans, temp; //ans為剩下的零錢 temp為戰時的張數
    cout << "請輸入花費金額: ";
    cin >> n;

    ans = 1000-n;
    cout << "需找零錢: " << ans << endl;

    //500元
    temp = ans / 500;
    ans -= 500*temp;
    cout << "可找500元 " << temp << " 張" << endl; 

    //100元
    temp = ans / 100;
    ans -= 100*temp;
    cout << "可找100元 " << temp << " 張" << endl; 

    //50元
    temp = ans / 50;
    ans -= 50*temp;
    cout << "可找50元 " << temp << " 枚" << endl; 

    //10元
    temp = ans / 10;
    ans -= 10*temp;
    cout << "可找10元 " << temp << " 枚" << endl; 

    //5元
    temp = ans / 5;
    ans -= 5*temp;
    cout << "可找5元 " << temp << " 枚" << endl; 

    //1元
    temp = ans / 1;
    ans -= 1*temp;
    cout << "可找1元 " << temp << " 枚" << endl; 
}
