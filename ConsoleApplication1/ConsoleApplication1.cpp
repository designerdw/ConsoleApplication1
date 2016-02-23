// ConsoleApplication1.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"

#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <string>
#include <algorithm>
#include <cassert>

#include "TestDef.h"

using namespace std;

int main()
{
	cout << "Using reverse algorithm with a string" << endl;
	string string1 = "mark twain";
	reverse(string1.begin(), string1.end());
	assert(string1 == "niawt kram");
	cout << " --- Ok." << endl;

	cout << "Using reverse algorithm with a array" << endl;
	char array1[] = "mark twain";
	int N1 = strlen(array1);
	reverse(&array1[0], &array1[N1]);
	assert(string(array1) == "niawt kram");
	cout << " --- Ok." << endl;

	cout << "Using reverse algorithm with a vector" << endl;
	vector<char> vector1 = make<vector<char>>("mark twain");
	reverse(vector1.begin(), vector1.end());
	assert(vector1 == make<vector<char>>("niawt kram"));
	cout << " --- Ok." << endl;

	cout << "Using reverse algorithm with a list" << endl;
	list<char> list1 = make<list<char>>("mark twain");
	reverse(list1.begin(), list1.end());
	assert(list1 == make<list<char>>("niawt kram"));
	cout << " --- Ok." << endl;

	cout << "Demonstrating generic find algorithm with an array." << endl;
	char s[] = "C++ is a better C";
	int len = strlen(s);
	const char* where = find(&s[0], &s[len], 'e');
	assert(*where == 'e' && *(where + 1) == 't');
	cout << " --- Ok." << endl;

	map<string, long> directory;
	directory["Bogart"] = 1234567;
	directory["Bacell"] = 9876543;
	directory["Cagney"] = 3459876;

	string name;
	while (cin >> name)
	{
		if (directory.find(name) != directory.end())
		{
			cout << "The phone number for " << name
				<< " is " << directory[name] << endl;
		}
		else
		{
			cout << "Sorry, no Listing for " << name << endl;
		}
	}

	return 0;
}

