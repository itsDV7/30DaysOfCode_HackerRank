#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int day{};
    int month{};
    int year{};
    cin >> day >> month >> year;
    
    int dday{};
    int dmonth{};
    int dyear{};
    cin >> dday >> dmonth >> dyear;
    
    if(year == dyear){
        if(month <= dmonth){
            if(day <= dday){
                cout << 0;
            }
            else{
                cout << (day - dday)*15;
            }
        }
        else{
            cout << (month - dmonth)*500;
        }
    }
    else if(year < dyear){
        cout << 0;
    }
    else{
        cout << 10000;
    }
    
    return 0;
}
