#include <iostream>
#include <cmath>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int height, width;
  cin >> height >> width;

  int area = height * width;
  cout << floor(area/2) << '\n';
  return 0;
}
