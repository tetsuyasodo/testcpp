#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std ;
int main ()
{
  int i;
  double pi=3.14159265358;
  double hoge=1.234;
  double sum=0;
  for (i=0; i<=1000000; i=i+1) {
    sum = sum + 4*pow(-1,i)/(2*i+1);
    if (i % 10000==0) {
      cout << " i=" << i << " sum=" << setprecision(12) << sum << " r=" << (pi-sum) << endl;
    }
  }
  return 0;
}
