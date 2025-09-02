#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool matches(char o, char c) {
    return (o=='('&&c==')')||(o=='['&&c==']')||(o=='{'&&c=='}');
}

int main() {
    string s; cout << "Enter expression: "; getline(cin >> ws, s);
    stack<char> st;
    for (char c : s) {
        if (c=='('||c=='['||c=='{') st.push(c);
        else if (c==')'||c==']'||c=='}') {
            if (st.empty()||!matches(st.top(),c)) { cout << "Not balanced\n"; return 0; }
            st.pop();
        }
    }
    cout << (st.empty() ? "Balanced" : "Not balanced") << "\n";
    return 0;
}