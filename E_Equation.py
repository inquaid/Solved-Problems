# #include <bits/stdc++.h>
# using namespace std;

# double predictedValue(double x) { return (x * x) + sqrt(x); }

# int main() {
#     cout << fixed << setprecision(15);
#     double c;
#     cin >> c;
#     double l = 0, r = 1e18;
#     while ((r - l) > 1e-6) {
#         double mid = (r + l) / 2.0;
#         if (predictedValue(mid) <= c) {
#             l = mid;
#         } else
#             r = mid;
#     }
#     cout << l;
# }


def predictedValue(x):
    return (x**2) + (x**0.5)


c = float(input())
l = 0.0
r = 1e18

while (r - l) > 1e-6:
    mid = l + (r - l) / 2.0
    if predictedValue(mid) <= c:
        l = mid
    else:
        r = mid
print(l)
