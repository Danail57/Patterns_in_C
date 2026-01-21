// Diamond Pattern
#include <iostream>
using namespace std;

int main()
{
	int rows;
	cin >> rows;

	for (int i = 0; i < 2 * rows - 1; i++)
	{
		int comparator;
		if (i < rows)
			comparator = 2 * (rows - i) - 1;
		else
			comparator = 2 * (i - rows + 1) + 1;

		for (int j = 0; j < comparator; j++)
			cout << " ";

		for (int k = 0; k < 2 * rows - comparator; k++)
			cout << "* ";
		cout << endl;
	}
	return 0;
}
