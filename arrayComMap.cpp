#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cstdlib>
#include <cstdio>
#include <map>

using namespace std;

void compressArray();

int main()
{
	compressArray();

	cout << endl;
	cout << endl;

	return 0;
}

void compressArray()
{
	int input[] = { -102, 1, 134565589, 134565589, -102, 66666668, 134565589, 66666668, -102, 1, -2 };

	int assign = 0;
	int c = 0;
	int compressed[100] = {};

	int arraySize = sizeof(input) / sizeof(int);

	map<int, int> mymap;

	cout << "Mapping ............\n\n" << endl;
	for (int i = 0; i < arraySize; i++)
	{
		int x = input[i];

		if (mymap.find(x) == mymap.end())
		{
			mymap[x] = assign;
			cout << "Mapping " << setw(10) << input[i] << "\twith\t" << assign << endl;
			assign++;
		}

		int a = mymap[x];
		compressed[c] = a;
		c++;
	}

	cout << endl;
	cout << endl;

	cout << "Compressed array :  ";
	for (int i = 0; i < arraySize; i++)
	{
		cout << compressed[i] << "  ";
	}
	cout << endl;
}