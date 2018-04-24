#include "Components.hpp"

unsigned short** GetArray2D()
{
	unsigned short** to_return = new unsigned short*[3];

	for (size_t i = 0; i < 3; ++i)
	{
		to_return[i] = new unsigned short[3];
		for (size_t j = 0; j < 3; ++j)
		{
			to_return[i][j] = 18;
		}
	}

	return to_return;
}

//inline, static, extern


int main(int argc, const int* argv[])
{	
	//NUMBER my_numbers; may be its not needed.. you can use values inside of enumerator
	// The number of elements in the vector.  

	// Create a vector object with each element set to 1.  
	vector<int> v(elementCount,9); //two elements with value 9 in the beggining
	for (int i= 0; i < 9; ++i)
	{
		v.push_back(1);
	}

	//new style of for cycle to cointainer
	for (auto &el : v)
	{
		if (el == 9)
		{
			printf("Echo..\n");
		}
	}

	//map element insert
	map<unsigned short int, string> diction;

	diction.insert( make_pair(1, "first") );
	diction.insert( make_pair(2, "second") );

	//map search engine by key
	for_each(diction.begin(), diction.end(), [=](auto /*pair<unsigned short int, string> */ dictionEl) {if (dictionEl.first == 1) cout << dictionEl.second << endl; });

	//error handling mechanix
	cout << "****************** Error handling ******************\n";
	try
	{
		cout << "element: " << v.at(100);
	}
	catch (exception& e)
	{
		cout << e.what() << endl;
	}
	cout << "****************************************************\n";

	for_each(v.begin(), v.end(), [=] (int/*works with auto*/ vectorEl) { 	if (vectorEl == 9)	{ cout << "Echo.." << endl; }} );
	//system ("PAUSE");	

	cout << "\f \v \n";

	{
		Sedan mysedan;
		Coupe mycoupe;
		
		vector<string> vStringN;
		vStringN.push_back("Accent");
		vStringN.push_back("Tiburon");

		vector<string>::iterator itVecStr = vStringN.begin();
		
		vector<Car*> uncnt;

		uncnt.push_back(&mysedan);
		uncnt.push_back(&mycoupe);
		
		for (auto &el : uncnt)
		{
			el->setName(*itVecStr);
			*itVecStr++;
			el->showDetails();
		}
			
		uncnt.clear();
	}
	cout << endl;

	unsigned short** b = GetArray2D();

	cout << "Higlhland Park:" << b[0][0] << " years old" << endl;

	return 0;
}