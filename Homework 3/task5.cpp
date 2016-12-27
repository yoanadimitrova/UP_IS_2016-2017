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
	solve();

	return 0;
}
