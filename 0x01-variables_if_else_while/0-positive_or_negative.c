#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)/*checking pos or neg number*/
{
srand(time(NULL));
int n = rand();/*creating var n giving rand val*/
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
}
