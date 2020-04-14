/* ACM ICPC Workshop 1 Problem 3 4/12/20 */
/* https://open.kattis.com/contests/s5je2r/problems/acm */
/* A simple version of a typical competitive coding scoring algorithm */

#include <iostream>
using namespace std;

int main() {
  int total_time = 0, time = 0, total_correct = 0;
  string problem, prev_problems, correct;

  cin >> time;
  while (time != -1)
  {
    cin >> problem >> correct;
    cin.ignore(10000, '\n');
    if (correct.compare("right") == 0)
    {
	total_time += time;
	total_correct++;
	for (int i = 0; i < prev_problems.length(); i++)
	{
	    if (prev_problems.substr(i, 1).compare(problem) == 0)
		total_time += 20;
	}
	prev_problems += problem;
    }
    else
    {
	prev_problems += problem;
    }
    cin >> time;
  }
  cout << total_correct << " " << total_time << endl;
  return 0;
}
