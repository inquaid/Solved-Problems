#include <iostream>
#include <string>
#include <vector>

int check(const std::string &str)
{
    std::vector<std::string> ary = {"Tetrahedron", "Cube", "Octahedron", "Dodecahedron", "Icosahedron"};
    std::vector<int> values = {4, 6, 8, 12, 20};

    for (size_t i = 0; i < ary.size(); i++)
    {
        if (str == ary[i])
        {
            return values[i];
        }
    }

    return 0;
}

int func()
{
    std::string str;
    std::getline(std::cin, str);

    int result = check(str);
    return result;
}

int main()
{
    long long int a;
    std::cin >> a;
    std::cin.ignore(); // Ignore the newline character left in the buffer.

    std::vector<long long int> ary(a);
    long long int sum = 0;

    for (long long int i = 0; i < a; i++)
    {
        ary[i] = func();
        sum += ary[i];
    }

    std::cout << sum << std::endl;

    return 0;
}
