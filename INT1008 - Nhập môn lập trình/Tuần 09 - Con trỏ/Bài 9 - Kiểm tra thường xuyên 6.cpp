/*
Hãy viết hàm chuẩn hoá một xâu ký tự bằng cách
- Loại bỏ các ký tự trắng thừa (đầu xâu, cuối xâu,
các ký tự trắng liên tiếp chỉ giữ lại 01 ký tự trắng,
kí tự trắng trước dấu chấm/dấu phẩy)
- Viết hoa đầu câu, viết thường giữa câu (các câu
được ngăn cách bởi dấu chấm)

string get_proper_paragraph(string paragraph);
*/

#include <iostream>
using namespace std;

bool cp(char c) {
  return c == '.' || c == ',';
}

char to_lower(char c) {
  if ('A' <= c && c <= 'Z') {
    return c + 32;
  }
  return c;
}

char to_upper(char c) {
  if ('a' <= c && c <= 'z') {
    return c - 32;
  }
  return c;
}

char out_char(char c, bool upper) {
  return upper? to_upper(c) : to_lower(c);
}

string get_proper_paragraph(string paragraph) {
  string ans;
  char prev = ' ';
  bool space = false;
  bool upper = true;
  for (char c : paragraph) {
    if (prev == c && c == ' ') {
      continue;
    } else if (cp(prev)) {
      if (c == ' ') {
        continue;
      } else {
        ans.push_back(' ');
        ans.push_back(out_char(c, upper));
        upper = false;
      }
    } else if (cp(c)) {
      ans.push_back(c);
      upper = c == '.';
      space = false;
    } else if (c == ' ') {
      space = true;
    } else {
      if (space) {
        ans.push_back(' ');
      }
      ans.push_back(out_char(c, upper));
      upper = false;
      space = false;
    }
    prev = ans.back();
  }
  return ans;
}
