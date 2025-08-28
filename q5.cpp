#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

int evaluatePostfix(string exp) {
    stack<int> s;
    for (int i = 0; i < exp.length(); i++) {
        char c = exp[i];
        if (isdigit(c)) {
            s.push(c - '0');
        } else {
            int val2 = s.top(); s.pop();
            int val1 = s.top(); s.pop();
            if (c == '+') s.push(val1 + val2);
            else if (c == '-') s.push(val1 - val2);
            else if (c == '*') s.push(val1 * val2);
            else if (c == '/') s.push(val1 / val2);
            else if (c == '^') s.push(pow(val1, val2));
        }
    }
    return s.top();
}

int main() {
    string exp;
    cin >> exp;
    cout << evaluatePostfix(exp);
    return 0;
}
