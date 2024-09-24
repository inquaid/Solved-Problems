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

int t;
cin>>t;
while(t--){
    int n;
    cin>>n;

    int lowestBit=0, i;
    for ( i = 31; i >= 0; --i)
    {
        if(check_kth_bit(n, i)) break;
    }
    // cout<< i << " "; 

    cout<< (1<<i) - 1<<endl;
}



  #ifdef ONLINEJUDGE
  fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); // this line gives your code runtime
  #endif


return 0;
}


/*
2  00010
5  00101
17 10001

*/