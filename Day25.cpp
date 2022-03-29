#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    using ll = long long;
    ll n{};
    ll t{};
    cin >> t;
    while(t--){
        bool break_{false};
        cin >> n;
        if(n==1){
            break_ = true;
        }
        for (ll i=2; i<=sqrt(n); i++){
            if (n%i == 0){
                break_ = true;
            }
        }
        if(break_){
            cout << "Not prime" << '\n';
        }
        else{
            cout << "Prime" << '\n';
        }
    }  
    return 0;
}
