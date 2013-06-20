#include "systemsolver.h"

int main(int arg, char** argv)
{
  SystemSolver solver;
  vector<double> b;
  int size=10;  
  for(int i=0;i<size;i++)
  {
	  solver(i,i)=i+1;
	  b.push_back(1);
  }
  vector<double> sol=solver.SolveSparse(b);
  cout<<"*************** SPARSE *************** "<<endl;
  for(int i=0;i<size;i++)
	  cout<<i<<": "<<sol[i]<<endl;
 vector<double> sol2=solver.SolveDense(b);
   cout<<"*************** DENSE *************** "<<endl;
  for(int i=0;i<size;i++)
	  cout<<i<<": "<<sol2[i]<<endl;
}
