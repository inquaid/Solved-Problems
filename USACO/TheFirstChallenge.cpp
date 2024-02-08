/*
ID: azmaini1
LANG: C++
TASK: test
*/

#include <iostream>
using namespace std;
int main()
{
    FILE *fin = fopen("test.in", "r");
    int a, b;
    fscanf(fin, "%d %d", &a, &b);
    FILE *fout = fopen("test.out", "w");
    fprintf(fout, "%d\n", a + b);

    exit(0);
}