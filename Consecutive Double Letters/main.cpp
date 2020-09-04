#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

string mostDblLtrs;
int nbrPairs;
string tempString;       //stores one word of words.txt at a time
char tempChar;           //stores a letter for comparison
char tempChar2;         //stores a second letter for comparison
//int wordCntr = 0;

int main()
{

	ifstream file;                      //declares input stream
	file.open("words.txt");              //opens file
	if (!file.is_open()) {               //terminates program if file is not open (part of c standard library)
		cout << "FnF";
		exit(EXIT_FAILURE);             //will probably replace with a way to reset input loop
	}



	while (getline(file, tempString))
	{
		int i = 0;
		int counter = 0;         //variable to count the number of double consecutive letters in each word
		while (tempString[i] != '\0')
		{
			//cout << tempString << endl;
			tempChar = tempString[i];
			tempChar2 = tempString[i + 1];
			if (tempChar == tempChar2)
			{
				i += 2;
				counter++;
			}
			else
			{
				i++;
				counter = 0;
			}
		}

		if (counter >= nbrPairs)
		{
			nbrPairs = counter;
			mostDblLtrs = tempString;
		}
		//cout << mostDblLtrs << endl;

	}
	cout << mostDblLtrs << endl << mostDblLtrs << " has " << nbrPairs << " double consecutive letters." << endl;

	return 0;
}
