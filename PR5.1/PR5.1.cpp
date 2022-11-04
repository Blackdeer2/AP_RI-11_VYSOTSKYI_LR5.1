#include <iostream>
#include <cmath>

using namespace std;

double k(double x, double y);
int main()
{
   double p, q;
   cout << "p = "; cin >> p;
   cout << "q = "; cin >> q;

   double c = k(1. + p * q, q * q) + k(p, p * p) * k(p, p * p) / (1. + k(p * q + q * q, p));
   cout << "c = " << c;


   return 0;
}
double k(double x, double y) {
   return x / (1. + pow(sin(y), 2)) + y / (1. + pow(x, 2));
}