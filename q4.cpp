#include <iostream>
#include <stack>
using namespace std;

int prec(char c) {
    if (c == '^') return 3;
    if (c == '*' || c == '/') return 2;
    if (c == '+' || c == '-') return 1;
    return -1;
}

string infixToPostfix(string exp) {
    stack<char> s;
    string result = "";
    for (int i = 0; i < exp.length(); i++) {
        char c = exp[i];
        if (isalnum(c)) {
            result = result + c;
        } else if (c == '(') {
            s.push(c);
        } else if (c == ')') {
            while (!s.empty() && s.top() != '(') {
                result = result + s.top();
                s.pop();
            }
            if (!s.empty()) s.pop();
        } else {
            while (!s.empty() && prec(s.top()) >= prec(c)) {
                result = result + s.top();
                s.pop();
            }
            s.push(c);
        }
    }
    while (!s.empty()) {
        result = result + s.top();
        s.pop();
    }
    return result;
}

int main() {
    string exp;
    cin >> exp;
    cout << infixToPostfix(exp);
    return 0;
}
