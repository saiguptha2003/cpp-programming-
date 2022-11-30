#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<cstring>
#include<cstdio>
#include<windows.h>
#include<unistd.h>
using namespace std;

class employee{
    private:
        // Variables for employee details
        char name[30];
        char id[5];
        char designation[10];
        int age;
        int ctc;
        int experience;

        // Utility functions
        void waitForEnter(void){
            cout<<"\n\n\n Press enter to go back \n\n";
            cin.get();
            cin.get();
        }

        // Functions to perform desired actions
        void listEmployees(void){ //To list total employees with Name, Id and Designation
            system("cls");
            FILE *file;
            file= fopen("data.txt", "r");
            cout<<"\n\t      List of Employees\n";
            cout<<"\n----------------------------------------------";
            cout<<"\n NAME        |     ID     |     DESIGNATION\n";
            cout<<"----------------------------------------------";
            while(fscanf(file, "%s %s %s %d %d %d", &name[0], &id[0] , &designation[0], &age, &ctc, &experience)!= EOF)
                cout<<"\n"<<name<<"\t\t"<<id<<"\t\t"<<designation;
            fclose(file);
            waitForEnter();
        }

        void showDetails(void){ //Displays all details according to Employee's id
            system("cls");//function to clear the console screen
            FILE *file;
            char checkId[5];
            cout<<"\n\nEnter Employee ID: ";
            cin>>checkId;
            file= fopen("data.txt", "r");
            while(fscanf(file, "%s %s %s %d %d %d", &name[0], &id[0] , &designation[0], &age, &ctc, &experience)!=EOF)
                if(strcmp(checkId,id)==0){//strcmp compares the two strings which is placed in the arguments if same return 0 else return 1
                	cout<<"\n---------------------";
                    cout<<"\nName: "<<name;
                    cout<<"\n---------------------";
                    cout<<"\nId: "<<id;
                    cout<<"\n---------------------";
                    cout<<"\nDesignation: "<<designation;
                    cout<<"\n---------------------";
                    cout<<"\nAge: "<<age;
                    cout<<"\n---------------------";
                    cout<<"\nCTC: "<<ctc;
                    cout<<"\n---------------------";
                    cout<<"\nExperience: "<<experience;
                    cout<<"\n---------------------";
                }
            fclose(file);//funciton to close the opened file
            waitForEnter();
        }

        void editExisting(void){ //edits Designation and CTC of an employee
            system("cls");
            char checkId[5];//utility variable to check the file
            cout<<"\nEnter employee id: ";
            cin>>checkId;
            char newDesignation[10];//same as above
            cout<<"\n-----------------------------";
            cout<<"\nEnter new designation: ";
            cin>>newDesignation;
            int newCtc;
            cout<<"------------------------------";
            cout<<"\nEnter new CTC: ";
            cin>>newCtc;
            FILE *file, *tempfile;// file pointers to point the files
            file= fopen("data.txt", "r");// read mode
            tempfile= fopen("temp.txt", "w");//write  mode
            while(fscanf(file, "%s %s %s %d %d %d", &name[0], &id[0] , &designation[0], &age, &ctc, &experience)!=EOF){
                if(strcmp(checkId, id)==0)
                    fprintf(tempfile, "%s %s %s %d %d %d \n", name, id, newDesignation, age, newCtc, experience );// changes the existing information
                else
                    fprintf(tempfile, "%s %s %s %d %d %d \n", name, id, designation, age, ctc, experience );//copy the data to the temp file
            }
            fclose(file);
            fclose(tempfile);
            int isRemoved= remove("data.txt");//remove the data.txt file which is previously created
            int isRenamed= rename("temp.txt", "data.txt");// raname the temp file as data.txt
            waitForEnter();
        }

        void addNewEmployee(void){ //adding records
            system("cls");
            cout<<"\n----------------------------------------";
            cout<<"\n Enter First Name of Employee: ";
            cin>>name;
            cout<<"\n----------------------------------------";
            cout<<"\n Enter Employee ID [max 4 digits]: ";
            cin>>id;
            cout<<"\n----------------------------------------";
            cout<<"\n Enter Designation: ";
            cin>>designation;
            cout<<"\n----------------------------------------";
            cout<<"\n Enter Employee Age: ";
            cin>>age;
            cout<<"\n----------------------------------------";
            cout<<"\n Enter Employee CTC: ";
            cin>>ctc;
            cout<<"\n----------------------------------------";
            cout<<"\n Enter Employee Experience: ";
            cin>>experience;
            cout<<"\n----------------------------------------";

            char ch;
            cout<<"\nEnter 'y' to save above information\n";
            cin>>ch;
            if(ch=='y'){
                FILE  *file;
                file= fopen("data.txt","a");// file opened in append mode so the data is added at last
                fprintf(file, "%s %s %s %d %d %d \n", name, id, designation, age, ctc, experience );//create a new employee row at the last
                fclose(file);//closes the file
                cout<<"\nNew Employee has been added to database\n";
            }
            else
                addNewEmployee();
            waitForEnter();
        }

