#include <iostream>
#include <string.h>
using namespace std;
bool palindrom(const char *str, int length)
{

    for (int i = 0; i < length; i++)
    {
        if (toupper(str[i]) != toupper(str[length - i - 1]))
        {
            return false;
        }
    }
    return true;
}
int main()
{
    char str[100];
    cout << "Enter a String to check Palindrome: ";
    cin >> str;
    int lenght = strlen(str);
    cout << palindrom(str, lenght);
}