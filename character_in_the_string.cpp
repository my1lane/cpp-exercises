#include <iostream>
#include <string>

using namespace std;

int count_character(string& str, char ch) {
    int count = 0;
    for (char c : str) {
        if (c == ch) {
            count += 1;
        }
    }
    return count;
}

int main() {
    string str = "Hello, my name is Mylane!";
    char ch = 'l';
    int result = count_character(str, ch);
    cout << result << endl;
    return 0;
}
