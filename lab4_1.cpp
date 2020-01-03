#include <iostream>
#include <cmath>
using namespace std;

double paraEuler(int x)
    {
        return (3*pow(x,3)) + (2*2.718281) + (pow(2,((2*x)+1))) + sqrt(pow(x,2)+1);
    }

int main()
    {
        int x;
        cout << "Enter x = ";
        cin >> x;
        cout << "Result y = " << paraEuler(x);
        return 0;
    }

