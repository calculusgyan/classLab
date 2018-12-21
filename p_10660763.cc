#include "include_head.h"

/** Global variable */
const int TOTAL = 100, TOTAL_ = 50, number1 = 5;

struct studentData{
   string firstname, lastname, gender, dob, programme;
   int number, program, year, student_ID;
};

struct staffData{
   string firstname, lastname, gender, dob, programme;
   int number, program, staff_ID, year;
};

struct ComputerScience{
   string year1[number1] = {"CSCD 101 Introduction to Computer Science I", "MATH 121 Algebra and Trigonometry",
                           "CSCD 102 Introduction to Computer Science II", "MATH 122 Calculus I", "STAT 102 Elementary Probability"};
   string year2[number1] = {"CSCD 202 Programming II ( Java )", "CSCD 201 Information Systems", "CSCD 211 Computer Organization and Architecture"
                           "CSCD 216 Data Structures & Algorithms", "CSCD 205 Programming I (with C++)"};
   string year3[number1] = {"CSCD 301 Object Oriented Analysis & Design", "CSCD 315 Operating Systems", "CSCD 306 Software Engineering",
                           "CSCD 304 Design and Analysis of Algorithms", "CSCD 312 Introduction to Artificial Intelligence"};
   string year4[number1] = {"CSCD 415 Compilers", "CSCD 417 Theory and Survey of Programming Languages", "CSCD 418 Computer Systems Security",
                           "CSCD 423 Software Modeling and Simulation", "CSCD 428 Expert Systems"};

   int csCredit[number1] = {3, 3, 3, 3, 3};
};

struct Mathematics{
   string year1[number1] = {"MATH 123 Vectors and Geometry", "MATH 122 Calculus I", "MATH 124 Mechanics", "UGRC 150 Critical Thinking and Practical Reasoning",
                           "URGC 110 Academic Writing I"};
   string year2[number1] = {"MATH 221 Algebra", "MATH 223 Calculus II", "MATH 224 Introductory Abstract Algebra", "MATH 226 Introductory Computational Mathematics",
                           "MATH 222 Vector Mechanics"};
   string year3[number1] = {"MATH 351 Linear Algebra", "MATH 353 Analysis I", "MATH 355 Calculus of Several Variables",
                           "MATH 354 Abstract Algebra I", "MATH 356 Analysis II"};
   string year4[number1] = {"MATH 400 Project", "MATH 447 Complex Analysis", "MATH 450 Differential equations II",
                           "MATH 441 Advanced Calculus", "MATH 453 Introduction to Quantum Mechanics"};
   int maCredit[number1] = {3, 3, 3, 3, 3};
};

struct Statistics{
   string year1[number1] = {"STAT 101 Introduction to Statistics", "PSYC 101 Elements of Psychology", "MATH 124 Mechanics",
                           "STAT 102 Elementary Probability", "UGRC 131-136 Understanding Human Society"};
   string year2[number1] = {"STAT 221 Introductory Probability I", "STAT 223 Elementary Statistical Methods", "STAT 222 Data Analysis I",
                           "STAT 224 Introductory Probability II", "STAT 226 Official Statistics"};
   string year3[number1] = {"STAT 331 Probability Distributions", "STAT 333 Statistical Methods I", "STAT 335 Sample Survey Methods",
                           "STAT 332 Multivariate Distributions", "STAT 334 Statistical Methods"};
   string year4[number1] = {"STAT 443 Theory of Sampling", "STAT 445 Regression Analysis", "STAT 450 Project",
                           "STAT 442 Statistical Inference: Tests of Hypothesis", "STAT 444 Survey Organization and Management"};

   int staCredit[number1] = {3, 3, 3, 3, 3};
};

struct InformationTechnology{
   string year1[number1] = {"CSIT 101 Introduction to Information Technology", "CSIT 103 Introduction to Computings", "CSIT 105 Programming Fundamentals",
                           "CSIT 102 Introduction to IT Problem Solving", "CSIT 104 Mathematics for IT Professionals"};
   string year2[number1] = {"CSIT 203 Computer Hardware Fundamentals", "CSIT 205 Object Oriented Techniques for IT Problem Solving", "CSIT 207 Database Fundamentals",
                           "CSIT 202 Introduction to Computer and Networks", "CSIT 204 Introduction to Information Security"};
   string year3[number1] = {"CSIT 301 Mobile Development", "CSIT 303 Human Computer Interaction", "CSIT 305 Operating Systems Fundamentals",
                           "CSIT 313 Programme Design and Data Structures", "CSIT 315 Event-Driven Programming"};
   string year4[number1] = {"CSIT 401 Digital Media Editing", "CSIT 403 Graphics & Information Visualization", "CSIT 409 Cloud Computing",
                           "CSIT 411 Advanced Networking Principles", "CSIT 417 Information Storage and Management Technologies"};

   int infoCredit[number1] = {3, 3, 3, 3, 3};
};

struct GPA{
   string grade, classObtained;
   float gradePoint, gradeAverage;
   int creditTaken;
};

/** Function prototype */
void addStudent(/*ifstream& infile*/ studentData studentdata[], int length);
void addStaff(/*ifstream& infile*/ staffData staffdata[], int length);
void showStudent(studentData studentdata[], int length, int id);
void showStaff(staffData staffdata[], int length, int id);
void deleteStudent(studentData studentdata[], int length, int id);
void deleteStaff(staffData staffdata[], int length, int id);
void editStudent(studentData studentdata[], int id, int phone, string pChange);
void editStaff(staffData staffdata[], int id, int phone);
void assignedCourses(studentData studentdata[], int id, int length);
void getGradePoint();
void recordGrade(staffData staffdata[], int id, studentData studentdata[], int length);
int TotalCredit();
float TotalGradePoint();
float GradePointAverage();
string classObtained();
void displayReport(studentData studentdata[], int id);


/** Struct instances */
studentData studentList[TOTAL];
staffData staffList[TOTAL_];
ComputerScience getComputer[number1];
Mathematics getMaths[number1];
Statistics getStat[number1];
InformationTechnology getInfo[number1];
GPA gpa[number1];


