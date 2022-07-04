#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  int question = 0;
  while (n--) {
    int Petya, Vasya, Tonya;
    cin >> Petya >> Vasya >> Tonya;
    int people_that_solve = Petya + Vasya + Tonya;
    if (people_that_solve >= 2) {
      question++;
    }
  }
  cout << question << '\n';
  return 0;
}
