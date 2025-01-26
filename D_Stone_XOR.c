#include<stdio.h>

int CalcXor(int* a, int n){
    int res = 0;

    for (int i = 0; i < n; i++) {
        res ^= a[i];
    }
    
    return res;
}
const int N = 1<<12;
int cnt[N];
void f(int* a, int n, int currXOR){
    if(n == 0){
        cnt[currXOR] = 1;
        // st.insert(currXOR);
        return;
    }
    int nums = a[n - 1];
    currXOR ^= nums;
    a[n - 1] = 0;
    // bug(a.size() - n, a.size() , n);
    for (int i = 0; i < n; ++i) {
        currXOR ^= a[i];
        a[i] += nums;
        currXOR ^= a[i];
        f(a, n - 1, currXOR);
        currXOR ^= a[i];
        a[i] -= nums;   
        currXOR ^= a[i];
    }
    currXOR ^= nums;
    a[n - 1] = nums;
}
    

void solve() {
    // memset(dp, -1 , sizeof(dp));
    int n; scanf("%d", &n);
    int ary[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ary[i]);
    }
    int _xor = CalcXor(ary, n);
    // f(a, n, _xor);
    // print(st.size());
    // printf("%d ", _xor);
    int res = 0;
    for (size_t i = 0; i < N; i++)
    {
        if(cnt[i] != 0) res++;
    }
    printf("%d ", res);
    
}

int main() {
    
    // for (size_t i = 0; i < 150; i++)
    // {
    //     printf("%d ", cnt[i]);
    // }
    
    solve(); return 0;
    return 0;
}