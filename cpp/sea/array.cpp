#include <iostream>

int main()
{
	int A[7] = {1, 7, 1234, -2, 4, 5, 2};

	int chlen;

	cin >> chlen;
	int counter = 0;

	while (counter < 7)
	{
		if (A[counter] == chlen)
		{
			cout << counter;
		}
		counter++;
	}
	return 0;
}
