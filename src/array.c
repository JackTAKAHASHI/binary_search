#include <stdio.h>

int n;
int k;
int A[100000];


int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  lb = 0;
  ub = 0;
  
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }

  return 0;
}
