#include <iostream>
#include <cmath>

using namespace std;


int main()
{
	int intnumberFirst = 0;
	int intnumberSecond = 0;
	int intnumberThird = 0;
	int intSetFirst = 0;
	int intSetSecond = 0;
	int intSetThird = 0;

	cout << "Enter three numbers in any order" << endl;
	cin >> intnumberFirst >> intnumberSecond >> intnumberThird;

	if ((intnumberFirst < intnumberSecond) && (intnumberSecond < intnumberThird))
	{
		cout << intnumberThird << " | " << intnumberSecond << " | " << intnumberFirst << endl;
	}
	else if ((intnumberFirst < intnumberSecond) && (intnumberSecond > intnumberThird))
	{
		cout << intnumberSecond << " | " << intnumberThird << " | " << intnumberFirst << endl;
	}
	else if ((intnumberFirst > intnumberSecond) && (intnumberSecond < intnumberThird))
	{
		cout << intnumberFirst << " | " << intnumberSecond << " | " << intnumberThird << endl;
	}
	else if ((intnumberFirst > intnumberSecond) && (intnumberSecond > intnumberThird))
	{
		cout << intnumberFirst << " | " << intnumberSecond << " | " << intnumberThird << endl;
	}
	else if ((intnumberFirst < intnumberSecond) && (intnumberSecond < intnumberThird))
	{
		cout << intnumberThird << " | " << intnumberSecond << " | " << intnumberFirst << endl;
	}
	else if ((intnumberFirst < intnumberSecond) && (intnumberSecond < intnumberThird))
	{
		cout << intnumberThird << " | " << intnumberSecond << " | " << intnumberFirst << endl;
	}
	else if ((intnumberFirst == intnumberSecond) && (intnumberSecond == intnumberThird))
	{
		cout << intnumberFirst << " | " << intnumberSecond << " | " << intnumberThird << endl;
	}


	//cout << intnumberFirst << intnumberSecond << intnumberThird;
	//cout << "Your numbers in descending order are " << intSetFirst << endl;
	cin >> intnumberFirst;
	return 0;
}