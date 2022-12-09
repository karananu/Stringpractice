#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[100];
    char str_withoutbrack[100];
    cin >> str;

    int i = 0;
    int j = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != '(' && str[i] != ')')
        {
            str_withoutbrack[j] = str[i];
            j++;
        }
    }
    str_withoutbrack[j] = '\0';
    cout << str_withoutbrack;
}
