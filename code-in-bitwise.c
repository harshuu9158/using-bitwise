#include <stdio.h>
void showbits(unsigned char n ){
    int i;
    for( i=7 ; i>=0 ; i--)
    if (n & (1<<i))
    printf("1");
    
    else
    printf("0");
}

int main()
{
   unsigned char num, k;
   printf("ENTER YOUR NUMBER IS:  ");
   scanf("%hhu", &num);
   
  for(int i=0 ; i<=num ; i++){
      printf("\nBinary representation of %d is ", i);
      showbits(i);
       
      k = ~i;
      printf("\nOne's complement of %d is ", i);
      showbits(k);
  }
  
  printf("\n");

    return 0;
}
