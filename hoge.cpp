#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
using namespace std ;
int main ()
{
  int i;
  ofstream fout ;
  fout.open ("testfile.txt") ;
  double pi=3.14159265358;
  double sum=0;
  for (i=0; i<=1000000; i=i+1) {
    sum = sum + 4*pow(-1,i)/(2*i+1);
    if (i % 10000==0) {
      fout << " i=" << i << " sum=" << setprecision(12) << sum << " r=" << (pi-sum) << endl;
    }
  }
  fout.close();
  return 0;
}
