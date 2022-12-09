#include <bits/stdc++.h>
using namespace std;
// find the length of string
int main()
{
    char str[30];
    int length = 0;
    cout << "Enter the string" << endl;
    gets(str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    cout << "length of string is" << length << endl;
}