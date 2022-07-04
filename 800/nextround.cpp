#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int participant, kth_place;
  cin >> participant >> kth_place;
  
  int scores[participant];
  bool all_neg = true;
  for (int i = 0; i < participant; i++) {
    cin >> scores[i];
    if (scores[i] > 0) {
      all_neg = false;
    }
  }
  if (all_neg) {
    cout << "0\n";
    return 0;
  }
  int kth_score = scores[kth_place-1]; // since 1st place = 0-position
  int count = 0;
  bool zero = false;
  
  while (kth_place--) {
    if (scores[count] <= 0) {
      zero = true;
      break;
    }
    count++;
  }
  if (!zero) {
    while (count < participant && kth_score == scores[count]) {
      count++;
    }
  }
  cout << count << '\n';
  return 0;
}
