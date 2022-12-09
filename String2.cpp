#include <bits/stdc++.h>
using namespace std;
// character is alphabet or not
int main()
{
    char ch;
    cout << "Enter the character" << endl;
    cin >> ch;
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        cout << "Alphabet" << endl;
    }
    else
    {
        cout << "Not alphabet" << endl;
    }
}
