#include <iostream>
using namespace std;

int main()
{
	cout << "1's bit count in 9 : " << __builtin_popcount(9) << endl;
	cout << "1's bit count in 9 : " << __builtin_popcount(20);
	return 0;
}
