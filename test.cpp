#include <iostream>
using namespace std;
int main()
{
	int x, y, z;
	x = 10;
	y = 6;
	z = x/y;
	cout << z << " ";
	if (z>0)
	{
		z = x%y;
		cout << z;
	}
}
