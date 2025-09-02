#include <iostream>
#include <string>
#include <stack>
using namespace std;

int prec(char op) {
    if (op=='+'||op=='-') return 1;
    if (op=='*'||op=='/') return 2;
    if (op=='^') return 3;
    return 0;
}

int main() {
    string infix; cout << "Enter infix (no spaces): "; cin >> infix;
    stack<char> st; string postfix;
    for (char c : infix) {
        if (isalnum(c)) postfix.push_back(c);
        else if (c=='(') st.push(c);
        else if (c==')') {
            while (!st.empty()&&st.top()!='(') { postfix.push_back(st.top()); st.pop(); }
            if (!st.empty()) st.pop();
        } else {
            while (!st.empty()&&prec(st.top())>=prec(c)) { postfix.push_back(st.top()); st.pop(); }
            st.push(c);
        }
    }
    while (!st.empty()) { postfix.push_back(st.top()); st.pop(); }
    cout << "Postfix: " << postfix << "\n";
    return 0;
}