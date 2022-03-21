#include <bits/stdc++.h>

using namespace std;



int main()
{
    string S;
    getline(cin, S);
    try{
        int N{ stoi(S) };
        cout << N;
    }
    catch(...){
        cout << "Bad String";
    }
    return 0;
}
