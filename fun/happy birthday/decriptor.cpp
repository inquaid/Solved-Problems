#include <iostream>
#include <string>

using namespace std;

string decrypt(const string &encryptedText)
{
    string decryptedText = encryptedText;
    for (char &c : decryptedText)
    {
        if (c >= 'a' && c <= 'z')
        {
            c = ((c - 'a' - 1 + 26) % 26) + 'a'; // Decrypt lowercase letters
        }
        else if (c >= 'A' && c <= 'Z')
        {
            c = ((c - 'A' - 1 + 26) % 26) + 'A'; // Decrypt uppercase letters
        }
        // Non-alphabetic characters are not changed
    }
    return decryptedText;
}

int main()
{
    string encryptedMessage;
    cout << "Enter encrypted message: ";
    getline(cin, encryptedMessage);

    string decryptedMessage = decrypt(encryptedMessage);
    cout << "Decrypted Message: " << decryptedMessage << endl;

    return 0;
}
