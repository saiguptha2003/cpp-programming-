#include<iostream>
#include<cstdlib>
#include<cstring>
#include<cstdio>
#include<fstream>
using namespace std;
using std::cerr;
void create_user()
{
     string name;
     string password;
     cout << ".........USER ENTERY........." << endl;
     cout << "enter new user :";
     cin >> name;
     cout << "enter password :" << endl;
     cin >> password;
     ofstream file;
     file.open("faculty.txt", ios::app);
     if (!file)
     {
          cerr << "Error file not be opened...." << endl;
          exit(1);
     }
     file << name << " " << password << endl;
     file.close();
}
int checkpassword(char fname[20],char fans[20])
{
     char name[20];
     char password[20];
     char ans[20];
     FILE *file;
     file=fopen("faculty.txt","r");
     while(fscanf(file,"%s %s",&name,&password)!=EOF)
     {
          if(strcmp(name,fname)==0)
          {
               strcpy(ans,password);
               break;
          }
     }
     if(strcmp(fans,ans)==0)
     {
          return 1;
     }
     return -1;
}
void roomsview()
{
     FILE *file;
     char room[10];
     char date[20];
     char time[10];
     char status[20];
     file=fopen("classrooms.txt","r");
     cout<<"room        "<<"date           "<<"time     "<<"roomstatus"<<endl;
     while(fscanf(file,"%s %s %s %s",&room,&date,&time,&status)!=EOF)
     {
          cout<<room<<"       "<<date<<"     "<<time<<"     "<<status<<endl;
     }
}
void roomcheckandbook()
{
     cout<<"enter time :";
     char time[10];
     char date[20];
     cin>>time;
     cout<<"enter date :";
     cin>>date;
     FILE *file;
     file=fopen("classrooms.txt","r");
     char room[10];
     char ftime[10];
     char fdate[20];
     char fstatus[20];
     int count=0;
     char f[4]="vac";
     cout<<"room        "<<"date           "<<"time"<<" status"<<endl;
     while(fscanf(file,"%s %s %s %s",&room,&fdate,&ftime,&fstatus)!=EOF)
     {

          if(strcmp(ftime,time)==1 && strcmp(fdate,date)==0 && strcmp(fstatus,f)==0)
          {
               cout<<room<<"       "<<fdate<<"     "<<ftime<<"   "<<fstatus<<endl;
               count=1;
          }
     }
     fclose(file);
     char s[10];
     if(count==1){
     cout<<"enter room to confirm :";
     cin>>s;
     FILE *temp;
     temp=fopen("temp.txt","w");
     file=fopen("classrooms.txt","r");
      while(fscanf(file,"%s %s %s %s",&room,&fdate,&ftime,&fstatus)!=EOF)
     {
          if(strcmp(s,room)==0)
                    fprintf(temp, "%s %s %s %s \n",room,fdate,time,"con");
                else
                    fprintf(temp, "%s %s %s %s \n",room,fdate,ftime,fstatus);
     }
     fclose(temp);
     fclose(file);
     int isRemoved= remove("classrooms.txt");
     int isRenamed= rename("temp.txt", "classrooms.txt");
     cout<<"class room is booked........."<<endl;
     system("pause");
     }
}
int  checkfacultyuser()
{
     cout<<"...LOGIN..."<<endl;
     char name[20];
     char password[20];
     char original[20];
     cout<<"enter username:";
     cin>>name;
     cout<<"enter password:";
     cin>>password;
     if(checkpassword(name,password)==1)
     {
          cout<<"correct password"<<endl;
          system("pause");
          system("cls");
          return 1;
     }
     return -1;
}