int main(){

   int option, adminOption, adminResponse, backOption, delOption, studentID, staffID, ch, studOption, newNumber, stafOption, stafNumber, exitOption, stafLength;
   string newProgram;

   START:
      cout << "\n\t\t\t --------------- SCHOOL MANAGEMENT SYSTEM ---------------" << "\n\t\t\t ________________________________________________________" << endl << endl;
      cout << "\n\n\t\t ----------- MAIN MENU ----------" << endl;
      cout << endl << "\n\t\t 1. Administrator" << endl;
      cout << "\n\t\t 2. Student" << endl;
      cout << "\n\t\t 3. Staff" << endl;
      cout << "\n\t\t 4. Exit Application" << endl;
      cout << endl << "\n\t\t Select option: ";
      cin >> option;

      system("cls");
      switch(option){

      // Admin Menu Option
      case 1:
         sub:
         system("cls");
         cout << "\n\t\t\t ----------- ADMINISTRATOR MENU ----------" << endl << endl;
         cout << endl << "\n\t\t ----------- ADD OPTION ----------" << endl;
         cout << "\n\t\t 1. New Student" << endl;
         cout << "\n\t\t 2. New Staff" << endl << endl;
         cout << endl << "\n\t\t ----------- DELETE OPTION ----------" << endl;
         cout << "\n\t\t 3. Delete Student or Staff" << endl;
         cout << "\n\n\n\t\t 4. Go to Main Menu" << endl;
         cout << endl << "\n\n\t\t Enter option: ";
         cin >> adminOption;

            while(adminOption >= 1 && adminOption <= 4){

               if(adminOption == 1){
                  system("cls");
                  cout << endl << "\n\t\t\t\t ----------- ADD OPTION ----------" << endl;
                  cout << "\n\n\t\t Enter the number of student[s] to record: ";
                  cin >> adminResponse;

                  if(adminResponse > TOTAL){
                     goto sub;
                  }

                  else{
                     addStudent(studentList, adminResponse);
                     cout << endl << "\n\n\t\t ***** Records sucessfully added *****" << endl;
                     cout << endl << "\n\n\t\t Enter [00] to go back or [99] to main menu: ";
                     cin >> backOption;

                     if(backOption == 00){
                        goto sub;
                     }

                     else
                        system("cls");
                        goto START;

                  }
               }

               if(adminOption == 2){
                  system("cls");
                  cout << endl << "\n\t\t\t ----------- ADD OPTION ----------" << endl;
                  cout << "\n\n\t\t Enter the number of staff[s] to record: ";
                  cin >> adminResponse;

                  if(adminResponse > TOTAL_){
                     goto sub;
                  }

                  else{
                     addStaff(staffList, adminResponse);
                     cout << endl << "\n\n\t\t ***** Records sucessfully added *****" << endl;
                     cout << endl << "\n\n\t\t Enter [00] to go back or [99] to main menu: ";
                     cin >> backOption;

                     if(backOption == 00){
                        goto sub;
                     }

                     else
                        system("cls");
                        goto START;

                  }

               }

               if(adminOption == 3){
                  system("cls");
                  cout << endl << "\n\t\t\t ----------- DELETE OPTION ----------" << endl;
                  cout << endl << "\n\n\t\t Enter [1] - Student OR [2] - Staff: ";
                  cin >> delOption;

                  if(delOption == 1) {
                     cout << endl << "\n\n\t\t Enter Student ID: ";
                     cin >> studentID;

                     showStudent(studentList, adminResponse, studentID);
                     cout << endl << "\n\n\t\t Do you delete the above record[s]?" << endl;
                     cout << "\n\n\t\t [1] - Yes OR [2] - No: ";
                     cin >> delOption;

                     if(delOption == 1){
                        deleteStudent(studentList, adminResponse, studentID);
                     }

                     else{
                        system("cls");
                        goto sub;
                     }

                  }

                  else {
                     cout << endl << "\n\n\t\t Enter Staff ID: ";
                     cin >> staffID;

                     showStaff(staffList, adminResponse, staffID);
                     cout << endl << "\n\n\t\t Do you delete the above record[s]?" << endl;
                     cout << "\n\n\t\t [1] - Yes OR [2] - No: ";
                     cin >> delOption;

                     if(delOption == 1)
                        deleteStaff(staffList, adminResponse, staffID);

                     else{
                       system("cls");
                       goto sub;
                     }


                  }

                  cout << endl << endl << "\n\t\t ***** Records sucessfully deleted *****" << endl;
                  cout << endl << "\n\t\t Enter [00] to go back or [99] to main menu: ";
                  cin >> backOption;

                     if(backOption == 00){
                        goto sub;
                     }

                     else{
                       system("cls");
                        goto START;
                     }

               }

               if(adminOption == 4){
                  system("cls");
                  goto START;
               }


            }

         break;

      // Student Menu Option
      case 2:
         sub1:
         cout << "\n\t\t\t\t ----------- STUDENT MENU ----------" << endl << endl;
         cout << endl << "\n\n\t\t Enter your Student ID: ";
         cin >> studentID;

            ch = 0;
            while(ch < TOTAL){

               if(studentList[ch].student_ID == studentID){
                 cout << "\n\n\n\t\t 1. View assigned course[s]" << endl;
                 cout << "\n\n\t\t 2. Edit personal information" << endl;
                 cout << "\n\n\t\t 3. Academic Report" << endl;
                 cout << "\n\n\t\t 4. Go back to Main Menu" << endl;
                 cout << "\n\n\t\t Enter option: ";
                 cin >> studOption;

                 system("cls");
                 if(studOption == 1){
                    cout << "\n\t\t\t ----------- COURSES ASSIGNED ----------" << endl << endl;
                    cout << left << setw(12) << "\n\n\t\t Course Code " << right << setw(18) << "\t\t\t\t\t\t Credit"
                    << "\n\t\t -------------------------------------------------------------------------------------------";

                    assignedCourses(studentList, studentID, TOTAL);
                 }

                 else if(studOption == 2){
                    cout << "\n\t\t\t ----------- EDIT PERSONAL INFORMATION ----------" << endl << endl;
                    showStudent(studentList, TOTAL, studentID);
                    cout << "\n\n\n\t\t Enter new phone number: ";
                    cin >> newNumber;
                    cout << "\n\n\t\t Enter new programme: ";
                    cin >> newProgram;

                    editStudent(studentList, studentID, newNumber, newProgram);
                    cout << endl << "\n\n\n\t\t ***** Records sucessfully edited *****" << endl;
                 }

                 else if(studOption == 3){
                    cout << "\n\t\t\t ----------- ACADEMIC REPORT ----------" << endl << endl;
                    displayReport(studentList, studentID);
                 }

                 else if (studOption == 4) {
                    system("cls");
                    goto START;
                 }

                 else{
                    cout << endl << "\n\n\t\t Incorrect option, enter the above number selection" << endl;
                    Sleep(5000);
                    goto sub1;
                 }

                 cout << endl << "\n\n\n\t\t Enter [00] to go back or [99] to main menu: ";
                 cin >> backOption;

                 if(backOption == 00){
                    system("cls");
                    goto sub1;
                 }

                 else{
                   system("cls");
                   goto START;
                 }

               }


               else{
                  cout << "\a\n\n\t\t Incorrect Student ID, check and enter again." << endl;
                  Sleep(5000);
                  system("cls");
                  goto sub1;
               }

               ch++;
               //break;
            }

         break;

      // Staff Menu Option
      case 3:
         sub2:
         cout << "\n\t\t\t ----------- STAFF MENU ----------" << endl << endl;
         cout << endl << "\n\n\t\t Enter your Staff ID: ";
         cin >> staffID;

            ch = 0;
            while(ch < TOTAL_){

               if(staffList[ch].staff_ID == staffID){
                 cout << "\n\n\n\t\t 1. Record student grade" << endl;
                 cout << "\n\n\t\t 2. Edit personal information" << endl;
                 cout << "\n\n\t\t 3. Go back to Main Menu" << endl;
                 cout << "\n\n\t\t Enter option: ";
                 cin >> stafOption;

                 system("cls");
                 if(stafOption == 1){
                    sub3:
                    cout << "\n\t\t\t ----------- RECORD STUDENT GRADE ----------" << endl << endl;
                    cout << "\n\n\t\t Enter the number of student[s] to record grade: ";
                    cin >> stafLength;

                    if(stafLength >= TOTAL){
                       cout << "\n\n\t\t\a Enter between 1 - 100" << endl;
                       Sleep(5000);
                       system("cls");
                       goto sub3;
                    }

                    else{
                       recordGrade(staffList, staffID, studentList, stafLength);
                       cout << endl << "\n\n\t\t ***** Grade[s] sucessfully recorded *****" << endl;
                    }
                 }

                 else if(stafOption == 2){
                    cout << "\n\t\t\t ----------- EDIT PERSONAL INFORMATION ----------" << endl << endl;
                    showStaff(staffList, TOTAL_, staffID);
                    cout << "\n\n\n\t\t Enter new phone number: ";
                    cin >> stafNumber;

                    editStaff(staffList, staffID, stafNumber);
                    cout << endl << "\n\n\t\t ***** Records sucessfully edited *****" << endl;
                 }

                 else if(stafOption == 3){
                    system("cls");
                    goto START;
                 }

                 else{
                    cout << endl << "\n\n\t\t Incorrect option, enter the above number selection" << endl;
                    Sleep(5000);
                    system("cls");
                    goto sub2;
                 }

                 cout << endl << "\n\n\t\t Enter [00] to go back or [99] to main menu: ";
                 cin >> backOption;

                 if(backOption == 00){
                    system("cls");
                    goto sub2;
                 }

                 else{
                   system("cls");
                   goto START;
                 }

               }


               else{
                  cout << "\a\n\n\t\t Incorrect Staff ID, check and enter again." << endl;
                  Sleep(5000);
                  system("cls");
                  goto sub2;
               }

               ch++;
               break;
            }

         break;

      case 4:
         cout << "\n\t\t\t ----------- EXIT APPLICATION ----------" << endl << endl;
         cout << "\n\n\t\t Do you want to exit the system [1] - YES OR [2] - NO? : ";
         cin >> exitOption;

         if(exitOption == 1){
            cout << endl << endl << endl;
            return 0;
         }

         else{
            system("cls");
            goto START;
         }

         break;

      default:
         cout << endl << "\n\n\t\t Invalid option, enter the following number option below" << endl;
         Sleep(5000);
         system("cls");
         goto START;

         break;
      }
}


