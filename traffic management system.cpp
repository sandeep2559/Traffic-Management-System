#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<fstream>
#include<string.h>
using namespace std;
class traffic
{
	char name[30];//owner name
	char num_plate[30];//number on plate
	char model[30];
	int wheeler;
	char phno[20];
	char insured;
   public:
       void add();
       void del();
       void display();
       void search();
	int uid;
	int d;
	void getdata()
	{
	    cout<<endl;
	    cout<<"==========================================================";
	    cout<<endl;
	    cout<<"Enter UID of vehicle::";
	    cin>>uid;
	    cout<<endl;
	    fflush(stdin);
       cout<<"Enter Name of owner::";
        gets(name);
        cout<<endl;
      do{                                   //Wrong phone exception
        cout<<"Enter your Phone no::";
        cin>>phno;
        cout<<endl;
        d=strlen(phno);
        if(d<10||d>10)
        cout<<"Your phone number is wrong"<<endl;
       }while(d<10||d>10);
         cout<<"Enter the wheeler type of your vehicle::";
         cin>>wheeler;
         fflush(stdin);
         cout<<endl<<"Enter Model of your "<<wheeler<<" Wheeler::";
         gets(model);
         fflush(stdin);
         cout<<endl<<"Enter Number of your Number Plate::";
         gets(num_plate);
         cout<<endl;
         cout<<"The vehicle is insured or not(y/n)::";
         cin>>insured;
	}
	void putdata()
	{
	    cout<<endl;
		cout<<" UID :"<<uid;
		cout<<endl;
		cout<<endl<<" NAME OF OWNER:";
		puts(name);
		cout<<endl<<" NUMBER OF VEHICLE:";
		puts(num_plate);
		cout<<endl<<" MODEL NAME:";
		puts(model);
		cout<<endl<<" INSURANCE STATUS:"<<insured<<endl;
		cout<<endl<<" CONTACT:";
		puts(phno);
		cout<<endl;
		cout<<"=========================================================";
	}
};

void add()
{
	traffic ob;
    ob.getdata();
	ofstream file;
	file.open("data",ios::app|ios::out);//opened file for writing
	file.write((char*)&ob,sizeof(ob));//1st argument is where the data is kept and 2nd is size of which we have to write data
    file.close();
    cout<<"Your record has been created!!";
}

void display()
{
	traffic ob;
	ifstream file;
	file.open("data",ios::in);
	file.seekg(0,ios::beg);
    while(file.read((char*) &ob,sizeof(ob)))
    ob.putdata();
    file.close();
}
void search(){
	int uid;
	cout<<"\n Enter uid no to search: ";
	cin>>uid;
	cout<<"=============================================================";
	traffic ob;
	fstream file;
	file.open("data",ios::in);
	file.seekg(0,ios::beg);
	while(file.read((char*) &ob,sizeof(ob)))
        {
	if(ob.uid==uid)
	{
		ob.putdata();
	}
	}
    file.close();
}
void del()
{
traffic ob;
int uid;
cout<<"\n\nPlease Enter The uid number of the record::";
cin>>uid;
ifstream fp1;
fp1.open("data",ios::in|ios::out);
fstream fp2;
fp2.open("Temp.dat",ios::out);
fp1.seekg(0,ios::beg);
while(fp1.read((char*)&ob,sizeof(ob)))
{
if(ob.uid!=uid)
{
fp2.write((char*)&ob,sizeof(ob));//writing in temp file
}
}
fp2.close();
fp1.close();
remove("data");
rename("Temp.dat","data");
cout<<"\n\n\tRecord Deleted ..";
}
void intro()
{
 cout<<"================================================================================"<<endl;
cout<<"                           ||  TRAFFIC MANAGEMENT  SYSTEM   ||                                          "<<endl;
cout<<"================================================================================";
cout<<endl<<endl<<endl<<endl;
cout<<"PROJECT";
cout<<"\n\nMADE BY : Sandeep Kumar  11810757";
cout<<"\n\nLovely Professional university  "<<endl;
cout<<"Click any key to continue....";
getch();
cout<<endl;
cout<<"#############################################";
system("CLS");
}
int rate()
{
    int  v;
    do
    {
    cout<<"PLEASE ENTER NUMBER OF STARS OUT OF 5"<<endl;
    cin>>v;
    if(v<1||v>5)
        cout<<"wrong choice enter between 1 to 5"<<endl;
    }while(v<1||v>5);
    if(v==4||v==5)
        cout<<"ACCELLENT THANK YOU FOR RATING "<<endl;
    else if(v==2||v==3)
        cout<<"AVERAGE THANK YOU WE WILL TRY MORE!!!"<<endl;
    else
        cout<<"OK SORRY FOR YOUR INCONVINENCE     we will try from next our level bevt"<<endl;
    start:
    cout<<"thank you byeee!!!!!!!!!!!!!!!!!!!!   "<<endl;
}
void helpline()
{
			system("CLS");

			cout<<"Nearby Hospitals:"<<endl<<"LPU Uni Hospital : +91 0182 450 1227"<<endl<<"Chanan Ram Sampla Memorial Hospital: +91 094176 37006"<<endl<<"Cantt General Hospital: +91 0181 226 0028";
		cout<<endl<<"=====================================================";
		}

int main()
{
    system("COLOR 02");
    // Section for authorization
     string userinput; // this is the user's guess
    string password = "lovely"; // this is the actual password
    cout << "Enter password: ";
    cin >> userinput;
    if (userinput != password)
        { cout << "Password Invalid..."<<endl;
        exit(0);
    }

    cout << "Password Accepted... ";
        cout<<endl<<"WELCOME";
        cout<<endl;
        cout<<"Press any key to continue..";
        getch();
        system("CLS");
        intro();

int x;
    while(1)
{        cout<<endl;
     cout<<"            -->1.Add \n";
	 cout<<"            -->2.Delete \n";
	 cout<<"            -->3.Display \n";
	 cout<<"            -->4.Query \n";
	 cout<<"            -->5.Rate our app \n";
	 cout<<"            -->6.Helpline \n";
	 cout<<"            -->7.Exit \n";
        cout<<"         -->Enter choice :";
       cin>>x;
     switch(x)
     {
     	case 1: add();
     	break;
        case 2: del();
		break;
     	case 3: display();
     	 break;
     	case 4: search();
     	 break;
     	case 5: rate();
     	  break;
         case 6:helpline();
     	 break;
     	 case  7:exit(0);
        default:
            cout<<"wrong input";

	 }
   }
    return 0;
}

