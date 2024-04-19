#include <bits/stdc++.h>

using namespace std;

string Dcrpt(const string &Ncrpt_txt)
{
    string Dcrpt_txt = Ncrpt_txt;
    for (char &c : Dcrpt_txt)
    {
        if (c >= 'a' && c <= 'z')
        {
            c = ((c - 'a' - 1 + 26) % 26) + 'a';
        }
        else if (c >= 'A' && c <= 'Z')
        {
            c = ((c - 'A' - 1 + 26) % 26) + 'A';
        }
    }
    return Dcrpt_txt;
}

int main()
{
    string encryptedMessage = "Ibqqz Cjsuiebz!";

    cout << Dcrpt(encryptedMessage) << endl;

    return 0;
}
