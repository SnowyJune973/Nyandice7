#include "stdafx.h"
#include "Dice.h"

namespace Nyandice7 {
	Dice::Dice() {
		expression = expression_no_dice = "";
	}

	Dice::Dice(string s) {
		expression = s;
	}

	bool Dice::addConstant(int _c) {
		expression += Util::Format("+%d", _c);
		return true;
	}
}
