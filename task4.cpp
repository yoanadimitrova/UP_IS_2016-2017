#include <iostream>

using namespace std;
void solve()
{
    char figureSize;
    cout << "Write the last letter of the figure: ";
    cin >> figureSize;
    int i = 0;

    for(char currentSymbol = 'A'; currentSymbol <= figureSize; currentSymbol++)
    {
        cout << currentSymbol;

        for(int j = 0; j < i; j++)
        {
            cout << "*";
        }
        if (i > 0)
		{
			cout << currentSymbol;
		}
		cout << endl;
		i += (i == 0 ? 1 : 2);
    }
    i -= 2;
    for (char currentSymbol = figureSize - 1; currentSymbol >= 'A'; currentSymbol--)
        {
            cout << currentSymbol;

    		i -= 2;

            for (int j = 0; j < i; ++j)
                {
                    cout << "*";
                }

            if (i > 0)
                {
                    cout << currentSymbol;
                }
            cout << endl;
        }
}
int main()
{
    solve();

    return 0;
}
