#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <string>
#include <cstdio>
#include <map>

using namespace std;
using std::cin;



int main() {
	string haab_month[] =
	{ "pop", "no", "zip", "zotz", "tzec", "xul", "yoxkin", "mol", "chen",
	"yax", "zac", "ceh", "mac", "kankin", "muan", "pax", "koyab",
	"cumhu", "uayet" };
	map<string, int> haab_month_to_num;

	for (int i = 0; i < 19; ++i) {
		haab_month_to_num[haab_month[i]] = i*20;
	}

	string tzolkin_num_to_month[] =
	{ "imix", "ik", "akbal", "kan", "chicchan", "cimi", "manik", "lamat",
	"muluk", "ok", "chuen", "eb", "ben", "ix", "mem", "cib", "caban",
	"eznab", "canac", "ahau" };

	int num;
	cin >> num;
	cout << num << endl;
	for (int i = 0; i < num; ++i) {
		int num_of_the_day, year;
		string month;
		char c;
		cin >> num_of_the_day >> c >> month >> year;
		int num_day_since_beginning =
			year * 365 + haab_month_to_num[month] + num_of_the_day;

		int tzolkin_year = num_day_since_beginning / 260;
		int tzolkin_month = num_day_since_beginning % 20;
		int tzolkin_day = num_day_since_beginning % 13;
		cout << tzolkin_day + 1 << ' ' << tzolkin_num_to_month[tzolkin_month] << ' ' << tzolkin_year << endl;
	}

	return 0;
}