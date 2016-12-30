#include <iostream>
#include <string>

using namespace std;

int main()
{
    string txt,txt2;
    char c;
    int position;

    cout << "Enter text: ";
    cin >> txt;
    cout << "Enter symbol: ";
    cin >> c;

    position = txt.find_first_of(c);
    txt2 = txt.substr(position,(txt.length() - position));
    cout << "The symbol '" << c << "' is on position " << position + 1 << ". After it is: '" << txt2 << "'." << endl;

return 0;
}
