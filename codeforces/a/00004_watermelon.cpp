#include <iostream>
using namespace std;
int main(void) {
  int N;
  cin >> N;
  if (N % 2 == 0 && N != 2) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}