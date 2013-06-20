/*
 */
#include "gtest/include/gtest/gtest.h"
#include "systemsolver.h"

TEST(Solver, BasicDiagonalSparse) {
  SystemSolver solver;
  vector<double> b;
  int size=3;  
  for(int i=0;i<size;i++)
  {
	  solver(i,i)=i+1;
	  b.push_back(1);
  }
  vector<double> sol=solver.SolveSparse(b);
  for(int i=0;i<size;i++)
	  EXPECT_EQ(sol[i],1./(i+1));
}
TEST(Solver, BasicDiagonalDense) {
  SystemSolver solver;
  vector<double> b;
  int size=3;  
  for(int i=0;i<size;i++)
  {
	  solver(i,i)=i+1;
	  b.push_back(1);
  }
  vector<double> sol=solver.SolveDense(b);
  for(int i=0;i<size;i++)
	  EXPECT_EQ(sol[i],1./(i+1));
}