        void deleteEmployeeDetails(void){ //removing records
            system("cls");
            char checkId[5];
            cout<<"\n----------------------------------";
            cout<<"\nEnter Employee Id To Remove: ";
            cin>>checkId;
            char ch;
            cout<<"----------------------------------";
            cout<<"\n\n\n\n\nCONFIRMATION\nEnter 'y' To Confirm Deletion \n";
            cin>>ch;
            if(ch=='y'){
                FILE *file, *tempfile;
                file= fopen("data.txt", "r");
                tempfile= fopen("temp.txt", "w");
                while(fscanf(file, "%s %s %s %d %d %d", &name[0], &id[0] , &designation[0], &age, &ctc, &experience)!=EOF)
                    if(strcmp(checkId, id)!=0)// check the data which is in data file so the id matched row will not be added
                        fprintf(tempfile, "%s %s %s %d %d %d \n", name, id, designation, age, ctc, experience );
                fclose(file);
                fclose(tempfile);
                int isRemoved= remove("data.txt");
                int isRenamed= rename("temp.txt", "data.txt");
                cout<<"\nRemoved Successfully\n";
                waitForEnter();
            }
            else
                deleteEmployeeDetails();
        }


    public:
        // Function to serve as end point
        void options(void){ //menu
        int login(); //login declaration
                login();//login screen
            while(true){
                system("cls");

                // Options to choose an action
                cout<<"\n\t\t\t>>>>>>>>>  EMPLOYEE MANAGEMENT SYSTEM  <<<<<<<<<";
                cout<<"\n";
                cout<<"\n\t\t\t------------------------------------------------";
                cout<<"\n\t\t\tENTER   1:   To View List of Employees";
                cout<<"\n\t\t\t------------------------------------------------";
                cout<<"\n\t\t\tENTER   2:   To View Employee Details";
                cout<<"\n\t\t\t------------------------------------------------";
                cout<<"\n\t\t\tENTER   3:   To Modify Existing Employee Details";
                cout<<"\n\t\t\t------------------------------------------------";
                cout<<"\n\t\t\tENTER   4:   To Add New Employee Details";
                cout<<"\n\t\t\t------------------------------------------------";
                cout<<"\n\t\t\tENTER   5:   To Remove an Employee Details";
                cout<<"\n\t\t\t------------------------------------------------";
                cout<<"\n\t\t\tENTER   0:   To Exit     ";
                cout<<"\n\t\t\t------------------------------------------------";
                cout<<"\n\n\t\t\t   Please Enter Your Choice: ";

                // Taking the action input
                int choice;
                cin>>choice;
                // Calling relevant function as per choice
                switch (choice) {
                    case 0:
                    	system("CLS");
                        cout<<"\n\nEMPLOYEE MANAGEMENT SYSTEM \n\n Brought To You By group 6 section B cse\n\n ";
                        Sleep(10);
                        return;
                    case 1:
                        listEmployees();
                        break;
                    case 2:
                        showDetails();
                        break;
                    case 3:
                        editExisting();
                        break;
                    case 4:
                        addNewEmployee();
                        break;
                    case 5:
                        deleteEmployeeDetails();
                        break;
                    default:
                        cout<<"\n Sorry! enter the correct choice \n";
                        break;
                }

            }
        }

};

int main(){
    // Call the options function
    employee e;
    e.options();
    return 0;
}

int login(){ //login procedure
   string pass ="";
   char ch;
   cout <<"\n\n\n\n\t\t\t\t\tEMPLOYEE MANAGEMENT SYSTEM";
   cout <<"\n\n\n\n\n\t\t\t\t\tEnter Your Password :";
   ch = _getch();
   while(ch != 13){//character 13 is enter
      pass.push_back(ch);
      cout << '*';
      ch = _getch();
   }
   if(pass == "pass"){
   	cout<<"\n\n\n\t\t\t\t\tLOADING \n\t\t\t\t\t";
   	for(int a=1;a<8;a++) // Change 'a<?' to how many * you want
	{
		Sleep(500);
		cout << "...";
	}
      cout << "\n\n\n\t\t\t\t\tAccess Granted!! \n\n\n";

      system("PAUSE");
      system("CLS");
   }else{
      cout << "\nAccess Aborted...\n";
      login();
   }
   return 0;
}
