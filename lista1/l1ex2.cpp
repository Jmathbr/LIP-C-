#include <iostream>
#include <cmath>
using namespace std;
int main()
{
 int x = 4, y = 8;
 double d = 1.5;
 float e = 5.0;
 int r1, r2;
 double r3, r4;
 r1 = ++x % y;
 r2 = d * e + x / y--;
 r3 = pow(e, 2.0) / 3;
 r4 = abs(d-e) - ceil(4 + r1 % (int)r3);
 cout << "Saida do programa: " << endl;
 cout << r1 << " " << r2 << " " << r3 << " " << r4 << endl;
 return 0;
}