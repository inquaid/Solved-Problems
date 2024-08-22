
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    std::ifstream inputFile("breedflip.in");

    int N;
    string A, B;
    inputFile >> N >> A >> B;
    inputFile.close();

    string a = A, b = B;
    int n = N, res = 0;
    // cin >> n >> a >> b;
    for (int i = 0; i < n; i++)
    {
        bool pos = (a[i] != b[i]);
        if (pos)
            res++;
        while (a[i] != b[i] && i < n)
        {
            i++;
        }
    }
    // cout << res;

    int count = res;

    std::ofstream outputFile("breedflip.out");

    outputFile << count << std::endl;
    outputFile.close();

    return 0;
}