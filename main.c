#include <stdio.h>

int main() {

	int T, n, i, j, x;
	int sum,tmp;
	// Read of number of test cases
	scanf("%d", &T);

	for (i = 0; i < T; i++)
	{
	    // Get number of elements
	    scanf("%d",&n);

	    sum = 0; j = 0;
	    // Read all numbers and create sum
	    while(j < n)
	    {
	        scanf("%d",&tmp);
	        sum += tmp;
	        j++;
	    }
	    // printf("FIRST SUM:%d ", sum);

	    // Checker number
	    x = 0;

	    // Do while sum isn't even
	    while(1)
	    {
	       // Add x++
	       sum += 1;
	       x++;

	       // Check even or odd
	       if (sum % 2 == 0) {
	           // printf("SUM:%d ", sum);
	           break;
	       }
	    }
	    // printf("X: %d\n",x);
	    printf("%d\n",x);
	}

	return 0;
}

// Code by Michal Slovik
