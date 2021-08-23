/*
文字列をswitch文として利用できない
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  string op;
  int ans;
  cin >> a >> op >> b;
  if (op == "+") {
    ans = a + b;
  }
  else if (op == "-") {
    ans = a - b;
  }
  else if (op == "*") {
    ans = a * b;
  }
  else if (op == "/") {
    if (b == 0) {
      cout << "error" << endl;
      return 0;
    }
    ans = a / b;
  }
  else if (op == "?" || op == "=" || op == "!") {
    cout << "error" << endl;
    return 0;
  }
  cout << ans << endl;
}
