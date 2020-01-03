#include <iostream>
using namespace std;

//Write function findDistance() here
double findDistance(double u, double a, double t)
{
    return (u*t) + (0.5*(a*t*t));
}

int main()
{
  //Calling findDistance() using test cases
    cout << findDistance(1.5, -1, 2);
    return 0;
}

