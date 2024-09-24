#include<bits/stdc++.h>
using namespace std;

int check_kth_bit(int x, int k) {
  return (x >> k) & 1;
}


int main() {

   #ifdef ONLINEJUDGE
   clock_t tStart = clock();
       freopen("input.txt","r",stdin); //can need to change file . this one for taking input
       freopen("output.txt","w",stdout); // this one for output
  #endif

int n, m, k;
cin >> n >> m >> k;

std::vector<int> v(m+1);
for(auto &i : v) cin >> i;


    int res = 0;
for (int i = 0; i < m; ++i)
{
    int cnt = 0;
    for (int kth = 0; kth < 32; ++kth)
    {
        if ( check_kth_bit(v[i],kth) != check_kth_bit(v[m], kth) )
            cnt++;
    }
    if( cnt <= k)res++;
    
}
cout<<res<<endl;

 // --------------------------------------------------------------------------------------------------------------------------------------------------


  #ifdef ONLINEJUDGE
  fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif


return 0;
}


/*
1 001
2 010
3 011

4 100
*/