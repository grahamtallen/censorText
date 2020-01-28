#include <string>
#include <iostream>
#include <vector>
#include "functions.hpp"
using namespace std;

void censorWordFromText(string& inputText, string censoredWord) {
  vector<size_t> positions = findOccurancesOfWord(inputText, censoredWord);
  int censoredWordLength = censoredWord.size();
  string censoredVersionOfWord(censoredWordLength, '*');
  for (int i = 0; i < positions.size(); i++) {
      size_t pos = positions[i];
      inputText.replace(pos, censoredWord.size(), censoredVersionOfWord);
  }
}

vector<size_t> findOccurancesOfWord(string inputText, string censoredWord) {
    size_t pos = inputText.find(censoredWord);
    vector<size_t> positions;
    while (pos != string::npos) {
        positions.push_back(pos);

        pos = inputText.find(censoredWord, pos + censoredWord.size());

    }    
    return positions;
}



