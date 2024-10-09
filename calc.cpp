#include <iostream>
#include <cmath>
using namespace std; 
int main() { 
setlocale(0,".1251"); 
double a, b, c; 
cout << "Введiть два числа (через пробiл)\n"; 
cin >> a >> b;
c = pow(a,b);
cout << "Сума цих чисел - " << a + b << endl;
cout << "Різниця цих чисел - " << a – b;
cout << "Піднесення a до степеня b - " << c;
return 0; 
}