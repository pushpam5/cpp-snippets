#include <iostream>
using namespace std;

string isPalindrome(string& str, int start, int end)
{
    if (start >= end)
    {
        return "Palindrome";
    }

    if (str[start] != str[end])
    {
        return "Not Palindrome";
    }
    return isPalindrome(str, start + 1, end - 1);
}

int main()
{
    string s;
    cin >> s;

    cout << isPalindrome(s, 0, s.size() - 1) << endl;
    return 0;
}