#include <iostream>

using namespace std;

void solve()
{
	char lastSymbol;
	cout << "Write letter: ";
	cin >> lastSymbol;

	for (char firstSymbol = 'A'; firstSymbol <= lastSymbol; firstSymbol++)
	{
		for (char c = firstSymbol; c >= 'A'; c--)
		{
			cout << c;
		}
		cout << endl;
	}
}

int main()
{
    // Да се състави програма на C++, чрез която се въвежда главна латинска буква. Да се извежда на всеки ред от екрана
    // последователност от букви, като всеки отделен ред се премества с 1 позиция вдясно и всеки ред започва от следващата
    // буква от азбуката до А. На последния ред се отпечатват всички букви от въведената до А в низходяща последователност.

	solve();

	return 0;
}
