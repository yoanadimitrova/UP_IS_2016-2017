#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    // Да се състави програма на C++, чрез която от клавиатурата се въвеждат 30-50 знака общо. Като резултат на екрана
    // да се извежда броя знаци, 1-вия, средния и последния знак от въведения текст.

    char maxLenght[80]; //Деклариране не променливите
    int length, text;

    cout << "Write your text: ";
    gets(maxLenght); //въвежда низа
    length = strlen(maxLenght); //определя дължината на въведения текст
    text = length / 2; //номерът на средния знак

    cout << "The length of the written text is: " << length << endl;

    cout << "The first symbol of the text is: " << maxLenght[0] << endl;

    cout << "The symbol in the middle of the text is: " << maxLenght[text] << endl;

    cout << "The last symbol of the text is: " << maxLenght[length-1] << endl;

    return 0;
}
