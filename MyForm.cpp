#include <tchar.h>
#include "MyForm.h"

using namespace std;
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	chessD::MyForm Form; 
	Application::Run(%Form);
}

