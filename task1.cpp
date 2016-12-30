#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    char maxLenght[80];
    int length, text;

    cout << "Write your text: ";
    gets(maxLenght);
    length = strlen(maxLenght);
    text = length / 2;

    cout << "The length of the written text is: " << length << endl;

    cout << "The first symbol of the text is: " << maxLenght[0] << endl;

    cout << "The symbol in the middle of the text is: " << maxLenght[text] << endl;

    cout << "The last symbol of the text is: " << maxLenght[length-1] << endl;

    return 0;
}
