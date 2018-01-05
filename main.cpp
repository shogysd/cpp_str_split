#include <bits/stdc++.h>

using namespace std;

void str_split(string, string, vector<string>&);
void str_split(string, string, int, vector<string>&);

int main() {
  int i;
  vector<string> hoge;

  // 回数制限なし
  cout << "回数制限なし" << endl;
  hoge.clear();
  str_split("qw!er!!ty!!!ui!!!!op", "!!", hoge);

  for (i = 0; i < hoge.size(); i += 1) {
    cout << hoge[i] << endl;
  }

  // 回数制限あり
  cout << "回数制限あり（2回だけ分割）" << endl;
  hoge.clear();
  str_split("qw!er!!ty!!!ui!!!!op", "!!", 2, hoge);

  for (i = 0; i < hoge.size(); i += 1) {
    cout << hoge[i] << endl;
  }

  return 0;
}
