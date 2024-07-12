#include<bits/stdc++.h>

using namespace std;

void output(float a[][10], int n ){
    for(int i=0;i<n;i++){
        for(int j=0;j<n+1;j++){
            cout<<a[i][j]<<' ';
        }
        cout<<endl;
    }
}

int main(int argc, char **argv)
{
    void lu(float[][10], float[][10], float[][10], int n);
    void output(float[][10], int);
    float a[10][10], l[10][10], u[10][10];
    int n = 0, i = 0, j = 0;
    cout << "Enter size : ";
    cin >> n;
    for (i = 0; i < n; i++){
        for (j = 0; j < n+1; j++){
            cout << "Enter values no: [" << i+1 << "][" << j+1 << "]: ";
            cin >> a[i][j];
        }
    }
    lu(a, l, u, n);
    cout << "\nL Decomposition\n\n";
    output(l, n);
    cout << "\nU Decomposition\n\n";
    output(u, n);
    return 0;
}
void lu(float a[][10], float l[][10], float u[][10], int n)
{
    int i = 0, j = 0, k = 0;
    for (i = 0; i < n; i++){
        for (j = 0; j < n+1; j++){
            if (j < i)
                l[j][i] = 0;
            else{
                l[j][i] = a[j][i];
                for (k = 0; k < i; k++){
                    l[j][i] = l[j][i] - l[j][k] * u[k][i];
                }
            }
        }
        for (j = 0; j < n+1; j++){
            if (j < i)
                u[i][j] = 0;
            else if (j == i)
                u[i][j] = 1;
            else{
                u[i][j] = a[i][j] / l[i][i];
                for (k = 0; k < i; k++){
                    u[i][j] = u[i][j] - ((l[i][k] * u[k][j]) / l[i][i]);
                }
            }
        }
    }
}


