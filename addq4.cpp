#include <iostream>
#include <stack>
using namespace std;

void dailyTemperatures(int temps[], int N) {
    int answer[100] = {0};
    stack<int> st; 

    for (int i = 0; i < N; i++) {
        while (!st.empty() && temps[i] > temps[st.top()]) {
            int j = st.top(); st.pop();
            answer[j] = i - j;
        }
        st.push(i);
    }

    for (int i = 0; i < N; i++) {
        cout << answer[i] << " ";
    }
}

int main() {
    int temps[] = {73, 74, 75, 71, 69, 72, 76, 73};
    int N = 8;
    dailyTemperatures(temps, N);
    return 0;
}
