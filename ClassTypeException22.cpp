#include <iostream>
#include <cstring>
using namespace std;
class MyException {
  public:
    string str_what="dffdf";
    int what=10;

    MyException(string s, int e) {


}
};
int main()
{
    int i;
try {
    cout << "Enter a positive number: ";
    cin >> i;
if(i<0)
    throw MyException("Not", i);
}
catch (MyException e) { // catch an error
    cout << e.str_what << ": ";
    cout << e.what << "\n";
}
return 0;
}









			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 String ^name = textBox1->Text;
				 double a = Convert::ToDouble(name);
				 String ^name1 = textBox2->Text;
				 double b= Convert::ToDouble(name1);
				 textBox3->Text = Convert::ToString(a+b);

	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 Application::Exit();
				

	}
};
}
