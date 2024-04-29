#include "Vector.h"

using namespace std;


int main()
{
	try
	{
		vector<int> V(5), U(5);
		cin >> V;
		cin >> U;
		cout << "V: " << V << endl;
		cout << "U: " << U << endl;

		cout << "V has duplicate: " << boolalpha << V.hasDuplicates() << endl;
		cout << "U has duplicate: " << boolalpha << U.hasDuplicates() << endl;
	}
	catch (exception e)
	{
		cerr << e.what() << endl;
	}
	system("pause");
	return 0;
}