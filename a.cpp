#include "a.h"

void printSum (const int row,const int col, int mtrx[][5])//
{
  int sum = 0;

  for(int i = 0; i < row; ++i)
  {
    for(int j = 0; j < col; ++j)
    {
       //sum += mtrx[i][j];
      sum += mtrx[i][j];
    }
  }

  std::cout << "*** " << sum << " ***" << "\n";
}