/** Function Definition */

//Add student
void addStudent(studentData studentdata[], int length){
   srand(time(0));

   for(int i = 0; i < length; i++){
      studentdata[i].student_ID = (rand() % 1000) + 10152431;

      cout << endl << "\n\n\t\t Student " << i + 1  << " ID: " << studentdata[i].student_ID << endl;
      cout << "\n\n\t\t Firstname: ";
      cin >> studentdata[i].firstname;
      cout << "\n\n\t\t Lastname: ";
      cin >> studentdata[i].lastname;
      cout << "\n\n\t\t Sex [Male or Female]: ";
      cin >> studentdata[i].gender;
      cout << "\n\n\t\t Date of Birth [dd-mm-yyyy]: ";
      cin >> studentdata[i].dob;
      cout << "\n\n\t\t Phone Number: ";
      cin >> studentdata[i].number;
      cout << "\n\n\t\t Year[1, 2, 3, && 4]: ";
      cin >> studentdata[i].year;
      cout << "\n\n\t\t Programme" << endl << "\n\t\t 1. Computer Science" << endl << "\n\t\t 2. Mathematics" << endl << "\n\t\t 3. Statistics" << endl << "\n\t\t 4. Information Technology " << endl << "\n\n\t\t Option: ";
      cin  >> studentdata[i].program;

      switch(studentdata[i].program){
      case 1:
            studentdata[i].programme = "Computer Science";
         break;

      case 2:
            studentdata[i].programme = "Mathematics";
         break;

      case 3:
            studentdata[i].programme = "Statistics";
         break;

      case 4:
            studentdata[i].programme = "Information Technology";
         break;

      default:
            studentdata[i].programme = " ";
         break;
      }
      cout << endl << endl;
   }
}

