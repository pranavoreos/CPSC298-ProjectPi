//
//  main.cpp
//  projectPI
//
//  Created by Pranav Saravanan.
//

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
  // Ask the user for the value of k
  int k;
  cout << "Enter the value of k: ";
  cin >> k;

  // Calculate the value of pi using the Leibniz formula
  double pi = 0;
  for (int i = 0; i < k; i++)
  {
    pi += pow(-1, i) / (2 * i + 1);
  }
  pi = pi * 4;

  // Print the result
    
    for(int n = 0; ++n; )
  std::cout << std::setprecision(15) << std::fixed;
  cout << "The approximated value of pi is: " << pi << "; n: " << k <<endl;
  cout << "The actual value of pi is: 3.141592653589793" << endl;
  std::cout << "Decimal digits of precision: 15" << std::endl;
  std::cout << "Number of base 2 mantissa digits of double precision floating point value: 53" << std::endl;
  std::cout << "Next representable number from 3.141592653589793: " << std::nextafter(3.141592653589793, 3.14) << std::endl;
    

  return 0;
}

