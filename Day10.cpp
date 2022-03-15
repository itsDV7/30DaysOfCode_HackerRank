#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

string itob(int n){
    string req{};
    while(n>=1){
        req += to_string(n%2);
        n /= 2;
    }
    reverse(req.begin(), req.end());
    return req;
}

int consecutive1s(string s){
    int max_len{0};
    int curr_len{0};

    for (int i=0; i<s.size(); i++){
        if(s[i] - '0' == 0){
            max_len = max(max_len, curr_len);
            curr_len = 0;
        }
        else{
            curr_len += 1;
        }
    }
    return max(curr_len, max_len);
}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
    
    string binary{};
    binary = itob(n);
    cerr << binary << '\n';
    
    int longest1s{};
    longest1s = consecutive1s(binary);
    cerr << longest1s << '\n';
    
    cout << longest1s;
    
    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
