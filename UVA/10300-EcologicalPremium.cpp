#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int farmers;
        cin >> farmers;
        double sum = 0;
        while (farmers--)
        {
            double SizeOfFarmyard, Animals, EnvironmentFriendlyness;
            cin >> SizeOfFarmyard >> Animals >> EnvironmentFriendlyness;
            double space = SizeOfFarmyard / Animals;
            space *= EnvironmentFriendlyness;
            space *= Animals;
            // cout << space << endl;
            sum += space;
        }
        cout << sum << endl;
    }
}