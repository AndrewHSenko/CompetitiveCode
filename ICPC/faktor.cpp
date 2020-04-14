/* ACM ICPC Workshop 1 Problem 1 4/11/20 */
/* https://open.kattis.com/contests/s5je2r/problems/faktor */
/* Determines how many scientists need to cite an article to reach an impact factor */

#include <iostream>
using namespace std;

int main() {
  int num_articles = 0;
  int impact_factor = 0;
  cin >> num_articles >> impact_factor;
  impact_factor--;
  cout << (num_articles * impact_factor + 1) << endl;
  return 0;
}
