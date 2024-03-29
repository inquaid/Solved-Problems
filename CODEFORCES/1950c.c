#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// using namespace std;
// #define int long long
void solve();
signed main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int T;
    scanf("%d", &T);
    getchar();
    while (T--)
    {
        solve();
        // printf("\n");
    }
}
void solve()
{
    char s[100];
    fgets(s, 100, stdin);
    s[strcspn(s, "\n")] = 0;
    int hour;
    char minutes[3];
    sscanf(s, "%2d:%2s", &hour, minutes);
    char am_pm[] = "AM";
    if (hour >= 12)
    {
        strcpy(am_pm, "PM");
    }
    if (hour > 12)
    {
        hour -= 12;
    }
    if (hour == 0)
    {
        hour = 12;
    }

    printf("%02d:%s %s\n", hour, minutes, am_pm);
}