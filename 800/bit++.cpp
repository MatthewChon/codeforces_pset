#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int statement;
  cin >> statement;

  int value = 0;
  while (statement--) {
    string rule;
    cin >> rule;
    for (int i = 0; i < 3; i++) {
      if (rule[i] == 'X') continue;
      if (rule[i] == '+') value++;
      else  value--;
      break;
    }
  }
  cout << value << '\n';
  return 0;
}
