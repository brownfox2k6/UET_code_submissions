#include <string>
using namespace std;

string pigLatin(string word) {
  const string s = "aeiou";
  if (s.find(word[0]) == string::npos) {
    return word.substr(1) + word[0] + "ay";
  } return word + "way";
}