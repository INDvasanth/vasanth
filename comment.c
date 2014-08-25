/* chapter 3 adds two integer values and displays results
* Vasanth, Aug 2014 */

#include <stdio.h>

int main (void)
{
 /* Declare variables */
 int value1;
 int value2;
 int sum;

 /* Assign values and calculating their sum */
 value1 = 50;
 value2 = 25;
 sum = value1 + value2;
 
 /* Display the result */
 printf ("The sume of %i and %i is %i\n", value1, value2, sum);

 return 0;
}