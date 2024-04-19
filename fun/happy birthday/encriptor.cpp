#include <iostream>
#include <string>

using namespace std;

string encrypt(const string &plainText, int shift)
{
    string encryptedText = plainText;
    for (char &c : encryptedText)
    {
        if (c >= 'a' && c <= 'z')
        {
            c = ((c - 'a' + shift) % 26) + 'a'; // Encrypt lowercase letters
        }
        else if (c >= 'A' && c <= 'Z')
        {
            c = ((c - 'A' + shift) % 26) + 'A'; // Encrypt uppercase letters
        }
        // Non-alphabetic characters are not changed
    }
    return encryptedText;
}

int main()
{
    string name, message;
    cout << "Enter the name: ";
    getline(cin, name);
    message = "Happy Birthday, " + name + "!";
    int shift = 1; // Example shift

    string encryptedMessage = encrypt(message, shift);
    cout << "Encrypted Message: " << encryptedMessage << endl;

    return 0;
}
