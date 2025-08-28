#include <iostream>
#include <stack>
using namespace std;

int main() {
    string str;
    cin >> str;
    stack<char> s;
    for (int i = 0; i < str.length(); i++) {
        s.push(str[i]);
    }
    string rev = "";
    while (!s.empty()) {
        rev = rev + s.top();
        s.pop();
    }
    cout << rev;
    return 0;
}
