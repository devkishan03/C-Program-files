#include <iostream>
#include <cstring>
using namespace std;

class String
{
private:
	char *c;
	int n;

public:
	String(char *str)
	{
		n = strlen(str);
		c = new char[n + 1];
		strcpy(c, str);
	}
	int displaySize()
	{
		return n;
	}
	void displayString()
	{
		cout << c << endl;
	}
};

int main()
{
	char *ch = "hello world";
	String str(ch);

	cout << str.displaySize() << endl;
	str.displayString();

	return 0;
}
