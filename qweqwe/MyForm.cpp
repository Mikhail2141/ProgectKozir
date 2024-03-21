
#include "MyForm.h"
using namespace qweqwe;
using namespace System;
[STAThreadAttribute]//now it may work!
//we can restart visual studio
int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
	//now we can run but it still can't show form design at design time 
	// it still error about call stack
}