#include "AboutAutorForm.h"
using namespace System;

Project::AboutAutorForm::AboutAutorForm(void) {
	InitializeComponent();
}

Project::AboutAutorForm::~AboutAutorForm() {
	if (components) {
		delete components;
	}
}

Void Project::AboutAutorForm::buttonClose_Click(Object^ sender, EventArgs^ e) {
	// Закриття AboutAutorForm
	AboutAutorForm::Close();
}