//Add Staff
void addStaff(staffData staffdata[], int length){
   srand(time(0));

   for(int i = 0; i < length; i++){
      staffdata[i].staff_ID = (rand() % 1000) + 11060401;

      cout << endl << "\n\n\t\t Staff " << i + 1  << " ID: " << staffdata[i].staff_ID << endl;
      cout << "\n\n\t\t Firstname: ";
      cin >> staffdata[i].firstname;
      cout << "\n\n\t\t Lastname: ";
      cin >> staffdata[i].lastname;
      cout << "\n\n\t\t Sex [Male or Female]: ";
      cin >> staffdata[i].gender;
      cout << "\n\n\t\t Date of Birth [dd-mm-yyyy]: ";
      cin >> staffdata[i].dob;
      cout << "\n\n\t\t Phone Number: ";
      cin >> staffdata[i].number;
      cout << "\n\n\t\t Year assigned to teach [1, 2, 3, && 4]: ";
      cin >> staffdata[i].year;
      cout << "\n\n\t\t Specialist Field" << endl << "\n\t\t 1. Computer Science" << endl << "\n\t\t 2. Mathematics" << endl << "\n\t\t 3. Statistics" << endl << "\n\t\t 4. Information Technology " << endl << "\n\n\t\t Option: ";
      cin  >> staffdata[i].program;

      switch(staffdata[i].program){
      case 1:
            staffdata[i].programme = "Computer Science";
         break;

      case 2:
            staffdata[i].programme = "Mathematics";
         break;

      case 3:
            staffdata[i].programme = "Statistics";
         break;

      case 4:
            staffdata[i].programme = "Information Technology";
         break;

      default:
            staffdata[i].programme = " ";
         break;
      }
      cout << endl << endl;
   }
}

void showStudent(studentData studentdata[], int length, int id){

   for(int i = 0; i < length; i++){

      if((studentdata[i].student_ID != id)){
         continue;
      }
      cout << endl;
      cout << "\n\n\t\t Full Name: " << studentdata[i].lastname << ", " << studentdata[i].firstname << endl;
      cout << "\n\n\t\t Sex: " << studentdata[i].gender  << endl;
      cout << "\n\n\t\t Date of Birth: " << studentdata[i].dob << endl;
      cout << "\n\n\t\t Phone number: " << studentdata[i].number << endl;
      cout << "\n\n\t\t Year: " << studentdata[i].year << endl;
      cout << "\n\n\t\t Programme: " << studentdata[i].programme << endl;
   }
   cout << endl << endl;
}

void showStaff(staffData staffdata[], int length, int id){

   for(int i = 0; i < length; i++){

      if((staffdata[i].staff_ID != id)){
         continue;
      }
      cout << endl;
      cout << "\n\n\t\t Full Name: " << staffdata[i].lastname << ", " << staffdata[i].firstname << endl;
      cout << "\n\n\t\t Sex: " << staffdata[i].gender  << endl;
      cout << "\n\n\t\t Date of Birth: " << staffdata[i].dob << endl;
      cout << "\n\n\t\t Phone number: " << staffdata[i].number << endl;
      cout << "\n\n\t\t Year: " << staffdata[i].year << endl;
      cout << "\n\n\t\t Programme: " << staffdata[i].programme << endl;
   }
   cout << endl << endl;
}

void deleteStudent(studentData studentdata[], int length, int id){

   for(int i = 0; i < length; i++){
      if(studentdata[i].student_ID == id){
            studentdata[i].student_ID = 0;
            studentdata[i].firstname = "";
            studentdata[i].lastname = "";
            studentdata[i].gender = "";
            studentdata[i].dob = "";
            studentdata[i].number = 0;
            studentdata[i].year = 0;
            studentdata[i].program = 0;
            studentdata[i].programme = "";
      }

      else if(studentdata[i].student_ID == 0){
         cout << endl << "\n\n\t\t ****** No Records ******" << endl;
      }

      else
         break;

   }
   cout << endl << endl;
}

void deleteStaff(staffData staffdata[], int length, int id){

   for(int i = 0; i < length; i++){
      if(staffdata[i].staff_ID == id){
         staffdata[i].staff_ID = 0;
         staffdata[i].firstname = "";
         staffdata[i].lastname = "";
         staffdata[i].gender = "";
         staffdata[i].dob = "";
         staffdata[i].number = 0;
         cout << endl << "\n\n\t\t No Records" << endl;
      }

      else{
         cout << endl << "\n\n\t\t ****** No Records ******" << endl;
      }
   }
   cout << endl << endl;
}

void editStudent(studentData studentdata[], int id, int phone, string pChange){
   int i;

   i = 0;
   while(i){
      if(studentdata[i].student_ID == id){
         studentdata[i].number = 0;
         studentdata[i].number = phone;
         studentdata[i].programme = "";
         studentdata[i].programme = pChange;
      }

      else{
         break;
      }

      i++;
   }

   cout << endl << endl;
}

void editStaff(staffData staffdata[], int id, int phone){
   int i;

   i = 0;
   while(i){
      if(staffdata[i].staff_ID == id){
         staffdata[i].number = 0;
         staffdata[i].number = phone;
      }

      else{
         break;
      }
      i++;
   }
   cout << endl << endl;
}

