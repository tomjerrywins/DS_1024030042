#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isVowel(char c) {
    c = tolower(c);
    return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
}

int main() {
    string s1 = "Hello", s2 = "World";

    // (a) Concatenate strings
    string concat = s1 + s2;
    cout << "Concatenated: " << concat << endl;

    // (b) Reverse string
    string rev = s1;
    reverse(rev.begin(), rev.end());
    cout << "Reversed: " << rev << endl;

    // (c) Delete vowels
    string noVowels;
    for (char c : s1) if (!isVowel(c)) noVowels += c;
    cout << "Without vowels: " << noVowels << endl;

    // (d) Sort strings alphabetically
    string arr[] = {"banana", "apple", "cherry"};
    int n = 3;
    sort(arr, arr+n);
    cout << "Sorted strings: ";
    for (string &str : arr) cout << str << " ";
    cout << endl;

    // (e) Uppercase to lowercase
    char ch = 'A';
    cout << "Lowercase of " << ch << " is " << char(tolower(ch)) << endl;

    return 0;
}
