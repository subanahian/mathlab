#include<bits/stdc++.h>
using namespace std;
// Define your function here 3x-cos(x)-1
double equation(double x) {
 return 3*x-cos(x)-1;
}
// Define the derivative of your function here
double derivative(double x) {
 return 3+sin(x);
}
double newtonRaphson(double x0, double epsilon, int maxIterations) {
 double x = x0;
 int iterations = 0;
 while (fabs(equation(x)) > epsilon ) {
 cout<<"x = "<<x;
 x = x - (equation(x) / derivative(x));
 cout<< " f(x) = "<<equation(x)<<" f'(x) = "<<derivative(x)<<" Xn = "<<x<<endl;
 iterations++;
 }
 return x;
}
int main() {
 double initialGuess = 0;
 double epsilon = 0.001;
 int maxIterations = 100;
 double root = newtonRaphson(initialGuess, epsilon, maxIterations);
 cout << "Approximate root: " << root << endl;
 return 0;
}