void assignedCourses(studentData studentdata[], int id, int length){
   int j, i;

   i = 0, length = TOTAL;
   //sub1:
   for(i = 0; i < length; i++){ // while( i < length)
      while(studentdata[i].student_ID == id){

         switch(studentdata[i].year){

         // Year 1
         case 1:
            if(studentdata[i].programme == "Computer Science"){
               for(j = 0; j < number1; j++){
                  cout << left << setw(12) << "\n\n\t " << getComputer[j].year1[j] << right << setw(18)<< "\t " << getComputer[j].csCredit[j];
               }
            }

            else if(studentdata[i].programme == "Mathematics"){
               for(j = 0; j < number1; j++){
                  cout << left << setw(12) << "\n\n\t " << getMaths[j].year1[j] << right << setw(18)<< "\t " << getMaths[j].maCredit[j];
               }
            }

            else if(studentdata[i].programme == "Statistics"){
              for(j = 0; j < number1; j++){
                  cout << left << setw(12) << "\n\n\t " << getStat[j].year1[j] << right << setw(18)<< "\t " << getStat[j].staCredit[j];
               }
            }

            else{
               for(j = 0; j < number1; j++){
                  cout << left << setw(12) << "\n\n\t " << getInfo[j].year1[j] << right << setw(18)<< "\t " << getInfo[j].infoCredit[j];
               }
            }

            cout << endl;
            break;

            //Year 2
         case 2:
            if(studentdata[i].programme == "Computer Science"){
               for(j = 0; j < number1; j++){
                  cout << left << setw(12) << "\n\n\t " << getComputer[j].year2[j] << right << setw(18)<< "\t " << getComputer[j].csCredit[j];
               }
            }

            else if(studentdata[i].programme == "Mathematics"){
               for(j = 0; j < number1; j++){
                  cout << left << setw(12) << "\n\nsetw(18)\t " << getMaths[j].year2[j] << right << setw(18)<< "\t " << getMaths[j].maCredit[j];
               }
            }

            else if(studentdata[i].programme == "Statistics"){
              for(j = 0; j < number1; j++){
                  cout << left << setw(12) << "\n\n\t " << getStat[j].year2[j] << right << setw(18)<< "\t " << getStat[j].staCredit[j];
               }
            }

            else{
               for(j = 0; j < number1; j++){
                  cout << left << setw(12) << "\n\n\t " << getInfo[j].year2[j] << right << setw(18)<< "\t " << getInfo[j].infoCredit[j];
               }
            }
            cout << endl;
            break;


         // Year 3
         case 3:
            if(studentdata[i].programme == "Computer Science"){
               for(j = 0; j < number1; j++){
                  cout << left << setw(12) << "\n\n\t " << getComputer[j].year3[j] << right << setw(18)<< "\t " << getComputer[j].csCredit[j];
               }
            }

            else if(studentdata[i].programme == "Mathematics"){
               for(j = 0; j < number1; j++){
                  cout << left << setw(12) << "\n\n\t " << getMaths[j].year3[j] << right << setw(18)<< "\t " << getMaths[j].maCredit[j];
               }
            }

            else if(studentdata[i].programme == "Statistics"){
              for(j = 0; j < number1; j++){
                  cout << left << setw(12) << "\n\n\t " << getStat[j].year3[j] << right << setw(18)<< "\t " << getStat[j].staCredit[j];
               }
            }

            else{
               for(j = 0; j < number1; j++){
                  cout << left << setw(12) << "\n\n\t " << getInfo[j].year3[j] << right << setw(18)<< "\t " << getInfo[j].infoCredit[j];
               }
            }

            cout << endl;
            break;


         // Year 4
         case 4:
            if(studentdata[i].programme == "Computer Science"){
               for(j = 0; j < number1; j++){
                  cout << left << setw(12) << "\n\n\t " << getComputer[j].year4[j] << right << setw(18)<< "\t " << getComputer[j].csCredit[j];
               }
            }

            else if(studentdata[i].programme == "Mathematics"){
               for(j = 0; j < number1; j++){
                  cout << left << setw(12) << "\n\n\t " << getMaths[j].year4[j] << right << setw(18)<< "\t " << getMaths[j].maCredit[j];
               }
            }

            else if(studentdata[i].programme == "Statistics"){
              for(j = 0; j < number1; j++){
                  cout << left << setw(12) << "\n\n\t " << getStat[j].year4[j] << right << setw(18)<< "\t " << getStat[j].staCredit[j];
               }
            }

            else{
               for(j = 0; j < number1; j++){
                  cout << left << setw(12) << "\n\n\t " << getInfo[j].year4[j] << right << setw(18)<< "\t " << getInfo[j].infoCredit[j];
               }
            }

            cout << endl;
            break;


         default:
            cout << "\n\n\n\t\t **** You have not been assigned to any course[s] OR Check your student year status and enter again. *****" << endl;
            Sleep(5000);
            system("cls");
            //goto sub1;
            break;
         }

         i++;
         break;
      }

   }

}

void getGradePoint(){
   int j;

   for(j = 0; j < number1; j++){
      if(gpa[j].grade == "A" || gpa[j].grade == "a")
      gpa[j].gradePoint = 4.00;

      else if(gpa[j].grade == "B+" || gpa[j].grade == "b+")
         gpa[j].gradePoint = 3.50;

      else if(gpa[j].grade == "B" || gpa[j].grade == "b")
         gpa[j].gradePoint = 3.00;

      else if(gpa[j].grade == "C+" || gpa[j].grade == "c+")
         gpa[j].gradePoint = 2.50;

      else if(gpa[j].grade == "C" || gpa[j].grade == "c")
         gpa[j].gradePoint = 2.00;

      else if(gpa[j].grade == "D+" || gpa[j].grade == "d+")
         gpa[j].gradePoint = 1.50;

      else if(gpa[j].grade == "D" || gpa[j].grade == "d")
         gpa[j].gradePoint = 1.00;

      else if(gpa[j].grade == "E" || gpa[j].grade == "e")
         gpa[j].gradePoint = 0.50;

      else if(gpa[j].grade == "F" || gpa[j].grade == "f")
         gpa[j].gradePoint = 0.00;

      else
         gpa[j].gradePoint = 0.00;
   }

}

