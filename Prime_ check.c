#include <stdio.h>
int main() {
  int n, i, flag=0;
  printf("Number dalo: ");
  scanf("%d", &n);
  for(i=2; i<=n/2; i++) {
    if(n%i==0) { flag=1; break; }
  }
  if(flag==0) printf("Prime hai");
  else printf("Prime nahi hai");
  return 0;
}
