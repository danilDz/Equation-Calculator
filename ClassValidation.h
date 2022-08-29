#pragma once
#include <iostream>

class Validation {
	public:

		// Функція, створена для валідації введених коефіцієнтів і відрізка
		static bool validationInput(System::String^ str);

		// Функція, створена для валідації епсілон
		static bool validationE(System::String^ str);
};