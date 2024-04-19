#pragma once

namespace test {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class Form14 : public System::Windows::Forms::Form
    {
    public:
        Form14(void)
        {
            InitializeComponent();
        }

    protected:
        ~Form14()
        {

        }

    private:
        System::Windows::Forms::DataGridView^ dgvSchedule;

        void InitializeComponent(void)
        {
            this->dgvSchedule = (gcnew System::Windows::Forms::DataGridView());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSchedule))->BeginInit();
            this->SuspendLayout();
            // 
            // dgvSchedule
            // 
            this->dgvSchedule->AllowUserToAddRows = false;
            this->dgvSchedule->AllowUserToDeleteRows = false;
            this->dgvSchedule->AllowUserToResizeRows = false;
            this->dgvSchedule->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
            this->dgvSchedule->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dgvSchedule->Dock = System::Windows::Forms::DockStyle::Fill;
            this->dgvSchedule->Location = System::Drawing::Point(0, 0);
            this->dgvSchedule->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->dgvSchedule->Name = L"dgvSchedule";
            this->dgvSchedule->ReadOnly = true;
            this->dgvSchedule->RowHeadersVisible = false;
            this->dgvSchedule->RowHeadersWidth = 62;
            this->dgvSchedule->RowTemplate->Height = 33;
            this->dgvSchedule->Size = System::Drawing::Size(991, 625);
            this->dgvSchedule->TabIndex = 0;
            this->dgvSchedule->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form14::dgvSchedule_CellContentClick);
            // 
            // Form2
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(991, 625);
            this->Controls->Add(this->dgvSchedule);
            this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->Name = L"Form2";
            this->Text = L"Schedule";
            this->Load += gcnew System::EventHandler(this, &Form14::Form14_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSchedule))->EndInit();
            this->ResumeLayout(false);
        }

    private: System::Void Form14_Load(System::Object^ sender, System::EventArgs^ e) {
        array<String^, 2>^ schedule = gcnew array<String^, 2>(6, 7);
        schedule[0, 0] = "";
        schedule[0, 1] = "Saturday";
        schedule[0, 2] = "Sunday";
        schedule[0, 3] = "Monday";
        schedule[0, 4] = "Tuesday";
        schedule[0, 5] = "Wednesday";
        schedule[0, 6] = "Thursday";
        schedule[1, 0] = "8:30-10:00";
        schedule[2, 0] = "10:00-11:30";
        schedule[3, 0] = "11:30-1:00";
        schedule[4, 0] = "1:00-2:30";
        schedule[5, 0] = "2:30-4:00";
        schedule[1, 1] = "";
        schedule[2, 1] = "";
        schedule[3, 1] = "";
        schedule[4, 1] = "";
        schedule[5, 1] = "";
        schedule[1, 2] = "AI";
        schedule[2, 2] = "SE";
        schedule[3, 2] = "Lab stat.anal.";
        schedule[4, 2] = "Desktop publish";
        schedule[5, 2] = "";
        schedule[1, 3] = "German I";
        schedule[2, 3] = "Stat.Anal.";
        schedule[3, 3] = "IMG Process";
        schedule[4, 3] = "";
        schedule[5, 3] = "Lab SE";
        schedule[1, 4] = "AI";
        schedule[2, 4] = "Lab AI";
        schedule[3, 4] = "German I";
        schedule[4, 4] = "Lab IMG Process";
        schedule[5, 4] = "";
        schedule[1, 5] = "Stat. Anal.";
        schedule[2, 5] = "IMG Process";
        schedule[3, 5] = "German I";
        schedule[4, 5] = "SE";
        schedule[5, 5] = "";
        schedule[1, 6] = "";
        schedule[2, 6] = "";
        schedule[3, 6] = "";
        schedule[4, 6] = "";
        schedule[5, 6] = "";



        for (int row = 0; row < 6; row++) {
            DataGridViewRow^ dgvRow = gcnew DataGridViewRow();
            for (int col = 0; col < 7; col++) {
                if (row == 0) {
                    DataGridViewTextBoxColumn^ colHeader = gcnew DataGridViewTextBoxColumn();
                    colHeader->HeaderText = schedule[row, col];
                    dgvSchedule->Columns->Add(colHeader);
                }
                else {
                    DataGridViewTextBoxCell^ cell = gcnew DataGridViewTextBoxCell();
                    cell->Value = schedule[row, col];
                    dgvRow->Cells->Add(cell);
                }
            }
            if (row != 0) {
                dgvSchedule->Rows->Add(dgvRow);
            }
        }
    }
    private: System::Void dgvSchedule_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
    }
    };
}