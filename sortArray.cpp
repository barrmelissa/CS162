#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{

	string sortArray[] = {"ram", "art", "tar", "arm", "ear", "apt", "are", "tap"};
	
	cout << "Array before being sorted: [ram, art, tar, arm, ear, apt, are, tap]" << endl;
	cout << endl;

	cout << "Array sorted so that anagrams are next to each other:" << endl;	

	multimap<string, string> map;
	string temp;
	
	for (int i = 0; i < 8; i++)
	{
		temp = sortArray[i];
		sort(temp.begin(), temp.end());
		map.insert(pair<string,string>(temp, sortArray[i]));
	}


  	for (multimap<string, string>::iterator it = map.begin();
       it != map.end();
       ++it)
   {
       cout << "[" << (*it).first << ", " << (*it).second << "]" << endl;
   }

	return 0;

}
