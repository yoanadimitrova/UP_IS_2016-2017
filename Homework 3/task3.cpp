#include <iostream>
#include <string>

using namespace std;

int main()
{
    string txt;
    char c;
    int position;
    c = 'T';

    cout << "Enter Text: ";
    cin >> txt;

    position = txt.find_first_of(c);
    cout << "'T' is found on position:" << position + 1 << endl;

return 0;
}
