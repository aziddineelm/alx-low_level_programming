#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	  int n;
	    srand(time(0));
	      n = rand();
	        int last_digit = n % 10;
		  printf("Last digit of %d is ", n);
		    if (last_digit > 5) {
			        printf("%d and is greater than 5\n", last_digit);
				  } else if (last_digit == 0) {
					      printf("0 and is 0\n");
					        } else {
							    printf("%d and is less than 6 and not 0\n", last_digit);
							      }
		      return 0;
}
