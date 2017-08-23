#include "MyForm.h"
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <cstdlib>


using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Проект2::MyForm form;
	Application::Run(%form);
}

