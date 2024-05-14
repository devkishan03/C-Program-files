#include <iostream>
#include <vector>
using namespace std;

int main()
{

	vector<int> v = {10, 20, 30};
	v.push_back(26);

	for (int x : v)
	{
		cout << x << endl;
	}
	v.pop_back();

	cout << "using itrator" << endl;
	vector<int>::iterator it;
	for (it = v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;
	}

	return 0;
}
