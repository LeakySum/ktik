#include <iostream>
#include <math.h>

using namespace std;
// Эта программа решает систему уравнений y=(5+x^2)/sqrt(x-2) при x>=2 y=abs(5-x^2)/2*(x-2) если x<2
int main() {
    double x,y;
    cout << "x=";
    cin >> x;

    if (x>=2)
        y=(5+pow(x,2))/sqrt(x-2);
    else
        y=fabs(10-pow(x,2))/2*(x-2);

    cout << "y=" << y;
    return 0;
}
