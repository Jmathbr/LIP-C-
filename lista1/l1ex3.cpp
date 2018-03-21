#include <iostream>
using namespace std;
int main()
{
 bool a = 1, b = 0;
 int c = 2, d = 4.2;
 float e = 2.1, f = 7.1;
 bool r1, r2;
 int r3, r4, r5;
 r1 = a && b || e > f + !b;
 r2 = f == a || (int)d / (2*2);
 r3 = ((f == a == c && d != (int)d) + c % d);
 r4 = c++ + ++e;
 r5 = (a || b || c || d || f) - a +  b * c % d;
 cout << r1 << " " << r2 << " " << r3 << " " << r4 << " " << r5 <<
endl;
 return 0;
}