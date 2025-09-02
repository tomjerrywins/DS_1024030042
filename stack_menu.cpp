#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> st;
    int choice;
    while (true) {
        cout << "1. Push 2. Pop 3. Peek 4. isEmpty 5. Size 6. Exit\n";
        cin >> choice;
        if (choice == 1) {
            int x; cout << "Enter value: "; cin >> x;
            st.push(x);
        } else if (choice == 2) {
            if (!st.empty()) { cout << "Popped: " << st.top() << "\n"; st.pop(); }
            else cout << "Underflow\n";
        } else if (choice == 3) {
            if (!st.empty()) cout << "Top: " << st.top() << "\n";
            else cout << "Empty\n";
        } else if (choice == 4) {
            cout << (st.empty() ? "True" : "False") << "\n";
        } else if (choice == 5) {
            cout << "Size: " << st.size() << "\n";
        } else if (choice == 6) break;
    }
    return 0;
}