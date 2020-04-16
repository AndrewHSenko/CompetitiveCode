/* ACM ICPC Workshop 1 Problem 2 4/12/20 */
/* https://open.kattis.com/contests/s5je2r/problems/r2 */
/* Prints the second number used to calculate a mean when given the mean and the first number */

#include <iostream>
using namespace std;

int main() {
  int first_num, mean;
  cin >> first_num >> mean;
  cout << mean * 2 - first_num << endl;
  return 0;
}
