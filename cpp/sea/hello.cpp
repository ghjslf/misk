#include <iostream>
using namespace std;

int add (int first_number, int second_number)
{
	return first_number + second_number;
}

void print_hello_world (int n)
{
	int counter;
	counter = 0;

	while (counter < n)
	{
		cout << counter + 1 << ": " << "Hello world\n";
		counter = counter + 1;
	}
}

int  main()
{
	int a;
	int b;
	cout << "Skolko molchat doma?\n";
	cin >> a;
	cout << "+\n";
	cin >> b;

	cout << add(a, b) << '\n';

	int n;
	cout << "Skolko litrov PIVA?\n";
	cin >> n;
	print_hello_world(n);

	return 0;
}


