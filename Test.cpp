#include <iostream>
#include <regex>
#include <string>
using namespace std;

int main() {
	regex r("[0-9]+");
	smatch sm;
	string s = "1997=3=9=17:45";
	bool get = regex_search(s, sm, r);
	int len = sm.size();
	cout << len << endl;
	return 0;

}