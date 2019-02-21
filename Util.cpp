
#include "stdafx.h"
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <set>
#include <vector>
#include <regex>
#include "Util.h"
using namespace std;



namespace Nyandice7 {
		string Util::Strip(string _, string __ = " \n\r") {
			if (__.length() == 0)return _;
			set<char> S;
			S.clear();
			for (int i = 0; i < __.length(); i++) {
				S.insert(__[i]);
			}
			int p = 0, len = _.length();
			while (p < len && S.find(_[p]) != S.end())p++;
			if (p < len)_ = _.substr(p, len);
			else return "";
			len = _.length();
			p = len - 1;
			while (p >= 0 && S.find(_[p]) != S.end())p--;
			if (p >= 0)_ = _.substr(0, p + 1);
			else return "";
			return _;
		}

		vector<string> Util::Split(string s, string __ = " "){
			if (__.length() == 0)return vector<string>(1, s);
			set<char> S;
			vector<string> V;
			S.clear();
			V.clear();
			for (int i = 0; i < __.length(); i++) {
				S.insert(__[i]);
			}
			int len = s.length(), i = 0, j = 0;
			while (i < len) {
				while (i < len && S.find(s[i]) == S.end())i++;
				V.push_back(s.substr(j, i - j));
				while (i < len && S.find(s[i]) != S.end())i++;
				j = i;
			}
			return V;
		}

		vector<PII> Util::RegexSearch(string s, string t) {
			if (t.length() == 0)return vector<PII>();
			regex r(t);
			smatch sm;
			vector<PII> V;
			int offset = 0;
			V.clear();
			while (regex_search(s, sm, r)) {
				int left = sm.prefix().length() + offset;
				V.push_back(MP(left, sm.str().length()));
				offset += (left + sm.str().length());
				s = sm.suffix();
			}
			return V;
		}

		double Util::StoD(string s) {
			double ans = 0, frac = 1;
			bool isFractionPhase = false;
			for (char ch : s) {
				if (!isdigit(ch) && ch != '.')return ans;
				if (isFractionPhase && ch == '.')return ans;
				if (ch == '.') {
					isFractionPhase = true;
					continue;
				}
				if (isFractionPhase) {
					frac *= 0.1;
					ans += frac * (ch - 48);
				}
				else {
					ans = ans * 10 + ch - 48;
				}
			}
			return ans;
		}

		string Util::Format(string _format, ...) {
			va_list va;
			va_start(va, _format);
			char s[999];
			sprintf_s(s, _format.c_str(), va);
			va_end(va);
			return string(s);
		}
}

