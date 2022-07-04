#include <iostream>
#include <string>

using namespace std;

void solution() {
  string word;
  cin >> word;
  if (word.length() <= 10) {
    cout << word << '\n';
    return;
  } else {
    cout << word[0] << word.length() - 2 << word[word.length()-1] << '\n';
  }
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int T;
  cin >> T;
  while (T--) {
    solution();
  }
  return 0;
}