void recordGrade(staffData staffdata[], int id, studentData studentdata[], int length){

   int j, i, k;

   i = 0;

   while(i < TOTAL_ && i < TOTAL){

      if(staffdata[i].staff_ID == id){

         sub1:
         switch(staffdata[i].year){

         case 1:
            for(k = 0; k < length; k++){
               if((studentdata[i].programme == "Computer Science") && (staffdata[i].programme == "Computer Science")){
                  cout << "\n\n\n\t\t Student " << k + 1 << " ID: " << studentdata[k].student_ID << endl;

                  for(j = 0; j < number1; j++){
                     cout << "\n\t\t " << getComputer[j].year1[j] << ": ";
                     cin >> gpa[j].grade;
                     getGradePoint();
                  }
               }

               else if((studentdata[i].programme == "Mathematics") && (staffdata[i].programme == "Mathematics")){
                  cout << "\n\n\n\t\t Student " << k + 1 << " ID: " << studentdata[k].student_ID << endl;
                  for(j = 0; j < number1; j++){
                     cout << "\n\t\t " << getMaths[j].year1[j] << ": ";
                     cin >> gpa[j].grade;
                     getGradePoint();
                  }
               }

               else if((studentdata[i].programme == "Statistics") && (staffdata[i].programme == "Statistics")){
                  cout << "\n\n\n\t\t Student " << k + 1 << " ID: " << studentdata[k].student_ID << endl;
                  for(j = 0; j < number1; j++){
                     cout << "\n\t\t " << getStat[j].year1[j] << ": ";
                     cin >> gpa[j].grade;
                     getGradePoint();
                  }
               }

               else {
                  cout << "\n\n\n\t\t Student " << k + 1 << " ID: " << studentdata[k].student_ID << endl;
                  for(j = 0; j < number1; j++){
                     cout << "\n\t\t " << getInfo[j].year1[j] << ": ";
                     cin >> gpa[j].grade;
                     getGradePoint();
                  }
               }

            }

            break;

         case 2:
            for(k = 0; k < length; k++){
               if((studentdata[i].programme == "Computer Science") && (staffdata[i].programme == "Computer Science")){
                  cout << "\n\n\n\t\t Student " << k + 1 << " ID: " << studentdata[k].student_ID << endl;
                  for(j = 0; j < number1; j++){
                     cout << "\n\t\t " << getComputer[j].year2[j] << ": ";
                     cin >> gpa[j].grade;
                     getGradePoint();
                  }
               }

               else if((studentdata[i].programme == "Mathematics") && (staffdata[i].programme == "Mathematics")){
                  cout << "\n\n\n\t\t Student " << k + 1 << " ID: " << studentdata[k].student_ID << endl;
                  for(j = 0; j < number1; j++){
                     cout << "\n\t\t " << getMaths[j].year2[j] << ": ";
                     cin >> gpa[j].grade;
                     getGradePoint();
                  }
               }

               else if((studentdata[i].programme == "Statistics") && (staffdata[i].programme == "Statistics")){
                  cout << "\n\n\n\t\t Student " << k + 1 << " ID: " << studentdata[k].student_ID << endl;
                  for(j = 0; j < number1; j++){
                     cout << "\n\t\t " << getStat[j].year2[j] << ": ";
                     cin >> gpa[j].grade;
                     getGradePoint();
                  }
               }

               else {
                  cout << "\n\n\n\t\t Student " << k + 1 << " ID: " << studentdata[k].student_ID << endl;
                  for(j = 0; j < number1; j++){
                     cout << "\n\t\t " << getInfo[j].year2[j] << ": ";
                     cin >> gpa[j].grade;
                     getGradePoint();
                  }
               }
            }

            break;

         case 3:
            for(k = 0; k < length; k++){
               if((studentdata[i].programme == "Computer Science") && (staffdata[i].programme == "Computer Science")){
                  cout << "\n\n\n\t\t Student " << k + 1 << " ID: " << studentdata[k].student_ID << endl;
                  for(j = 0; j < number1; j++){
                     cout << "\n\t\t " << getComputer[j].year3[j] << ": ";
                     cin >> gpa[j].grade;
                     getGradePoint();
                  }
               }

               else if((studentdata[i].programme == "Mathematics") && (staffdata[i].programme == "Mathematics")){
                  cout << "\n\n\n\t\t Student " << k + 1 << " ID: " << studentdata[k].student_ID << endl;
                  for(j = 0; j < number1; j++){
                     cout << "\n\t\t " << getMaths[j].year3[j] << ": ";
                     cin >> gpa[j].grade;
                     getGradePoint();
                  }
               }

               else if((studentdata[i].programme == "Statistics") && (staffdata[i].programme == "Statistics")){
                  cout << "\n\n\n\t\t Student " << k + 1 << " ID: " << studentdata[k].student_ID << endl;
                  for(j = 0; j < number1; j++){
                     cout << "\n\t\t " << getStat[j].year3[j] << ": ";
                     cin >> gpa[j].grade;
                     getGradePoint();
                  }
               }

               else {
                  cout << "\n\n\n\t\t Student " << k + 1 << " ID: " << studentdata[k].student_ID << endl;
                  for(j = 0; j < number1; j++){
                     cout << "\n\t\t " << getInfo[j].year3[j] << ": ";
                     cin >> gpa[j].grade;
                     getGradePoint();
                  }
               }
            }
            break;

         case 4:
            for(k = 0; k < length; k++){
               if((studentdata[i].programme == "Computer Science") && (staffdata[i].programme == "Computer Science")){
                  cout << "\n\n\n\t\t Student " << k + 1 << " ID: " << studentdata[k].student_ID << endl;
                  for(j = 0; j < number1; j++){
                     cout << "\n\t\t " << getComputer[j].year4[j] << ": ";
                     cin >> gpa[j].grade;
                     getGradePoint();
                  }
               }

               else if((studentdata[i].programme == "Mathematics") && (staffdata[i].programme == "Mathematics")){
                  cout << "\n\n\n\t\t Student " << k + 1 << " ID: " << studentdata[k].student_ID << endl;
                  for(j = 0; j < number1; j++){
                     cout << "\n\t\t " << getMaths[j].year4[j] << ": ";
                     cin >> gpa[j].grade;
                     getGradePoint();
                  }
               }

               else if((studentdata[i].programme == "Statistics") && (staffdata[i].programme == "Statistics")){
                  cout << "\n\n\n\t\t Student " << k + 1 << " ID: " << studentdata[k].student_ID << endl;
                  for(j = 0; j < number1; j++){
                     cout << "\n\t\t " << getStat[j].year4[j] << ": ";
                     cin >> gpa[j].grade;
                     getGradePoint();
                  }
               }

               else {
                  cout << "\n\n\n\t\t Student " << k + 1 << " ID: " << studentdata[k].student_ID << endl;
                  for(j = 0; j < number1; j++){
                     cout << "\n\t\t " << getInfo[j].year4[j] << ": ";
                     cin >> gpa[j].grade;
                     getGradePoint();
                  }
               }
            }
            break;

         default:
            cout << "\n\n\n\t\t Enter your corresponding year assingned to and specialist field to record grade for approriate student" << endl;
            break;
         }
      }

      else{
         cout << "\n\n\n\t\t\a **** Incorrect Student ID. ****" << endl << endl;
         Sleep(5000);
         system("cls");
         goto sub1;
      }

      i++;
      break;
   }

}

