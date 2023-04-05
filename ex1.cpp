#include <iostream>
#include <string>

using namespace std;

int main() {
    string some_words, reverse_some_words;
    getline(cin, some_words);
    
    for (int n = some_words.size() - 1; n >= 0; n--) {
        reverse_some_words.push_back(some_words[n]);
    }
    cout << reverse_some_words << endl;
}
