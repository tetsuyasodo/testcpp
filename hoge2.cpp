#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;
int main ()
{
//    loop:
int num = 10;
for (int j = 1; j <= 9; j=j+1) {
    num = pow(10,j);

    srand(time(NULL) );
    int p=0, n;
    double x, y;
    cout << "n=" ;
    //cin >> n ;
    n = num; cout << n;
    for (int i = 0; i <= n; i=i+1) {
        x=(rand () % 100000000)/1.0e8;
        y=(rand () % 100000000)/1.0e8;
        if ( x*x+y*y < 1.0) {
            p = p + 1;
        }
    }
    cout << " pi=" << 4.0*float(p)/float(n) << endl;
    cout << " " << endl ;
    //if ( n != 0 ) {
 //       goto loop;
    //}
}
    return 0;
}
