// Gui.cpp: ������� ���� �������.

#include "stdafx.h"
#include "fmMain.h"

using namespace Gui;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// ��������� ���������� �������� Windows XP �� �������� �����-���� ��������� ����������
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// �������� �������� ���� � ��� ������
	Application::Run(gcnew fmMain());
	return 0;
}
