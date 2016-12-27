#include <iostream>

using namespace std;
void solve()
{
    char figureSize;
    cout << "Write the last letter of the figure: ";
    cin >> figureSize;
    int i = 0;

    for(char currentChar = 'A'; currentChar <= figureSize; currentChar++)
    {
        cout << currentChar;

        for(int j = 0; j < i; j++)
        {
            cout << "*";
        }
        if (i > 0)
		{
			cout << currentChar;
		}
		cout << endl;
		i += (i == 0 ? 1 : 2);
    }
    i -= 2;
    for (char currentChar = figureSize - 1; currentChar >= 'A'; currentChar--)
        {
            cout << currentChar;

    		i -= 2;

            for (int j = 0; j < i; ++j)
                {
                    cout << "*";
                }

            if (i > 0)
                {
                    cout << currentChar;
                }
            cout << endl;
        }
}
int main()
{
    solve();

    return 0;
}
