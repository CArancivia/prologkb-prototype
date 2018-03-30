#include <math.h>
#include <iostream>
#include <sstream> 
#include "Home.h"
#include "SWI-cpp.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(int argc, char** argv)
{
	PL_initialise(argc, argv);
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew TFIA::Home());
}