#include<iostream>
using namespace std;

int main( )
{
	char str[100];

	cin.getline(str, 100);
	
	int words = 0; // Holds number of words
	
	for(int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ') {
			words++;
		} 		
	}

	cout << words+1 << endl;

	return 0;
}
