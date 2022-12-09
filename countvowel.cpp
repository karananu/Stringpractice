#include <bits/stdc++.h>
using namespace std;
// find the length of string
int main()
{
    char str[30];
    int count = 0;
    cout << "Enter the string" << endl;
    gets(str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' ||
            str[i] == 'u' && str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
            str[i] == 'O' || str[i] == 'U')
        {
            count++;
        }
    }
    cout << "total vowel is " << count;
}