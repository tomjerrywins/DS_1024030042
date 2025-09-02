#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    string s; cout << "Enter string: "; getline(cin >> ws, s);
    stack<char> st;
    for (char c : s) st.push(c);
    string rev;
    while (!st.empty()) { rev.push_back(st.top()); st.pop(); }
    cout << "Reversed: " << rev << "\n";
    return 0;
}