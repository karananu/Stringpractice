#include <bits/stdc++.h>
using namespace std;
// find the length of string
int main()
{
    char str[100];
    int len = strlen(str);
    cout << "Enter the string" << endl;
    cin >> str;
    for (int i = 0; i < len; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' ||
            str[i] == 'u' && str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
            str[i] == 'O' || str[i] == 'U')
        {
            // deleting the vowel bt shifting all the character by left
            for (int j = i; j < len; j++)
            {
                str[j] = str[j + 1];
            }
            i--;
            len--;
        }
    }

    cout << "After removing str is " << str;
}