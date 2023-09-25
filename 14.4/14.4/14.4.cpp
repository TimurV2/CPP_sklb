#include <iostream>
#include <string>

using namespace std;

int main()
{
    string test_text("The quick brown fox jumps over the lazy dog");
    cout << test_text << "\n";
    cout << test_text.length() << "\n";
    cout << "first symbol -> " << test_text[0] << "\nlast symbol -> " << test_text[test_text.length() - 1];
}

