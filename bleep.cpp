#include <iostream>
#include <string>
#include <vector>
#include "functions.hpp"
using namespace std;

int main() {
  string inputText = "I hate to eat broccoli. broccoli is the worst. I don't know why people eat broccoli.";
  string censoredWord = "broccoli";
  censorWordFromText(inputText, censoredWord);
  cout << inputText;
}