#include <iostream>
#include <string>
#include <stack>
#include <cctype>
using namespace std;

int main() {
    string pf; cout << "Enter postfix: "; cin >> pf;
    stack<int> st;
    for (char c : pf) {
        if (isdigit(c)) st.push(c-'0');
        else {
            if (st.size()<2) { cout << "Invalid\n"; return 0; }
            int b=st.top(); st.pop(); int a=st.top(); st.pop();
            int res=0;
            switch(c){case '+':res=a+b;break;case '-':res=a-b;break;case '*':res=a*b;break;case '/':res=a/b;break;}
            st.push(res);
        }
    }
    cout << "Result: " << st.top() << "\n";
    return 0;
}