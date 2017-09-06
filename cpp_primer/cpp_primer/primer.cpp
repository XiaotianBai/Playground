#include<iostream>
#include<string>
#include<vector>
#include<array>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::size_t;
using std::vector;
using std::end;
using std::begin;
using std::array;
using std::runtime_error;
int main()
{
	int index = 0;
	bool c = true;
	string s = "sdadsdad";
	for (auto index = 0; index != s.size() && !isspace(s[index]); ++index) 
		s[index] = toupper(s[index]);
	cout << s << endl;
	switch (c)
	{
	case true:
		//string file_name; // error: control bypasses an implicitly initialized variable int ival = 0; variable
		int jval; 
		
		break;
		// ok: because jval is not initialized
	case false: // ok: jval is in scope but is uninitialized jval = next_num(); // ok: assign a value to jval if (file_name.empty()) 
		break;
	}
	cout << c <<endl;
	string item1;
	int item2 = 1;
	int ci = 5;
	
	while (cin >>  item2) {
		try 
		{
			ci / item2;
			if (item2 == 0) throw runtime_error("the devisor must not be zero");
		}
		catch (runtime_error err) { // remind the user that the ISBNs must match and prompt for another pair 
			cout << err.what() << "\nTry Again? Enter y or n" << endl;
			char c; while (cin >> c)
			{
				if (!cin || c == 'y') break; else if (c == 'n') return 0; else;
			}
			
		}
	}
	string svec1 = "hi";
	int a1[2]= { 1,2 };
	vector<string> svec = { "cc","dd","ee" };
	for (auto beg = svec.begin(), end = svec.end(); beg != end; ++beg)
	{
	//	svec.push_back("1");// r must be a reference so we can change the element r *= 2;
	}	


	// double the value of each element in v }
	vector<int> ivec = { 1,23,4,5,6,7,8 };
	auto iter1 = ivec.begin();


	while (true);
	return 0;
}