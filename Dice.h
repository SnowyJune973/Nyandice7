#pragma once
#include "stdafx.h"
#include "Util.h"
using namespace std;
namespace Nyandice7 {
	class Dice {
		string expression, expression_no_dice;
		void _compile();
		double _calculate();
	public:
		Dice();
		Dice(string s);
		bool addDice(int _fa, int _c);
		bool addConstant(int _c);
		double roll(int _cheat);
		operator string();
	};
}