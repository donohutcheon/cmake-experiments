#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double mysqrt (double inputValue)
{
  double outputValue = sqrt(inputValue);
  fprintf(stdout, "libmysqrt: The square root of %g is %g\n",
          inputValue, outputValue);
  return outputValue;
}