int TotalCredit(){
   int credit = 0, j = 0;
   studentData studentdata[TOTAL];

   while(j < TOTAL){
      if(studentdata[j].programme == "Computer Science"){
         for(int i = 0; i < number1; i++){
            credit += getComputer[i].csCredit[i];
         }
      }

      else if(studentdata[j].programme == "Mathematics"){
         for(int i = 0; i < number1; i++){
            credit += getMaths[i].maCredit[i];
         }
      }

      else if(studentdata[j].programme == "Statistics"){
         for(int i = 0; i < number1; i++){
            credit += getStat[i].staCredit[i];
         }
      }

      else{
        for(int i = 0; i < number1; i++){
            credit += getInfo[i].infoCredit[i];
         }
      }

      j++;
      break;
   }


   return credit;
}

float TotalGradePoint(){
  int gradepoint = 0, j = 0;
   studentData studentdata[TOTAL];

   while(j < TOTAL){
      if(studentdata[j].programme == "Computer Science"){
         for(int i = 0; i < number1; i++){
            getGradePoint();
            gradepoint += (getComputer[i].csCredit[i] * gpa[i].gradePoint);
         }
      }

      else if(studentdata[j].programme == "Mathematics"){
         for(int i = 0; i < number1; i++){
            getGradePoint();
            gradepoint += (getMaths[i].maCredit[i] * gpa[i].gradePoint);
         }
      }

      else if(studentdata[j].programme == "Statistics"){
         for(int i = 0; i < number1; i++){
            getGradePoint();
            gradepoint += (getStat[i].staCredit[i] * gpa[i].gradePoint);
         }
      }

      else{
        for(int i = 0; i < number1; i++){
            getGradePoint();
            gradepoint += (getInfo[i].infoCredit[i] * gpa[i].gradePoint);
         }
      }

      j++;
      break;
   }


   return gradepoint;
}

float GradePointAverage(){
   float overallPerformance = 0.0;

   overallPerformance = TotalGradePoint() / TotalCredit();

   return overallPerformance;
}

string classObtained(){
   string classDivision = "";

   if(GradePointAverage() <= 4.00 && GradePointAverage() >= 3.60)
      classDivision = "First Class Division";

   else if(GradePointAverage() <= 3.50 && GradePointAverage() >= 3.00)
      classDivision = "Second Class Upper Division";

   else if(GradePointAverage() <= 2.99 && GradePointAverage() >= 2.00)
      classDivision = "Second Class Lower Division";

   else if(GradePointAverage() <= 1.99 && GradePointAverage() >= 1.00)
      classDivision = "Third Class Division";

   else if(GradePointAverage() <= 0.99 && GradePointAverage() >= 0.00)
      classDivision = "Fail";

   else
      classDivision = "N/A";

   return classDivision;
}

