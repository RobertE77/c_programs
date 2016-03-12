#include <stdio.h>

int main()

{
 int b;
 printf("Enter a value:");
 scanf("%d", &b);
 if(b == 0)
   printf("The value is zero\n");
 else if(b > 0)
   printf("The value is positive\n");
 else if(b < 0)
   printf("The value is negative\n");
 return 0;
}
