#include<iostream>
using namespace std;

int main()
{
	int quant;
	int choice;
	
	//int Qrooms =0;
	int Qrooms=0, Qpasta =0, Qburger =0, Qnoodle =0, Qshake =0, Qchicken=0;  //Quantity of items
	int Srooms =0, Spasta =0, Sburger=0, Snoodle =0, Sshake=0, Schicken=0;   //Sold items
	int Total_rooms =0, Total_pasta= 0, Total_burger =0, Total_noodle=0, Total_shake=0,Total_chicken=0;  //Total items
	
	
	
	cout<<"\n\t********** QUANTITY OF ITEMS WE HAVE **********";
	cout<<"\n\n\n Rooms available :";
	cin>>Qrooms;
	cout<<"\n Quantity of Pasta :";
	cin>>Qpasta;
	cout<<"\n Quantity of Burger :";
	cin>>Qburger;
	cout<<"\n Quantity of Noodles :";
	cin>>Qnoodle;
	cout<<"\n Qunatity of Shake :";
	cin>>Qshake;
	cout<<"\n Quantity of chicken Roll :";
	cin>>Qchicken;
	
	
m:
	cout<<"\n\n\n\n\t\t\t********** PLEASE SELECT FROM THE MENU OPTIONS **********";
	
cout<<"\n\n\n1: Rooms";
cout<<"\n2: Pasta";
cout<<"\n3: Burger";
cout<<"\n4: Noodles";
cout<<"\n5: Shake";
cout<<"\n6: Chicken ROll";
cout<<"\n7: Information regarding sales and collection";
cout<<"\n8: Exit";

cout<<"\n\n\n********** PLEASE ENTER YOUR CHOICE! ********** ";
cin>>choice;
switch(choice)
{
	case 1:
		cout<<"\n\n\n Enter the number of rooms you want: ";
		cin>>quant;
		if(Qrooms-Srooms >= quant)
		{
			Srooms = Srooms+quant;
			Total_rooms = Total_rooms +quant*5000;
			cout<<"\n\n\t\t"<<quant<<"  room/rooms have been alloted to you!";
			
		}
		else
		cout<<"\n\tOnly"<<Qrooms-Srooms<<"  Rooms remaining in the hotel";
		break;
	case 2: 
		cout<<"\n\n Enter Pasta Quantity: ";
		cin>>quant;
		if(Qpasta-Spasta >=quant)
		{
			Spasta += quant;
			Total_pasta += quant*250;
			cout<<"\n\n\t\t"<<quant<<"  Pasta is the order!";
		}
		else
		cout<<"\n\tOnly"<<Qpasta-Spasta<<"  Pasta remaining in hotel";
		break;
		case 3:
			cout<<"\n\n Enter Burger Quantity: ";
			
			cin>>quant;
			if(Qburger - Sburger >=quant)
			{
				Sburger+= quant;
				Total_burger += quant*200;
				cout<<"\n\n\t\t"<<quant<<"  burger is the order!";
			}
			else 
				cout<<"\n\tOnly"<<Qburger-Sburger<<"  burgers remaining in hotel";
				break;
			
		case 4:
			cout<<"\n\n Enter Noodle Quantity: ";
			
			cin>>quant;
			if(Qnoodle - Snoodle >=quant)
			{
				Snoodle+= quant;
				Total_noodle += quant*140;
				cout<<"\n\n\t\t"<<quant<<"  Noodle is the order!";
			}
			else 
				cout<<"\n\tOnly"<<Qnoodle-Snoodle<<"  Noodles remaining in hotel";
				break;
			
			case 5:
			cout<<"\n\n Enter Shakes Quantity: ";
			
			cin>>quant;
			if(Qshake - Sshake >=quant)
			{
				Sshake+= quant;
				Total_shake += quant*120;
				cout<<"\n\n\t\t"<<quant<<"  Shakes is the order!";
			}
			else 
				cout<<"\n\tOnly"<<Qshake-Sshake<<"  Shakes remaining in hotel";
				break;
			case 6:
			cout<<"\n\n Enter Chicken Roll Quantity: ";
			
			cin>>quant;
			if(Qchicken - Schicken >=quant)
			{
				Schicken+= quant;
				Total_burger += quant*150;
				cout<<"\n\n\t\t"<<quant<<"  Chicken Roll is the order!";
			}
			else 
				cout<<"\n\tOnly"<<Qburger-Sburger<<"  Chicken Rolls remaining in hotel";
				break;
				
				case 7:
					
					cout<<"\n\t\t********** DETAILS OF SALES AND COLLECTIONS **********";
					cout<<"\n\nNumber of rooms we had: "<<Qrooms;
					cout<<"\n\nNumber of rooms we gave for rent: "<<Srooms;
					cout<<"\n\nRemaining rooms: "<<Qrooms-Srooms;
					cout<<"\n\nTotal rooms collection for the day: "<<Total_rooms;
					
					
				//	cout<<"\n\t\tdetails of sales and Collection ";
					cout<<"\n\nNumber of rooms we had: "<<Qpasta;
					cout<<"\n\nNumber of rooms we gave for rent: "<<Spasta;
					cout<<"\n\nRemaining rooms: "<<Qpasta-Spasta;
					cout<<"\n\nTotal rooms collection for the day: "<<Total_pasta;
					
					
				//	cout<<"\n\t\tdetails of sales and Collection ";
					cout<<"\n\nNumber of rooms we had: "<<Qburger;
					cout<<"\n\nNumber of rooms we gave for rent: "<<Sburger;
					cout<<"\n\nRemaining rooms: "<<Qburger-Sburger;
					cout<<"\n\nTotal rooms collection for the day: "<<Total_burger;
					
					
				//	cout<<"\n\t\tdetails of sales and Collection ";
					cout<<"\n\nNumber of rooms we had: "<<Qnoodle;
					cout<<"\n\nNumber of rooms we gave for rent: "<<Snoodle;
					cout<<"\n\nRemaining rooms: "<<Qnoodle-Snoodle;
					cout<<"\n\nTotal rooms collection for the day: "<<Total_noodle;
					
					
					//cout<<"\n\t\tdetails of sales and Collection ";
					cout<<"\n\nNumber of rooms we had: "<<Qshake;
					cout<<"\n\nNumber of rooms we gave for rent: "<<Sshake;
					cout<<"\n\nRemaining rooms: "<<Qshake-Sshake;
					cout<<"\n\nTotal rooms collection for the day: "<<Total_shake;
					
					
					
					//cout<<"\n\t\tdetails of sales and Collection ";
					cout<<"\n\nNumber of rooms we had: "<<Qchicken;
					cout<<"\n\nNumber of rooms we gave for rent: "<<Schicken;
					cout<<"\n\nRemaining rooms: "<<Qchicken-Schicken;
					cout<<"\n\nTotal rooms collection for the day: "<<Total_chicken;
					
					
				case 8:
					exit(0);
					
					default:
						cout<<"\n\n !";
					
					
					
				}
					goto m;
}//class

















