#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string returnEven(string s){
    string returnString{};
    for (int i=0; i<s.length(); i+=2){
        returnString += s[i];
    }
    return returnString;
}

string returnOdd(string s){
    string returnString;
    for (int i=1; i<s.length(); i+=2){
        returnString += s[i];
    }
    return returnString;
}

int main() {
    int T{};
    cin >> T;
    
    string s{};
    string even{};
    string odd{};
    
    cin.ignore();
    while(T){
        getline(cin, s);
        even = returnEven(s);
        odd = returnOdd(s);
        cout << even << ' ' << odd << "\n";
        T -= 1;
    }
    
    return 0;
}
