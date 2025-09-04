#include <iostream>
#include <stack>
using namespace std;

void nextGreaterElement(int arr[], int N) {
    int result[100];
    stack<int> st;

    for (int i = N - 1; i >= 0; i--) {
        while (!st.empty() && arr[st.top()] <= arr[i]) {
            st.pop();
        }
        if (!st.empty()) result[i] = arr[st.top()];
        else result[i] = -1;
        st.push(i);
    }

    for (int i = 0; i < N; i++) {
        cout << result[i] << " ";
    }
}

int main() {
    int arr[] = {4, 5, 2, 25};
    int N = 4;
    nextGreaterElement(arr, N);
    return 0;
}
