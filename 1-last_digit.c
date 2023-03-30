#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n, res;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	res = n % 10;
    if (res < 6) {
        printf("Last digit of %i is %i and is less than 6 and not 0\n", n, res);
    } else if (res > 5) {
        printf("Last digit of %i is %i and is greater than 5\n", n, res);
    } else {
        printf("Last digit of %i is %i and is 0\n", n, res);
    }
	return (0);
}
