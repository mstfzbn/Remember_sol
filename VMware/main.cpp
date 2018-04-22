//Mustafa Zaban
//Microsoft Visual studio 2017
//Reduce the Fraction task
//est time 2 hours +

#include <iostream>
#include <vector>
#include <string>

using namespace std;
//range
constexpr unsigned short int RANGE = 2000;
constexpr unsigned short int NUMBER_OF_PAIRS = 10;

int main()
{
	
	vector<int> divs;
	divs.push_back(2);
	divs.push_back(3);

	//////////////divs generating in range from StackOverflow
	for (int i = 2; i<RANGE; i++) 
		for (int j = 2; j*j <= i; j++)
		{
			if (i % j == 0)
				break;
			else if (j + 1 > sqrt(i)) {
				divs.push_back(i);

			}

		}
	////////////////////////////////////////////////////////

	//examples
	int numbers[NUMBER_OF_PAIRS][2] = { {825,1161},{1092,1041},{315,840},{1104,1119},{724,404},{692,176},{208,286},{65,362},{126,151},{270,318} };
	int numbersToShow[NUMBER_OF_PAIRS][2]; //container to show final result

	//string manipulation
	//bulding container with strings in fromat XXXX/YYYY
	//and revert back in pair of integers
	vector<string> numbersContainer;
	for (size_t i = 0; i < NUMBER_OF_PAIRS; ++i)
	{		
			numbersContainer.push_back(to_string(numbers[i][0]) + "/" + to_string(numbers[i][1]));		
	}

	//algorithm
	int first, second;
	for (size_t j = 0; j < NUMBER_OF_PAIRS; ++j) {
		
		first = stoi(numbersContainer.at(j));

		//stoi string to int 
		size_t foundPos = numbersContainer.at(j).find("/") + 1;
		string temps;

		for (size_t p = foundPos; p < numbersContainer.at(j).size(); ++p)
		{
			temps += numbersContainer.at(j)[p];
		}

		second = stoi(temps);

		for (int i = 0; i <divs.size(); ++i)
		{
			if ((first % divs.at(i) == 0) && (second % divs.at(i) == 0)) {
				do {

					first /= divs.at(i);
					second /= divs.at(i);

				} while ((first % divs.at(i) == 0) && (second % divs.at(i) == 0));
			}
		}
		

		numbersToShow[j][0] = first;
		numbersToShow[j][1] = second;
	}

	//printing block
	for (size_t j = 0; j < 10; ++j)
	{
		for (size_t i = 0; i < 2; ++i)
		{
			cout << numbersToShow[j][i];
			if (i == 0) { cout << "/"; }
		}
		cout << endl;
	}


	return 0;
}