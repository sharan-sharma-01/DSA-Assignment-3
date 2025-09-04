#include <iostream>
#include <stack>
using namespace std;

void nearestSmallerElement(int A[], int N) {
    stack<int> st;
    int result[100];

    for (int i = 0; i < N; i++) {
        while (!st.empty() && st.top() >= A[i]) {
            st.pop();
        }

        if (st.empty()) result[i] = -1;
        else result[i] = st.top();

        st.push(A[i]);
    }

    for (int i = 0; i < N; i++) {
        cout << result[i] << " ";
    }
}

int main() {
    int A[] = {4, 5, 2, 10, 8};
    int N = 5;
    nearestSmallerElement(A, N);
    return 0;
}
