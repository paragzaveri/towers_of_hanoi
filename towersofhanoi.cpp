#include <cstdlib>
#include <iostream>

using namespace std;

void move_disks(size_t disks, char a, char b, char c);

int main(void)
{
	char a = 'a', b = 'b', c = 'c';
	size_t number_disks = 0;
	cout << "Enter number of disks: " << flush;
	cin >> number_disks;
	cout << "Moving disks...\n" << endl;
	move_disks(number_disks, a, c, b);
	return EXIT_SUCCESS;
}

void move_disks(size_t disks, char a, char b, char c)
{
	if (disks == 0)
	{
		return;
	}
	else
	{
		move_disks(disks-1, a, c, b);
		cout << "Moving disk " << disks << " from peg " << a 
		<< " to peg " << b << "." << endl;
		move_disks(disks-1, c, b, a);
	}
}
