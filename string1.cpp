#include <bits/stdc++.h>
using namespace std;
// character is vowel or consonants
int main()
{
    char c;
    cout << "Enter the character" << endl;
    cin >> c;
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' && c == 'A' ||
        c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
        cout << "Vowerl character" << endl;
    }
    else
    {
        cout << "consonatant" << endl;
    }
}