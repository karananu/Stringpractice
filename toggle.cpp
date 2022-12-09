#include <bits/stdc++.h>
using namespace std;
// Toggle case
int main()
{
    char str[100];
    int i = 0;
    cout << "Enter the string" << endl;
    gets(str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' || str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
    cout << str;
}