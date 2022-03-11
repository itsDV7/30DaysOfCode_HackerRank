#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    
    int N{};
    cin >> N;
    
    map<string, string> m;
    string name{};
    string number{};
    
    for (int i=0; i<N; i++){
        cin >> name >> number;
        m[name] = number;
    }
    cin.ignore();
    
    string test{};
    map<string, string>::iterator itr;
    while (cin >> test){
        itr = m.find(test);
        if (itr != m.end()){
            cout << test << "=" << itr->second << '\n';
        }
        else{
            cout << "Not found\n";
        }
    }
    
    return 0;
}
