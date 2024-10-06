#include <bits/stdc++.h>
using namespace std;
void swp(int a, int b) {
    // Cast the integers back to pointers and swap the values at those addresses
    int temp = *(int*)a;  // Dereference the pointer (int*)a to get the value at address a
    *(int*)a = *(int*)b;  // Set the value at address a to the value at address b
    *(int*)b = temp;      // Set the value at address b to temp (original value of a)
}

int main() {
    int a, b;
    scanf("%d%d", &a, &b);  // Read two integers
    swp((int)&a, (int)&b);  // Pass their addresses as integers to swp
    printf("%d %d\n", a, b);  // Print the swapped values
}
