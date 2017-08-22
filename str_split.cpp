#include <bits/stdc++.h>

using namespace std;


// 回数制限なし
void str_split(string str, string sub_str,  vector<string> &splited_strings){

  int ss_len, ss_point;

  ss_len = sub_str.size();

  // 部分文字列がヒットし無くなるまで無限ループ
  while (true) {

    ss_point = str.find(sub_str);

    // 部分文字列が見つからなかった場合
    if (ss_point == -1){
      break;
    }

    // 部分文字列が見つかった場合
    else{
      splited_strings.push_back(str.substr(0, ss_point));
      str = str.substr(ss_point+ss_len, str.size()-ss_point-1);
    }
  }

  // 分割後の最後 or 分割文字列が見つからなかった時の処理
  splited_strings.push_back(str.substr(0, str.size()));

  return;
}


// 回数制限あり
void str_split(string str, string sub_str, int max,  vector<string> &splited_strings){

  int counter=0, ss_len, ss_point;

  ss_len = sub_str.size();

  // 部分文字列がヒットし無くなるまで無限ループ
  while (counter < max) {

    ss_point = str.find(sub_str);

    // 部分文字列が見つからなかった場合
    if (ss_point == -1){
      break;
    }

    // 部分文字列が見つかった場合
    else{
      splited_strings.push_back(str.substr(0, ss_point));
      str = str.substr(ss_point+ss_len, str.size()-ss_point-1);
    }
    counter +=1;
  }

  // 分割後の最後 or 分割文字列が見つからなかった時の処理
  splited_strings.push_back(str.substr(0, str.size()));

  return;
}
