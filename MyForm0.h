#pragma once
#include <iostream>
#include <iostream>
#include "MyForm11.h"
#include "MyForm12.h"
#include "MyForm13.h"
#include "MyForm14.h"
#include "MyForm15.h"

namespace test 
{
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    ref class MyForm0 : public System::Windows::Forms::Form {
    public:
        MyForm0() 
        {
            InitializeComponent();
        }

    protected:
        ~MyForm0() {

        }
    private: System::Windows::Forms::Label^ nameLabel;
    private: System::Windows::Forms::TextBox^ nameTextBox;
    private: System::Windows::Forms::Label^ idLabel;
    private: System::Windows::Forms::TextBox^ idTextBox;
    private: System::Windows::Forms::Button^ loginButton;
    private: System::Windows::Forms::PictureBox^ pictureBox1;
    private: System::Windows::Forms::Button^ exitButton;

    private:
        void InitializeComponent(void) {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm0::typeid));
            this->nameLabel = (gcnew System::Windows::Forms::Label());
            this->nameTextBox = (gcnew System::Windows::Forms::TextBox());
            this->idLabel = (gcnew System::Windows::Forms::Label());
            this->idTextBox = (gcnew System::Windows::Forms::TextBox());
            this->loginButton = (gcnew System::Windows::Forms::Button());
            this->exitButton = (gcnew System::Windows::Forms::Button());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->SuspendLayout();
            // 
            // nameLabel
            // 
            this->nameLabel->AutoSize = true;
            this->nameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->nameLabel->Location = System::Drawing::Point(80, 232);
            this->nameLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->nameLabel->Name = L"nameLabel";
            this->nameLabel->Size = System::Drawing::Size(102, 32);
            this->nameLabel->TabIndex = 0;
            this->nameLabel->Text = L"Name:";
            // 
            // nameTextBox
            // 
            this->nameTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->nameTextBox->Location = System::Drawing::Point(216, 232);
            this->nameTextBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->nameTextBox->Name = L"nameTextBox";
            this->nameTextBox->Size = System::Drawing::Size(490, 35);
            this->nameTextBox->TabIndex = 1;
            this->nameTextBox->TextChanged += gcnew System::EventHandler(this, &MyForm0::nameTextBox_TextChanged);
            // 
            // idLabel
            // 
            this->idLabel->AutoSize = true;
            this->idLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->idLabel->Location = System::Drawing::Point(122, 304);
            this->idLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->idLabel->Name = L"idLabel";
            this->idLabel->Size = System::Drawing::Size(60, 32);
            this->idLabel->TabIndex = 2;
            this->idLabel->Text = L"ID :";
            // 
            // idTextBox
            // 
            this->idTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->idTextBox->Location = System::Drawing::Point(216, 304);
            this->idTextBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->idTextBox->Name = L"idTextBox";
            this->idTextBox->Size = System::Drawing::Size(490, 35);
            this->idTextBox->TabIndex = 3;
            // 
            // loginButton
            // 
            this->loginButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->loginButton->Location = System::Drawing::Point(400, 438);
            this->loginButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->loginButton->Name = L"loginButton";
            this->loginButton->Size = System::Drawing::Size(148, 41);
            this->loginButton->TabIndex = 4;
            this->loginButton->Text = L"Login";
            this->loginButton->UseVisualStyleBackColor = true;
            this->loginButton->Click += gcnew System::EventHandler(this, &MyForm0::loginButton_Click);
            // 
            // exitButton
            // 
            this->exitButton->DialogResult = System::Windows::Forms::DialogResult::Cancel;
            this->exitButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->exitButton->Location = System::Drawing::Point(574, 438);
            this->exitButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->exitButton->Name = L"exitButton";
            this->exitButton->Size = System::Drawing::Size(132, 41);
            this->exitButton->TabIndex = 5;
            this->exitButton->Text = L"Exit";
            this->exitButton->UseVisualStyleBackColor = true;
            this->exitButton->Click += gcnew System::EventHandler(this, &MyForm0::exitButton_Click);
            // 
            // pictureBox1
            // 
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(327, 38);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(173, 139);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox1->TabIndex = 6;
            this->pictureBox1->TabStop = false;
            // 
            // MyForm0
            // 
            this->AcceptButton = this->loginButton;
            this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->CancelButton = this->exitButton;
            this->ClientSize = System::Drawing::Size(786, 539);
            this->Controls->Add(this->pictureBox1);
            this->Controls->Add(this->exitButton);
            this->Controls->Add(this->loginButton);
            this->Controls->Add(this->idTextBox);
            this->Controls->Add(this->idLabel);
            this->Controls->Add(this->nameTextBox);
            this->Controls->Add(this->nameLabel);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
            this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->MaximizeBox = false;
            this->MinimizeBox = false;
            this->Name = L"MyForm0";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"ID Login";
            this->Load += gcnew System::EventHandler(this, &MyForm0::MyForm_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }

    private:
        System::Void loginButton_Click(System::Object^ sender, System::EventArgs^ e)
        {
            // Get the ID and credits entered by the user
            String^ id = idTextBox->Text;

            // Define the list of valid IDs and credit hours
            array<String^>^ validIds = { "2022/06447", "2022/05443", "2020/06447", "2020/05043", "2019/06743" };
            array<int>^ validCredits = { 18, 15, 70, 75, 102 };

            // Validate the ID and credits
            bool isValid = false;
            for (int i = 0; i < validIds->Length; i++) {
                if (id == validIds[i]) {
                    isValid = true;
                    break;
                }
            }
            if (!isValid) {
                MessageBox::Show("Invalid ID.");
                return;
            }

            // Extract the year from the ID
            int year = Int32::Parse(id->Substring(0, 4));

            // Create an instance of the appropriate form based on the year and credits
            Form^ form;
            if ((year == 2022) && (validCredits[0] >= 17)) {
                form = gcnew Form11();
            }
            else if (year == 2022 && validCredits[1] < 17) {
                form = gcnew Form12();
            }
            else if (year == 2020 && validCredits[2] >= 69) {
                form = gcnew Form13();
            }
            else if (year == 2020 && validCredits[3] >= 72) {
                form = gcnew Form14();
            }
            else if (year == 2019 && validCredits[4] >= 101) {
                form = gcnew Form15();
            }
            else {
                MessageBox::Show("Invalid input.");
                return;
            }

            // Show the form
            form->ShowDialog();
        }

    private:
        System::Void exitButton_Click(System::Object^ sender, System::EventArgs^ e)
        {
            Close();
        }
    private:
        System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
        }

    private: System::Void nameTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};

}