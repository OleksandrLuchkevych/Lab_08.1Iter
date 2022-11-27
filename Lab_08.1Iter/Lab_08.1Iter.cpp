#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int Count(char* str)
{
	if (strlen(str) < 3)
		return 0;
	int k = 0;
	for (int i = 0; str[i] != 0; i++)
		if (str[i] == '.') {
			k++;
			if (k == 3)
			{
				return i;
			}
		}
	return 0;
}
char* Change(char* str)  
{

	size_t len = strlen(str);
	char* tmp = new char[int(len * 1. / 1 + 1)];
	char* t = tmp;
	tmp[0] = '\0';
	size_t i = 0;
	while (i < len && str[i] != 0) 
	{
		
		if (i != 0 && i % 4 == 0) {
			strcat(t, ".");
			t += 1;
			i += 1;
		}
		else 
		{
			*t++ = str[i++];
			*t = '\0';
		}
	}
	*t++ = str[i++];
	*t++ = str[i++];
	*t = '\0';
	return tmp;
}
int main()
{
	char str[101];
	cout << "Enter string:" << endl;
	cin.getline(str, 100);
	cout << "Index of 3rd dot: " << Count(str) << endl;
	char* dest = new char[151];
	dest = Change(str);
	cout << "Modified string (param) : " << str << endl;
	cout << "Modified string (result): " << dest << endl;
	return 0;
}
