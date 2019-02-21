#pragma once
#include "stdafx.h"

#define PII pair<int, int>
#define MP(x,y) std::make_pair(x,y)

typedef long long LL;
using namespace std;
namespace Nyandice7 {
	static class Util {
		int _233;
	public:
		string Strip(string _, string __);
		vector<string> Split(string s, string __);
		vector<PII> RegexSearch(string s, string t);
		double StoD(string s);
		static string Format(string _format, ...);
	};
};