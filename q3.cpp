#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string exp) {
    stack<char> s;
    for (int i = 0; i < exp.length(); i++) {
        char c = exp[i];
        if (c == '(' || c == '{' || c == '[') {
            s.push(c);
        } else if (c == ')' || c == '}' || c == ']') {
            if (s.empty()) return false;
            char top = s.top();
            s.pop();
            if ((c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '[')) {
                return false;
            }
        }
    }
    return s.empty();
}

int main() {
    string exp;
    cin >> exp;
    if (isBalanced(exp)) cout << "Balanced";
    else cout << "Not Balanced";
    return 0;
}
