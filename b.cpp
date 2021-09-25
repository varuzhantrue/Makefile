#include "b.h"
void mtrxPrint (const int row,const int col, int mtrx[][5])
{
  for(int i = 0; i < row; ++i)
  {
    for(int j = 0; j < col; ++j)
    {
      std::cout<< mtrx[i][j]<< " " ;
    }
    std::cout<< "\n";
  }
}
