#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int weight;
  cin >> weight;

  for (int first_cut = 2; first_cut < weight; first_cut += 2) {
    int remaining_cut = weight - first_cut;
    if (remaining_cut % 2 == 0) {
      cout << "YES\n";
      return 0;
    }
  }
  cout << "NO\n";
  return 0;
}
