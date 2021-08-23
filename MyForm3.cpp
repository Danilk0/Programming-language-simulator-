#include "MyForm3.h"
#include "MyForm4.h"
#include"MyForm9.h"
#include"MyForm6.h"
#include"MyForm7.h"

namespace LastDance
{
	System::Void MyForm3::ToF4() {
		MyForm4^ f4 = gcnew MyForm4(this);
		f4->Show();
		this->Hide();
	}
	System::Void MyForm3::ToF9() {
		MyForm9^ f9 = gcnew MyForm9(this);
		f9->Show();
		this->Hide();
	}
	System::Void MyForm3::ToF6() {
		MyForm6^ f6 = gcnew MyForm6(this);
		f6->Show();
		this->Hide();
	}
	System::Void MyForm3::ToF7() {
		MyForm7^ f7 = gcnew MyForm7(this);
		f7->Show();
		this->Hide();
	}

}
