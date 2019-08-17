#include<iostream>
#include<string.h>
#include<windows.h>
#include<conio.h>
#include<fstream>
using namespace std;
class feedback{
	char name[40];
	char last[40];
	char email[50];
	char id[10];
	int over,accu,bookpro,trans,eqp,safty,meal,money;
	char cmmnt[100];
	char other[100];
	public:
	void input()
	{
		system("cls");
		cout<<"\t\t\t\t\tTRAVEL BUDDY";
		cout<<"\n\t\t\t\t\tFEEDBACK FORM";
		cout<<"\n\nName:";
		cin>>name;
		cout<<"Last Name:";
		cin>>last;
		cout<<"Email:";
		cin>>email;
		cout<<"Travel ID:";
		cin>>id;
		cout<<"Trip Feedback:-";
		cout<<"\nYour overall experience:-\n1)Excellent\n2)Good\n3)Satisfactory\n4)Poor)\nYour choice:";
		cin>>over;
		Sleep(500);
		cout<<"\nThe comprehensiveness,clarity,and accuracy of the information provided on our website:-\n1)Excellent\n2)Good\n3)Satisfactory\n4)Poor)\nYour choice:";
		cin>>accu;
		Sleep(500);
		cout<<"\nThe booking process:-\n1)Excellent\n2)Good\n3)Satisfactory\n4)Poor)\nYour choice:";
		cin>>bookpro;
		Sleep(500);
		cout<<"\nThe transportation vehicle:-\n1)Excellent\n2)Good\n3)Satisfactory\n4)Poor)\nYour choice:";
		cin>>trans;
		Sleep(500);
		cout<<"\nEquipment you were provided with, if applicable:-\n1)Excellent\n2)Good\n3)Satisfactory\n4)Poor)\nYour choice:";
		cin>>eqp;
		Sleep(500);
		cout<<"\nTrip safety:-\n1)Excellent\n2)Good\n3)Satisfactory\n4)Poor)\nYour choice:";
		cin>>safty;
		Sleep(500);
		cout<<"\nMeals/lunch box that was included in your trip:-\n1)Excellent\n2)Good\n3)Satisfactory\n4)Poor)\nYour choice:";
		cin>>meal;
		Sleep(500);
		cout<<"\nThis trip in terms of value for money:-\n1)Excellent\n2)Good\n3)Satisfactory\n4)Poor)\nYour choice:";
		cin>>money;
		Sleep(500);
		cout<<"\nOther comments or suggestions:-\n";
		cin.getline(cmmnt,100);
		Sleep(500);
		cout<<"\nWhat other trips would you like to see us organize?";
		cin.getline(other,100);
		Sleep(500);
		
	
	}
	void print(){
        system("cls");
		cout<<"\t\t\t\t\tTRAVEL BUDDY";
		cout<<"\n\t\t\t\t\tFEEDBACK FORM";
		cout<<"\n\nName:"<<name<<" "<<last<<endl;
		cout<<"Email:"<<email<<endl;
		cout<<"Travel ID:";
		cout<<id<<endl;
		Sleep(750);
		cout<<"Trip Feedback:-"<<endl<<endl<<endl;
		cout<<"\nYour overall experience:-\n1)Excellent\n2)Good\n3)Satisfactory\n4)Poor)\nYour choice:";
		cout<<over<<endl;
		cout<<"\nThe comprehensiveness,clarity,and accuracy of the information provided on our website:-\n1)Excellent\n2)Good\n3)Satisfactory\n4)Poor)\nYour choice:";
		cout<<accu<<endl;
		Sleep(500);
		cout<<"\nThe booking process:-\n1)Excellent\n2)Good\n3)Satisfactory\n4)Poor)\nYour choice:";
		cout<<bookpro<<endl;
		Sleep(500);
		cout<<"\nThe transportation vehicle:-\n1)Excellent\n2)Good\n3)Satisfactory\n4)Poor)\nYour choice:";
		cout<<trans<<endl;
		Sleep(500);
		cout<<"\nEquipment you were provided with, if applicable:-\n1)Excellent\n2)Good\n3)Satisfactory\n4)Poor)\nYour choice:";
		cout<<eqp<<endl;
		Sleep(500);
		cout<<"\nTrip safety:-\n1)Excellent\n2)Good\n3)Satisfactory\n4)Poor)\nYour choice:";
		cout<<safty<<endl;
		Sleep(500);
		cout<<"\nMeals/lunch box that was included in your trip:-\n1)Excellent\n2)Good\n3)Satisfactory\n4)Poor)\nYour choice:";
		cout<<meal<<endl;
		Sleep(500);
		cout<<"\nThis trip in terms of value for money:-\n1)Excellent\n2)Good\n3)Satisfactory\n4)Poor)\nYour choice:";
		cout<<money<<endl;
		Sleep(500);
		cout<<"\nOther comments or suggestions:-\n";
		cout.write(cmmnt,30);
		Sleep(500);
		cout<<"\nWhat other trips would you like to see us organize?";
		cout.write(other,30);
		Sleep(500);
}
};			
void loading()
{
    for(int i=1;i<=50;i++)
    { system("cls");
    int delay;
  cout<<"\n\n\n\n\t\t\t\t   Loading "<<'\n'<<'\t'<<'\t';
 for(int j=1;j<=i;j++)
  cout<<"²";
  cout<<"\n\n\t "<<2*i<<"%";
 if( i > 1 && i < 20)
  cout<<"\n\n\tConnecting to server";
 else if( i > 20 && i<40)
  cout<<"\n\n\tEstablishing Network with server";
 else if(i >40 && i<48)
  cout<<"\n\n\tOpening Feedbackfile";
 else cout<<"\n\n\tComplete. Press Enter to Continue ";
  Sleep(150 - i*3);
    }
}
int main()
{
    fstream myfile;
    feedback feed;
    loading();
    myfile.open ("Feedback.txt");
    feed.input();
    myfile.write((char*)&feed,sizeof(feed));
    myfile.close();
    system("cls");
    cout<<"\n\n\t\tThank you for your valuable feedback!!!";
    cout<<"\n\n\t\tPress enter to see the feedback form...";
    cin.ignore();
    cin.ignore();
    myfile.open ("Feedback.txt");
	myfile.read((char*)&feed,sizeof(feed));
    feed.print();
    myfile.close();
    cout<<"Press enter to exit from Feedback Form page..";
    return 0;	
}
