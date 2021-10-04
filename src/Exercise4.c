/*
4.	Write a program to display a hollow triangle by asterisks (*) on the screen.
The input will be the height of the triangle and the thickness of the borders.
Ex:
 ____________________________________
| Input: 7 2                         |
| Output:                            |
|             *                      |
|           * * *                    |
|         * *   * *                  |
|       * *       * *                |
|     * *           * *              |
|   * * * * * * * * * * *            |
| * * * * * * * * * * * * *          |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int height = atoi(argv[1]);
	int border = atoi(argv[2]);
	//Your codes here
	int i, j, k;
	for (i=1; i<=height; i++) {
		if ((i>=1 && i<=border) || (i>=height-border+1 && i<=height)) {
			for (j=1; j<=height-i; j++)
				printf("  ");
			for (k=1; k<=2*i-1; k++)
				printf("* ");
			printf("\n");
		} else {
			for (j=1; j<=height-i; j++)
				printf("  ");
			for (k=1; k<=border; k++)
				printf("* ");
			for (int l=1; l<=2*(i-border)-1; l++)
				printf("  ");
			for (k=1; k<=border; k++)
				printf("* ");
			printf("\n");
		}
	}
	return 0;
}