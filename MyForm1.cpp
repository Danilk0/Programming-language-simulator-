#include "MyForm1.h"
#include "MyForm3.h"
namespace LastDance
{
	System::Void MyForm1::Tof3() {
		MyForm3^ f3 = gcnew MyForm3(this);
		f3->Show();
		this->Hide();
	}

}