void displayReport(studentData studentdata[], int id){
   int i = 0;

   while(i < TOTAL){

      if(studentdata[i].student_ID == id){
         cout << fixed << showpoint << setprecision(1);

         cout << "\n\n\t\t Student ID: " << studentdata[i].student_ID << "\t Name: " << studentdata[i].lastname << ", " << studentdata[i].firstname << endl;
         cout << "\n\n -------------------------------------------------------------------------------------------------------------";
         cout << "\n\n Course[s]  \t\t\t\t\t\t Credit  \t\t Grade  \t Grade Point" << "\n\n -------------------------------------------------------------------------------------------------------------";

         switch(studentdata[i].year){

         case 1:
            getGradePoint();
            if(studentdata[i].programme == "Computer Science"){
               for(int j = 0; j < number1; j++){
                  cout << "\n\n\n " << left << setw(2) << getComputer[j].year1[j] << "\t\t " << right << setw(4) << getComputer[j].csCredit[j] << "\t\t " << setw(6) << gpa[j].grade << "\t "
                  << setw(12) << getComputer[j].csCredit[j] * gpa[j].gradePoint << " ";
               }
            }

            else if(studentdata[i].programme == "Mathematics"){
               for(int j = 0; j < number1; j++){
                  cout << "\n\n\n " << left << setw(2) << getMaths[j].year1[j] << "\t\t " << right << setw(4) << getMaths[j].maCredit[j] << "\t\t " << setw(6) << gpa[j].grade << "\t "
                  << setw(12) << getMaths[j].maCredit[j] * gpa[j].gradePoint << " ";
               }
            }

            else if(studentdata[i].programme == "Statistics"){
               for(int j = 0; j < number1; j++){
                  cout << "\n\n\n " << left << setw(2) << getStat[j].year1[j] << "\t\t " << right << setw(4) << getStat[j].staCredit[j] << "\t\t " << setw(6) << gpa[j].grade << "\t "
                  << setw(12) << getStat[j].staCredit[j] * gpa[j].gradePoint << " ";
               }
            }

            else{
               for(int j = 0; j < number1; j++){
                  cout << "\n\n\n " << left << setw(2) << getInfo[j].year1[j] << "\t\t " << right << setw(1) << getInfo[j].infoCredit[j] << "\t\t " << setw(6) << gpa[j].grade << "\t "
                  << setw(12) << getInfo[j].infoCredit[j] * gpa[j].gradePoint << " ";
               }
            }
            break;

         case 2:
            getGradePoint();
            if(studentdata[i].programme == "Computer Science"){
               for(int j = 0; j < number1; j++){
                  cout << "\n\n\n " << left << setw(2) << getComputer[j].year2[j] << "\t\t " << right << setw(4) << getComputer[j].csCredit[j] << "\t\t " << setw(6) << gpa[j].grade << "\t "
                  << setw(12) << getComputer[j].csCredit[j] * gpa[j].gradePoint << " ";
               }
            }

            else if(studentdata[i].programme == "Mathematics"){
               for(int j = 0; j < number1; j++){
                  cout << "\n\n\n " << left << setw(2) << getMaths[j].year2[j] << "\t\t " << right << setw(4) << getMaths[j].maCredit[j] << "\t\t " << setw(6) << gpa[j].grade << "\t "
                  << setw(12) << getMaths[j].maCredit[j] * gpa[j].gradePoint << " ";
               }
            }

            else if(studentdata[i].programme == "Statistics"){
               for(int j = 0; j < number1; j++){
                  cout << "\n\n\n " << left << setw(2) << getStat[j].year2[j] << "\t\t " << right << setw(4) << getStat[j].staCredit[j] << "\t\t " << setw(6) << gpa[j].grade << "\t "
                  << setw(12) << getStat[j].staCredit[j] * gpa[j].gradePoint << " ";
               }
            }

            else{
               for(int j = 0; j < number1; j++){
                  cout << "\n\n\n " << left << setw(2) << getInfo[j].year2[j] << "t\t " << right << setw(4) << getInfo[j].infoCredit[j] << "\t\t " << setw(6) << gpa[j].grade << "\t "
                  << setw(12) << getInfo[j].infoCredit[j] * gpa[j].gradePoint << " ";
               }
            }
            break;

         case 3:
            getGradePoint();
            if(studentdata[i].programme == "Computer Science"){
               for(int j = 0; j < number1; j++){
                  cout << "\n\n\n " << left << setw(2) << getComputer[j].year3[j] << "\t\t " << right << setw(4) << getComputer[j].csCredit[j] << "\t\t " << setw(6) << gpa[j].grade << "\t "
                  << setw(12) << getComputer[j].csCredit[j] * gpa[j].gradePoint << " ";
               }
            }

            else if(studentdata[i].programme == "Mathematics"){
               for(int j = 0; j < number1; j++){
                  cout << "\n\n\n " << left << setw(2) << getMaths[j].year3[j] << "\t\t " << right << setw(4) << getMaths[j].maCredit[j] << "\t\t " << setw(6) << gpa[j].grade << "\t "
                  << setw(12) << getMaths[j].maCredit[j] * gpa[j].gradePoint << " ";
               }
            }

            else if(studentdata[i].programme == "Statistics"){
               for(int j = 0; j < number1; j++){
                  cout << "\n\n\n " << left << setw(2) << getStat[j].year3[j] << "\t\t " << right << setw(4) << getStat[j].staCredit[j] << "\t\t " << setw(6) << gpa[j].grade << "\t "
                  << setw(12) << getStat[j].staCredit[j] * gpa[j].gradePoint << " ";
               }
            }

            else{
               for(int j = 0; j < number1; j++){
                  cout << "\n\n\n " << left << setw(2) << getInfo[j].year3[j] << "\t\t " << right << setw(4) << getInfo[j].infoCredit[j] << "\t\t " << setw(6) << gpa[j].grade << "\t "
                  << setw(12) << getInfo[j].infoCredit[j] * gpa[j].gradePoint << " ";
               }
            }
            break;

         case 4:
            getGradePoint();
            if(studentdata[i].programme == "Computer Science"){
               for(int j = 0; j < number1; j++){
                  cout << "\n\n\n " << left << setw(2) << getComputer[j].year4[j] << "\t\t " << right << setw(4) << getComputer[j].csCredit[j] << "\t\t " << setw(6) << gpa[j].grade << "\t "
                  << setw(12) << getComputer[j].csCredit[j] * gpa[j].gradePoint << " ";
               }
            }

            else if(studentdata[i].programme == "Mathematics"){
               for(int j = 0; j < number1; j++){
                  cout << "\n\n\n " << left << setw(2) << getMaths[j].year4[j] << "\t\t " << right << setw(4) << getMaths[j].maCredit[j] << "\t\t " << setw(6) << gpa[j].grade << "\t "
                  << setw(12) << getMaths[j].maCredit[j] * gpa[j].gradePoint << " ";
               }
            }

            else if(studentdata[i].programme == "Statistics"){
               for(int j = 0; j < number1; j++){
                  cout << "\n\n\n " << left << setw(2) << getStat[j].year4[j] << "\t\t " << right << setw(4) << getStat[j].staCredit[j] << "\t\t " << setw(6) << gpa[j].grade << "\t "
                  << setw(12) << getStat[j].staCredit[j] * gpa[j].gradePoint << " ";
               }
            }

            else{
               for(int j = 0; j < number1; j++){
                  cout << "\n\n\n " << left << setw(2) << getInfo[j].year4[j] << "\t\t " << right << setw(4) << getInfo[j].infoCredit[j] << "\t\t " << setw(6) << gpa[j].grade << "\t "
                  << setw(12) << getInfo[j].infoCredit[j] * gpa[j].gradePoint << " ";
               }
            }
            break;

         }

         cout << endl;
         cout << "\n\n -------------------------------------------------------------------------------------------------------------";
         cout << "\n\n\t\t\t\t\t  Total Credit : " << right << setw(3) << TotalCredit() << " \t\t\t     Total Grade Point : " << setw(4) << TotalGradePoint() << endl;
         cout << "\n\n\n\n\n\t\t Grade Point Average : " << right << setw(4) << GradePointAverage() << endl
         << right << " \n\n\t\t Class Obtained : " << setw(4) << classObtained() << endl;
      }

      else {
         cout << "\n\n\t\t ***** No records for the student ******" << endl;
      }

      i++;
      break;
   }

}