void lab_user_user()
{
     string name;
     string password;
     cout << ".........LAB USER ENTERY........." << endl;
     cout << "enter new user :";
     cin >> name;
     cout << "enter password :" << endl;
     cin >> password;
     ofstream file;
     file.open("labfaculty.txt", ios::app);
     if (!file)
     {
          cerr << "Error file not be opened...." << endl;
          exit(1);
     }
     file << name << " " << password << endl;
     file.close();
}
int labcheckpassword(char fname[20],char fans[20])
{
     char name[20];
     char password[20];
     char ans[20];
     FILE *file;
     file=fopen("labfaculty.txt","r");
     while(fscanf(file,"%s %s",&name,&password)!=EOF)
     {
          if(strcmp(name,fname)==0)
          {
               strcpy(ans,password);
               break;
          }
     }
     if(strcmp(fans,ans)==0)
     {
          return 1;
     }
     return -1;
}
void labroom()
{
     cout<<"enter time :";
     char time[10];
     char date[20];
     cin>>time;
     cout<<"enter date :";
     cin>>date;
     FILE *file;
     file=fopen("labroom.txt","r");
     char room[10];
     char ftime[10];
     char fdate[20];
     char fstatus[20];
     int count=0;
     char f[4]="vac";
     cout<<"room        "<<"date           "<<"time"<<" status"<<endl;
     while(fscanf(file,"%s %s %s %s",&room,&fdate,&ftime,&fstatus)!=EOF)
     {

          if(strcmp(ftime,time)==1 && strcmp(fdate,date)==0 && strcmp(fstatus,f)==0)
          {
               cout<<room<<"       "<<fdate<<"     "<<ftime<<"   "<<fstatus<<endl;
               count=1;
          }
     }
     fclose(file);
     char s[10];
     if(count==1){
     cout<<"enter room to confirm :";
     cin>>s;
     FILE *temp;
     temp=fopen("temp.txt","w");
     file=fopen("labroom.txt","r");
      while(fscanf(file,"%s %s %s %s",&room,&fdate,&ftime,&fstatus)!=EOF)
     {
          if(strcmp(s,room)==0)
                    fprintf(temp, "%s %s %s %s \n",room,fdate,time,"con");
                else
                    fprintf(temp, "%s %s %s %s \n",room,fdate,ftime,fstatus);
     }
     fclose(temp);
     fclose(file);
     int isRemoved= remove("labroom.txt");
     int isRenamed= rename("temp.txt", "classrooms.txt");
     cout<<"class room is booked........."<<endl;
     system("pause");
     }
}
int  checklabfacultyuser()
{
     cout<<"...LOGIN..."<<endl;
     char name[20];
     char password[20];
     char original[20];
     cout<<"enter username:";
     cin>>name;
     cout<<"enter password:";
     cin>>password;
     if(checkpassword(name,password)==1)
     {
          return 1;
     }
     return -1;
}
void labroomsview()
{
     FILE *file;
     char room[10];
     char date[20];
     char time[10];
     char status[20];
     file=fopen("labrooms.txt","r");
     cout<<"labno       "<<"date           "<<"time     "<<"roomstatus"<<endl;
     while(fscanf(file,"%s %s %s %s",&room,&date,&time,&status)!=EOF)
     {
          cout<<room<<"       "<<date<<"     "<<time<<"     "<<status<<endl;
     }
}
void room()
{
     cout<<"CLASS ROOM MANAGEMENT\n\n"<<endl;
     cout<<"1.veiw all classrooms"<<endl;
     cout<<"2.check and update rooms"<<endl;
     cout<<"3.new user entry"<<endl;
     cout<<"4.exit"<<endl;
     cout<<endl;
     int choice;
     cout<<"enter the choice";
     cin>>choice;
     switch (choice)
     {
          case 1:
          system("cls");
          cout<<"all class rooms present in srmap\n"<<endl;
          roomsview();
          system("pause");
          break;
          case 2:
          system("cls");
          cout<<"check and update classrooms\n\n"<<endl;
          roomcheckandbook();
          system("pause");
          break;
          case 3:
          system("cls");
          cout<<"new user entry"<<endl;
          create_user();
          system("cls");
          break;
          case 4:
          exit(0);
     default:
     cout<<"enter the correct choice"<<endl;
          break;
     }
}
void lab()
{
     cout<<"LAB MANAGEMENT\n\n"<<endl;
     cout<<"1.veiw all Labrooms"<<endl;
     cout<<"2.check and update Lab"<<endl;
     cout<<"3.new lab user entry"<<endl;
     cout<<"4.exit"<<endl;
     cout<<endl;
     int choice;
     cout<<"enter choice : ";
     cin>>choice;
     switch (choice)
     {
          case 1:
          system("cls");
          cout<<"all lab rooms present in srmap\n"<<endl;
          labroomsview();
          system("pause");
          break;
          case 2:
          system("cls");
          cout<<"check and update labrooms\n\n"<<endl;
          labroom();
          system("pause");
          break;
          case 3:
          system("cls");
          cout<<"new lab user entry"<<endl;
          lab_user_user();
          system("cls");
          break;
          case 4:
          exit(0);
     default:
     cout<<"enter the correct choice"<<endl;
          break;
     }
}
void cinterface()
{
     cout<<"SRM CLASSROOMS AND MANAGEMENT SYSTEM"<<endl;
     cout<<"1.LAB"<<endl;
     cout<<"2.CLASS ROOMS"<<endl;
     cout<<"3.EIXT"<<endl;
     cout<<endl;
     int choice;
     cout<<"enter choice :";
     cin>>choice;
     switch(choice)
     {
          case 1:
          system("cls");
          if(checklabfacultyuser()==1)
          lab();
          else
          cout<<"wrong correct password.."<<endl;
          system("pause");
          break;
          case 2:
          if(checkfacultyuser()==1)
          room();
          else
                    cout<<"wrong correct password.."<<endl;
                    break;
          case 3:
          exit(0);
     }
     
}
int main()
{
     cinterface();
}