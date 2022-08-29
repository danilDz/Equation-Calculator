#include "ClassValidation.h"

bool Validation::validationE(System::String^ str) {
	if (str->Length > 2) {
		if (str[0] == '0' && str[1] == ',' && str[str->Length - 1] == '1')
		{
			for (int i = 2; i < str->Length; i++)
			{
				if (i != str->Length - 1 && str[i] != '0')
				{
					return true;
				}
			}
			if (System::Convert::ToDouble(str) > 0.1 || System::Convert::ToDouble(str) < 1E-10)
			{
				return true;
			}
			return false;
		}
		else {
			return true;
		}
	}
	else {
		return true;
	}
}

bool Validation::validationInput(System::String^ str) {
	bool flag = false;
	// Перевірка на непорожнє поле
	if (str->Length > 0) {
		for (int i = 0; i < str->Length; i++)
		{
			// Перевірка на усі можливі варіанти 
			if (isdigit(str[i]) || (i == 0 && str[i] == '-' && str->Length > 1) || (i != 0 && i != str->Length - 1 && str[i] == ',' && str->IndexOf(",") == str->LastIndexOf(","))) {
				flag = false;
			}
			else {
				return true;
			}
		}
		return flag;
	}
	else {
		return true;
	}
}