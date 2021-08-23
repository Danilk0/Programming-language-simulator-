#include "MyForm4.h"
#include"MyForm8.h"
namespace LastDance
{
	System::Void MyForm4::ToF8() {
		MyForm8^ f8 = gcnew MyForm8(this);
		f8->Show();
		this->Hide();
	}
}
