#include <stdio.h>
int main(){
  int fn, fn_last;
  printf("This is the printfs program\n");

  printf("\nNow we will print some fibonacci numbers\n");

  fn_last = 0;
  fn = 1;
  printf("%d ",fn);
  while(fn < 2000) {
    int fn_new = fn_last + fn;
    fn_last = fn;
    fn = fn_new;
    printf("%d ",fn);
  }

  printf("\nOK, it wasn't just printing, we did some calculating\n");
}

    
