#include <iostream>
#include <stdio.h>

#define LOWER_LIMIT 0
#define UPPER_LIMIT 50000

using namespace std;

int main() {
  double cel, fahr;
  int limit_low = -1;
  int limit_high = -1;
  int step = -1;

  while (limit_low < (int)LOWER_LIMIT) {
    cout << "Please give a lower limit, limit >= 0: ";
    cin >> limit_low;
  }

  while (limit_high <= limit_low || limit_high > (int)UPPER_LIMIT) {
    cout << "Please give an upper limit, " << limit_low
	 << " < limit < " << (int)UPPER_LIMIT << ": ";
    cin >> limit_high;
  }

  while ((step >= limit_high - limit_low) || (step <= 0)){
    cout << "Please give a step size, 0 < step < "
	 << limit_high - limit_low << ": ";
    cin >> step;
  }

  cel = limit_low;
  cout << "\nCelsius\t\tFahrenheit";
  cout << "\n-------\t\t----------\n";
  
  while (cel < limit_high){
      fahr = (9.0 * cel) / 5.0 + 32.0;
      cout << cel << "\t\t" << fahr << "\n";
      cel += step;
  }

  cout << '\n';

  return 0;
}
