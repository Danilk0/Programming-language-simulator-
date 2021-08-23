#include "MyForm9.h"
#include "MyForm5.h"
namespace LastDance
{
	System::Void MyForm9::ToF5() {
		MyForm5^ f5 = gcnew MyForm5(this);
		f5->Show();
		this->Hide();
	}

}

