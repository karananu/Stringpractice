#include <bits/stdc++.h>
using namespace std;
// find the length of string
int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;
    reverse(str.begin(), str.end());
    cout << str;
}