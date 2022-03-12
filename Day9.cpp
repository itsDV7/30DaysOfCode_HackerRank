#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int factorial(int N){
    if(N <= 1){
        return 1;
    }
    else{
        return N * factorial(N-1);
    }
}

int main() {
    
    int n{};
    cin >> n;
    
    int ans{};
    ans = factorial(n);
    
    cout << ans;
    
    return 0;
}
