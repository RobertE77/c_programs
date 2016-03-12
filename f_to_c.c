#include <stdio.h>

int main()

{
  int a;
  a = 0;
  while (a <= 212)
  {
     printf("%d degrees F = %d degrees C\n",
	a, (a - 32) * 5 / 9);
     a = a + 1;
  }
  return 0;
}
