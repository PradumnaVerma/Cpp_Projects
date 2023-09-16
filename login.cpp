#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

void login();
void registration();
void forgot();

int main()
{
	int c;
	cout<<"\t\t\t__________________________________________________\n\n\n";
	cout<<"\t\t\t               Welcome to the login Page          \n\n\n";
	cout<<"\t\t\t______________________MENU________________________\n\n\n";
	cout<<"                                                         \n\n\n";
	cout<<"\t| Press 1 to LOGIN                     |"<<endl;
	cout<<"\t| Press 2 to REGISTER                  |"<<endl;
	cout<<"\t| Press 3 if you forgot your PASSWORD  |"<<endl;
	cout<<"\t| Press 4 to EXIT                      |"<<endl;
	cout<<"\n\t\t\t PLEASE ENTER YOUR CHOICE: ";
	cin>>c;
	cout<<endl;
	
	
	switch (c)
	{
		case 1:
			login();
			break;
			
		case 2:
			registration();
			break;
			
		case 3:
			forgot();
			break;
			
		case 4:
			cout<<"****/n/n THANK YOU! ****\n\n";
			break;
		default:
			system("cls");
			cout<<"\t\t\ Please select from the options give above \n"<<endl;
			main();
	}
}

void login()
{
	int count;
	string userId, Password, id,pass;
	system("cls");
	cout<<"\n\n\t\t\t *** PLEASE ENTER THE USERNAME AND PASSWORD: "<<endl;
	cout<<"\t\t\t USERNAME ";
	cin>>userId;
	cout<<"\t\t\t PASSWORD";
	cin>>password;
	
	ifstream input("records.txt")
	while(input>>id>>pass)
	{
		if(id==userId && pass == password)
		{
			count =1;
			system("cls");
			
		}
	}
	input.close();
	
	if(count ==1)
	{
		cout<<userId<<"\n Your LOGIN is successfull \n ";
		main();
		else
		{
			cout<<"LOGIN ERROR \n Please check you username";
			main();
			
		}
	}
}

