#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	char name[30], pizza1[]="Margherita" ,pizza2[]="Farmhouse" ,pizza3[]="Double Cheese" ,shake1[]="Oreo Shake", 
	shake2[]="Hazelnut Shake", shake3[]="Strawberry Shake", shake4[]="Caramel Shake",bur1[]="BBQ Burger",bur2[]="Steak Burger",
	bur3[]="Deluxe Zinger Burger";
	char slide1[]="White Sauce Pasta", slide2[]="Red Sauce Pasta", slide3[]="Nachos", slide4[]="Choco brownie", slide5[]="French Fries";
	char drink1[]="Mineral Water", drink2[]="Packed Juice", drink3[]="Diet Coke", drink4[]="Red Bull",gotostart ;
	int choice=0,pchoice,pchoice1, quantity, num;
    string base, cheese, shake;  // time=40;
    cout<<"\n\n\n\n";
    system("Color 02");
      cout<<R"(
 _______ _________ _        _______    _______  _______  _______  ______     _______  _______  _       _________ _______  _______          
(  ____ \\__   __/( (    /|(  ____ \  (  ____ \(  ___  )(  ___  )(  __  \   (  ____ \(  ___  )( (    /|\__   __/(  ___  )(  ____ \|\     /|
| (    \/   ) (   |  \  ( || (    \/  | (    \/| (   ) || (   ) || (  \  )  | (    \/| (   ) ||  \  ( |   ) (   | (   ) || (    \/( \   / )
| (__       | |   |   \ | || (__      | (__    | |   | || |   | || |   ) |  | (__    | (___) ||   \ | |   | |   | (___) || (_____  \ (_) / 
|  __)      | |   | (\ \) ||  __)     |  __)   | |   | || |   | || |   | |  |  __)   |  ___  || (\ \) |   | |   |  ___  |(_____  )  \   /  
| (         | |   | | \   || (        | (      | |   | || |   | || |   ) |  | (      | (   ) || | \   |   | |   | (   ) |      ) |   ) (   
| )      ___) (___| )  \  || (____/\  | )      | (___) || (___) || (__/  )  | )      | )   ( || )  \  |   | |   | )   ( |/\____) |   | |   
|/       \_______/|/    )_)(_______/  |/       (_______)(_______)(______/   |/       |/     \||/    )_)   )_(   |/     \|\_______)   \_/   
                                                                                                                                           

)"<<endl;
    cout<<"Please Enter Your Name: \n";
	cin.getline(name, 20);
	cout<<"\nPlease Enter Your Phone Number: \n";
	cin>>num;
	beginning:
	system("CLS");
    cout<<"\n\n\n\n";
    system("Color 02");
      cout<<R"(
 _______ _________ _        _______    _______  _______  _______  ______     _______  _______  _       _________ _______  _______          
(  ____ \\__   __/( (    /|(  ____ \  (  ____ \(  ___  )(  ___  )(  __  \   (  ____ \(  ___  )( (    /|\__   __/(  ___  )(  ____ \|\     /|
| (    \/   ) (   |  \  ( || (    \/  | (    \/| (   ) || (   ) || (  \  )  | (    \/| (   ) ||  \  ( |   ) (   | (   ) || (    \/( \   / )
| (__       | |   |   \ | || (__      | (__    | |   | || |   | || |   ) |  | (__    | (___) ||   \ | |   | |   | (___) || (_____  \ (_) / 
|  __)      | |   | (\ \) ||  __)     |  __)   | |   | || |   | || |   | |  |  __)   |  ___  || (\ \) |   | |   |  ___  |(_____  )  \   /  
| (         | |   | | \   || (        | (      | |   | || |   | || |   ) |  | (      | (   ) || | \   |   | |   | (   ) |      ) |   ) (   
| )      ___) (___| )  \  || (____/\  | )      | (___) || (___) || (__/  )  | )      | )   ( || )  \  |   | |   | )   ( |/\____) |   | |   
|/       \_______/|/    )_)(_______/  |/       (_______)(_______)(______/   |/       |/     \||/    )_)   )_(   |/     \|\_______)   \_/   
                                                                                                                                           

)"<<endl;

	cout<<"Hello "<<name;
	cout<<"\n Number: "<<num<<"\n\nWhat would you like to order?\n\n";

	cout<<"\t\t\t\t--------Menu--------\n\n";

	cout<<"1) Pizza\n";
	cout<<"2) Burgers\n";
	cout<<"3) Slides\n";
	cout<<"4) Shakes\n";
	cout<<"5) Drinks\n\n";
	cout<<"\nPlease Enter your Choice: ";
	cin>>choice;

	if(choice==1)
	 {
		cout<<"\n1) "<<pizza1<<"\n";
		cout<<"2) "<<pizza2<<"\n";
		cout<<"3) "<<pizza3<<"\n";
		cout<<"\nPlease Enter which pizza would you like to have?:";
		cin>>pchoice;
        if(pchoice>=1 && pchoice<=3)
		{
			cout<<"\n1) Thin Crust\n"<<"2) Thick Crust";
			cout<<"\nWhich type of base would you like to have?:";
			cin>>pchoice1;
            if(pchoice1==1)
             base ="Thin Crust";
             else
             base ="Thick Crust";
		}
		if(pchoice>=1 && pchoice<=3)
		{
			cout<<"\n1) Small Rs.250\n"<<"2) Medium Rs.500\n"<<"3) Large Rs.900\n";
			cout<<"\nChoose Size Please:";
			cin>>pchoice1;
			if(pchoice1>=1 && pchoice1<=3)
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 250*quantity;
			break;

			case 2: choice = 500*quantity;
			break;

			case 3: choice = 900*quantity;
			break;
             }
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<pizza1<<" "<<base;
			 cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\n\nThank you For Ordering From Fine Food Fantasy\n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<pizza2<<" "<<base;
			 cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Fine Food Fantasy\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<pizza3<<" "<<base;
			 cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Fine Food Fantasy\n";
			 break;

			}
			cout<<"Would you like to order anything else? Y / N:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			  //return 0;
			}



		}

	 }


	 else if(choice==2)
	 {
		cout<<"\n1 "<<bur1<<" Rs.180"<<"\n";
		cout<<"2 "<<bur2<<" Rs.150"<<"\n";
		cout<<"3 "<<bur3<<" Rs.160"<<"\n";
		cout<<"\nPlease Enter which Burger you would like to have?: ";
		cin>>pchoice1;
        if(pchoice1>=1 && pchoice1<=3)
		{
			cout<<"\n1) With Cheese\n"<<"2) Without Cheese\n";
			cout<<"\nCheese add-on:";
			cin>>pchoice1;
			if(pchoice1==1)
             cheese ="With Cheese";
             else
             cheese ="Without Cheese";
			 }
		if(pchoice1>=1 && pchoice1<=3)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 180*quantity;
			break;

			case 2: choice = 150*quantity;
			break;

			case 3: choice = 160*quantity;
			break;

			}

			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<bur1<<" "<<cheese;
			 cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Fine Food Fantasy \n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<bur2<<" "<<cheese;
			 cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Fine Food Fantasy\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<bur3<<" "<<cheese;
			 cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Fine Food Fantasy\n";
			 break;


			}
			cout<<"\nWould you like to order anything else? Y / N:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			  //return 0;
			}

 }
}
	else if(choice==3)
	 {
		cout<<"\n1  "<<slide1<<" Rs.250"<<"\n";
		cout<<"2  "<<slide2<<" Rs.250"<<"\n";
		cout<<"3  "<<slide3<<" Rs.200"<<"\n";
		cout<<"4  "<<slide4<<" Rs.150"<<"\n";
		cout<<"5  "<<slide5<<" Rs.100"<<"\n";
	
		cout<<"\nPlease Enter which Slide you would like to have?:";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=5)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 250*quantity;
			break;
            case 2: choice = 250*quantity;
			break;
            case 3: choice = 200*quantity;
			break;
			case 4: choice = 150*quantity;
			break;
			case 5: choice = 100*quantity;
			break;

			}
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<slide1;
			 cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Fine Food Fantasy\n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<slide2;
			 cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Fine Food Fantasy\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<slide3;
			 cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Fine Food Fantasy\n";
			 break;
             case 4:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<slide4;
			 cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Fine Food Fantasy\n";
			 break;
			 case 5:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<slide5;
			 cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Fine Food Fantasy\n";
			 break;

			}
			cout<<"Would you like to order anything else? Y / N:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			  //return 0;
			}
			}
			}


	 else if(choice==4)
	 {
		cout<<"\n1 "<<shake1<<" Rs.250"<<"\n";
		cout<<"2 "<<shake2<<" Rs.250"<<"\n";
		cout<<"3 "<<shake3<<" Rs.250"<<"\n";
		cout<<"4 "<<shake4<<" Rs.250"<<"\n";
		cout<<"\nPlease Enter which Shake you would like to have?: ";
		cin>>pchoice1;
        if(pchoice1>=1 && pchoice1<=4)
		{
			cout<<"\n1) Regular\n"<<"2) Grande\n";
			cout<<"\nChoose the size of Shake Please:";
			cin>>pchoice1;
			if(pchoice1==1)
             shake ="Regular";
             else
             shake ="Grande";
		}
		if(pchoice1>=1 && pchoice1<=3)
		{
			cout<<"\nHow Many Shakes Do you want: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 250*quantity;
			break;

			case 2: choice = 250*quantity;
			break;

			case 3: choice = 250*quantity;
			break;
            case 4: choice = 250*quantity;
			break;
			}
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<shake1<<" "<<shake;
			 cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Fine Food Fantasy\n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<shake2<<" "<<shake;
			 cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Fine Food Fantasy\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<shake3<<" "<<shake;
			 cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Fine Food Fantasy\n";
			 break;
             case 4:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<shake4<<" "<<shake;
			 cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Fine Food Fantasy\n";
			 break;

			}
	        cout<<"Would you like to order anything else? Y / N:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			  //return 0;
			}
			
			

 }
}
	else if(choice==5)
	 {
		cout<<"\n1 "<<drink1<<" Rs.40"<<"\n";
		cout<<"2 "<<drink2<<" Rs.60"<<"\n";
		cout<<"3 "<<drink3<<" Rs.80"<<"\n";
		cout<<"4 "<<drink4<<" Rs.120 "<<"\n";
		cout<<"\nPlease Enter which Drink you would like to have?:";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=4)
		{
			cout<<"\nHow Many Drinks Do you want: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 40*quantity;
			break;

			case 2: choice = 60*quantity;
			break;

			case 3: choice = 80*quantity;
			break;
			case 4: choice = 120*quantity;
			break;


			}
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<drink1;
			 cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Fine Food Fantasy \n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<drink2;
			 cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Fine Food Fantasy \n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<drink3;
			 cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Fine Food Fantasy \n";
			 break;
			 case 4:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<drink4;
			 cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Fine Food Fantasy \n";
			 break;


			}
			cout<<"Would you like to order anything else? Y / N:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			  //return 0;
			}
			}
			}

			else
			{
				system("CLS");
				cout<<"Please Select Right Option: \n";
				cout<<"Would You like to Start the program again? Y / N: " ;
				cin>>gotostart;

				if(gotostart=='Y' || gotostart=='y')
				{
				  goto beginning;
			  //return 0;
			}
			}

     getch();
}
 

