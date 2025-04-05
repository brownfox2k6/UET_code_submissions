#include <stack>

bool isValid(string s) {
  stack<char> st;
  for (char c : s) {
    if (c == '{' || c == '(' || c == '[') {
      st.emplace(c);
      continue;
    }
    if (c == '}') {
      if (st.top() != '{') {
        return false;
      }
    } else if (c == ')') {
      if (st.top() != '(') {
        return false;
      }
    } else if (c == ']') {
      if (st.top() != '[') {
        return false;
      }
    }
    st.pop();
  }
  return st.empty();
}