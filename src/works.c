#include <stdio.h>

int n;
int k;
int A[100000];

int p(int m){
  int w = 0;
  int v = 0;
  for(i = 0; i < n; i++){
      if(m < A[i])
          v = k + 1;
      if( m >= w + A[i])
          w += A[i];
      else{
          v += 1;
          w = A[i];
      }
        
  }
  return v < k;
}

int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  lb = 0;
  ub = 1000000000;
  while( ub - lb > 1){
      int m = (ub + lb) / 2;
      if(p(m)) ub = m;
      else lb = m;
  }
  printf("%d\n",ub);

  return 0;
}
