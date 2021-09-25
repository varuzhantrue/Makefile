#include "a.h"
#include "b.h"

const int height = 3;
const int length = 5;

int main()
{
  int mtrx[height][length] = {
    {1, 2, 3, 4, 5},
    {-1, 0, -3, -4, -5},
    {0, 0, 6, 4, 7}
  };

  mtrxPrint(height, length, mtrx);
  printSum(height, length, mtrx);
}
