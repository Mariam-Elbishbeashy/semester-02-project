#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <msclr/marshal_cppstd.h>
#include <vector>


namespace test {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::Collections::Generic;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class edit3 : public System::Windows::Forms::Form
    {
    public:
        Form^ obj;
        ref class Course {
        public:
            String^ Name;
            String^ Weekday;
            String^ Timeslot;

            Course(String^ name, String^ weekday, String^ timeslot) {
                Name = name;
                Weekday = weekday;
                Timeslot = timeslot;
            }
           
        };
        edit3(Form^ obj1)
        {
            obj = obj1;
        }

    private:
        List<Course^>^ schedule;
        array<String^>^ courses;
        array<String^>^ weekdays;
        array<String^>^ timeslots;
        array<Course^>^ appointments;
        int count = 0;

    public:
        edit3(void)
        {
            InitializeComponent();

            schedule = gcnew List<Course^>();
            courses = gcnew array<String^>{ "AI", "HCI", "German I", "SE", "stat. Anal." };
            weekdays = gcnew array<String^>{  "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday" };
            timeslots = gcnew array<String^>{ "8:30-10:00", "10:00-11:30", "11:30-1:00", "1:00-2:30", "2:30-4:00" };
            appointments = gcnew array<Course^>(10);

            // Initialize appointments array
            for (int i = 0; i < appointments->Length; i++)
            {
                appointments[i] = gcnew Course("", "", "");
            }

            this->cbCourse->Items->AddRange(courses);
            this->cbWeekday->Items->AddRange(weekdays);
            this->cbTimeslot->Items->AddRange(timeslots);
            dgvSchedule->Columns->Add("Course", "Course");
            dgvSchedule->Columns->Add("Weekday", "Weekday");
            dgvSchedule->Columns->Add("Timeslot", "Timeslot");
        }

    protected:
        ~edit3()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::ComponentModel::Container^ components;
        System::Windows::Forms::ComboBox^ cbCourse;
        System::Windows::Forms::ComboBox^ cbWeekday;
        System::Windows::Forms::ComboBox^ cbTimeslot;
        System::Windows::Forms::Button^ btnSchedule;
        System::Windows::Forms::DataGridView^ dgvSchedule;

        void InitializeComponent(void)
        {
            this->cbCourse = (gcnew System::Windows::Forms::ComboBox());
            this->cbWeekday = (gcnew System::Windows::Forms::ComboBox());
            this->cbTimeslot = (gcnew System::Windows::Forms::ComboBox());
            this->btnSchedule = (gcnew System::Windows::Forms::Button());
            this->dgvSchedule = (gcnew System::Windows::Forms::DataGridView());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSchedule))->BeginInit();
            this->SuspendLayout();
            // 
            // cbCourse
            // 
            this->cbCourse->FormattingEnabled = true;
            this->cbCourse->Location = System::Drawing::Point(12, 12);
            this->cbCourse->Name = L"cbCourse";
            this->cbCourse->Size = System::Drawing::Size(200, 21);
            this->cbCourse->TabIndex = 0;
            // 
            // cbWeekday
            // 
            this->cbWeekday->FormattingEnabled = true;
            this->cbWeekday->Location = System::Drawing::Point(218, 12);
            this->cbWeekday->Name = L"cbWeekday";
            this->cbWeekday->Size = System::Drawing::Size(120, 21);
            this->cbWeekday->TabIndex = 1;
            // 
            // cbTimeslot
            // 
            this->cbTimeslot->FormattingEnabled = true;
            this->cbTimeslot->Location = System::Drawing::Point(344, 12);
            this->cbTimeslot->Name = L"cbTimeslot";
            this->cbTimeslot->Size = System::Drawing::Size(120, 21);
            this->cbTimeslot->TabIndex = 2;
            // 
            // btnSchedule
            // 
            this->btnSchedule->Location = System::Drawing::Point(470, 10);
            this->btnSchedule->Name = L"btnSchedule";
            this->btnSchedule->Size = System::Drawing::Size(75, 23);
            this->btnSchedule->TabIndex = 3;
            this->btnSchedule->Text = L"Schedule";
            this->btnSchedule->UseVisualStyleBackColor = true;
            this->btnSchedule->Click += gcnew System::EventHandler(this, &edit3::btnSchedule_Click);
            // 
            // dgvSchedule
            // 
            this->dgvSchedule->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
            this->dgvSchedule->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
            this->dgvSchedule->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dgvSchedule->Location = System::Drawing::Point(12, 39);
            this->dgvSchedule->Name = L"dgvSchedule";
            this->dgvSchedule->ReadOnly = true;
            this->dgvSchedule->Size = System::Drawing::Size(533, 210);
            this->dgvSchedule->TabIndex = 4;
            // 
            // edit3
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(557, 261);
            this->Controls->Add(this->dgvSchedule);
            this->Controls->Add(this->btnSchedule);
            this->Controls->Add(this->cbTimeslot);
            this->Controls->Add(this->cbWeekday);
            this->Controls->Add(this->cbCourse);
            this->Name = L"edit3";
            this->Text = L"Course Scheduler";
            this->Load += gcnew System::EventHandler(this, &edit3::edit3_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSchedule))->EndInit();
            this->ResumeLayout(false);

        }

        void btnSchedule_Click(System::Object^ sender, System::EventArgs^ e) {
            // Get the selected course, weekday, and timeslot
            String^ selectedCourse = cbCourse->SelectedItem->ToString();
            String^ selectedWeekday = cbWeekday->SelectedItem->ToString();
            String^ selectedTimeslot = cbTimeslot->SelectedItem->ToString();
            bool isTimeSlotTaken = false;

            for (int i = 0; i < 10; i++)
            {
                if (appointments[i]->Weekday == selectedWeekday &&
                    appointments[i]->Timeslot == selectedTimeslot)
                {
                    isTimeSlotTaken = true;
                    break;
                }
            }

            if (isTimeSlotTaken)
            {
                MessageBox::Show("Time slot is taken.");
            }
            else
            {
                appointments[count] = gcnew Course(selectedCourse, selectedWeekday, selectedTimeslot);
                count++;

                // Create a new Course object with the selected course, weekday, and timeslot
                Course^ newCourse = gcnew Course(selectedCourse, selectedWeekday, selectedTimeslot);

                // Add the new Course object to the schedule list
                schedule->Add(newCourse);

                // Clear the DataGridView and repopulate it with the updated schedule
                dgvSchedule->Rows->Clear();

                for each (Course ^ course in schedule) {
                    array<String^>^ row = gcnew array<String^>{ course->Name, course->Weekday, course->Timeslot };
                    dgvSchedule->Rows->Add(row);
                }
            }
        }
    private: System::Void edit3_Load(System::Object^ sender, System::EventArgs^ e) {
    }
};
}