#include<iostream>
#include<string>
using namespace std;

void addproduct()
{
	char add_product[50];
	string products[5];
	char user_choice;
				for(int i=0; i<5; i++)
			{
				cout<<"\n\tEnter the Product name:";
			    cin>>add_product;
				products[i] = add_product; // Store product in the array
			}
			
			cout<<"\n\tThe 5 products you entered are:\n";
			for(int i=0; i<5; i++)
			{
				cout<<"\t"<<i+1<<". "<<products[i]<<endl; // Display stored products
			}
			
			cout<<"\n\tDo you want to add more?\n\tPress y for yes or n for no:";
			cin>>user_choice;
			if(user_choice=='y')
			{
				for(int i=0; i<5; i++)
				{
					cout<<"\n\tEnter the Product name:";
			    	cin>>add_product;
					products[i] = add_product; // Store product in the array
				}	
			}
}
     
      void main_menu()
      {
      	cout<<"\n\n\n\n\n\n\n";
	cout<<"\t\tPress 1 to Add the Product or Item in the Stock.\n";           //Main Menu
	cout<<"\t\tPress 2 to Buy the Product or Item.\n";
	cout<<"\t\tPress 3 to Generate the Bill of Bought Items.\n";
	cout<<"\t\tPress 4 to See all current Stock available.\n";
	cout<<"\t\tPress 5 to Search for a specific Item in the Stock.\n";
	cout<<"\t\tPress 6 to Exit from the Market.\n";
	cout<<"\t\tPress 7 to Suggest us to improve anything you want.";
	}

    void listed_items()
    {
    	    cout<<"\n\tSR  Meal        Price";
			cout<<"\n\t1.  Burger.       150";
			cout<<"\n\t2.  Pizza.       1200";
			cout<<"\n\t3.  Shawarma.     150";
			cout<<"\n\t4.  Chips.        150";
			cout<<"\n\t5.  Mutton.      1500";
			cout<<"\n\t6.  Beef.        1250";
			cout<<"\n\t7.  Chicken.     1000";
			cout<<"\n\t8.  Tikka.        200";
			cout<<"\n\t9.  Kabab.         80";
			cout<<"\n\t10. Baryani.      250";
			cout<<"\n\t11. Sandwich.     100";
			cout<<"\n\t12. Plao.         200";
			cout<<"\n\t13. Roast.        750";
			cout<<"\n\t14. Macroni.      100";
			cout<<"\n\t15. Roti.          30";
			cout<<"\n\t16. Cold Drinks.  100";
			cout<<"\n\t17. Juices.       100";
			cout<<"\n\t18. Cake.         700";
			cout<<"\n\t19. Kheer.        300";
			cout<<"\n\t20. Keema.        400";
			cout<<"\n\t21. Daal.         100";
	}
	
	void serve_option()
	{
		    int user_enter;
		    cout<<"\n\n\n\tUser wants to serve:";
			cin>>user_enter;
			
			if(user_enter==1)
			{
				cout<<"You have buyed Burger for RS 150";
			}
			
			else if(user_enter==2)
			{
				cout<<"You have buyed Pizza for RS 1200";
			}
			
			else if(user_enter==3)
			{
				cout<<"You have buyed Shawarma for RS 150";
			}
			
			else if(user_enter==4)
			{
				cout<<"You have buyed Chips for RS 150";
			}
			
			else if(user_enter==5)
			{
				cout<<"You have buyed Mutton for RS 1500";
			}
			
			else if(user_enter==6)
			{
				cout<<"You have buyed Beef for RS 1250";
			}
			
			else if(user_enter==7)
			{
				cout<<"You have buyed Chicken for RS 1000";
			}
			
			else if(user_enter==8)
			{
				cout<<"You have buyed Tikka for RS 200";
			}
			
			else if(user_enter==9)
			{
				cout<<"You have buyed Kabab for RS 80";
			}
			
			else if(user_enter==10)
			{
				cout<<"You have buyed Beryani for RS 250";
			}
			
			else if(user_enter==11)
			{
				cout<<"You have buyed Sandwich for RS 100";
			}
			
			else if(user_enter==12)
			{
				cout<<"You have buyed Plao for RS 200";
			}
			
			else if(user_enter==13)
			{
				cout<<"You have buyed Roast for RS 750";
			}
			
			else if(user_enter==14)
			{
				cout<<"You have buyed Macroni for RS 100";
			}
			
			else if(user_enter==15)
			{
				cout<<"You have buyed Roti for RS 30";
			}
			
			else if(user_enter==16)
			{
				cout<<"You have buyed Cold Drinks for RS 100";
			}
			
			else if(user_enter==17)
			{
				cout<<"You have buyed Juices for RS 100";
			}
			
			else if(user_enter==18)
			{
				cout<<"You have buyed Cake for RS 700";
			}
			
			else if(user_enter==19)
			{
				cout<<"You have buyed Kheer for RS 300";
			}
			
			else if(user_enter==20)
			{
				cout<<"You have buyed Keema for RS 400";
			}
			
			else if(user_enter==21)
			{
				cout<<"You have buyed Daal for RS 100";
			}
			
			else
			   cout<<"Item not available";
	}
	
	void order_placement()
	{
		    int user_choice;
		    cout<<"\n\n\tWhich order have you placed?";
			cin>>user_choice;
			
			if(user_choice<=1 && user_choice>=21)
			{
                cout<<"Invalid Input";
			}
			
			else
			{
				cout<<"\n\n\tPlace your Card here.";
				cout<<"\n\n\tMoney has been deposited.";
				cout<<"\n\n\tYou have paid for the meal now.";
				cout<<"\n\n\tNow you can turn back your card.";
			}
	}

void deal()
{
	        char user_choice;
		    cout<<"\n\n\tPress A to select First 5 Items from the list.\n\n\tPress B to select Second 5 Items from the list.\n\n\tPress C to select Third 5 Items from the list.\n\n\tPress D to select Last 6 Items from the list.\n\n\tPress E to select All Items from the list.\n\n\tDo you want a Mega Deal?";
			cin>>user_choice;
			
			if(user_choice=='a')
			{
				cout<<"\n\tYou have ordered 2 Burgers, 1 Large Pizza, 2 Mega Shawarma's, 1 Chips Package and a mutton ";
			}
			
			else if(user_choice=='b')
			{
				cout<<"\n\tYou have ordered Beef, Chicken, 2 Tikka's, 8 Kabab's and Beryani ";
			}
			
			else if(user_choice=='c')
			{
				cout<<"\n\tYou have ordered Sandwich, Plao, Roast, Macroni  and Cake ";
			}
			
			else if(user_choice=='d')
			{
				cout<<"\n\tYou have ordered Kheer, Keema, Cold Drinks and Chicken";
			}
			
			else if(user_choice=='e')
			{
				cout<<"\n\tYou have ordered all items from the list ";
			}   
			
}

int main()                                        //body starting
{
	char add_product[50], user_choice,name[50];
	string products[5];                              // Array to store 5 products
	int i, j,price,placement,user_enter;
	
	cout<<"\n\n\t\tW e l c o m e   t o   A s h i r ' s   M a r k e t   M a n a g e m e n t   S y s t e m";
	
	mainmenu:                               //goto statement output
	
	main_menu();                                      //main menu function
	
	int choice;
	cout<<"\n\n\tWhere do you want to go now???";
	cin>>choice;
	
	
	switch(choice)
	{
		case 1:
			cout<<"\n\tYou are here to add a Product\n";
            addproduct();
			break;
		
		case 2:
			cout<<"\n\tYou are here to buy the Item or any Product";
			
			listed_items();
			
			serve_option();
			
			cout<<"\n\n\n\tDo you want to serve more???\n\nPress y to continue,if not press any other alphabet: ";
			cin>>user_choice;
			
			if(user_choice=='y')
			{
			  serve_option();
			}
			
			else
			{
				cout<<"\n\n\n\tUser said,I am done now.I do not need anything now";
			}
            
            cout<<"\n\n\tIts time to pay the bill which you have served.";
            
			order_placement();
			
			
			break;
			
		case 3:
			cout<<"\n\tYou are here to generate the Bill of your meal\n\n\t";
			
			listed_items();
			
		
			
			order_placement();
			   
			break;
			
		case 4:
			cout<<"\n\tAll items will be displayed here\n\n";
			
			listed_items();
			
			cout<<"\n\n\tA.Single Order\n\tB.Mega Meal";
			cout<<"\n\n\tWhat would you like to order???";
			cin>>user_choice;

			
			if(user_choice=='a')
			{
				cout<<"\n\n\n\tWhat do you want to order???";
			    cin>>placement;
			}
			
			else if(user_choice=='b')
			{
				deal();
			}

			
		    cout<<"\n\tYour order is placed.\n\tPlease wait for the order";
			
			cout<<"\n\tNow Press 3 to pay the bill of your order.";	
			
			break;
		
		case 5:
			cout<<"\n\tYou are here to Search for a specific item: ";
			
			cout<<"\n\n\tEnter user choice:";
			cin>>user_choice;
			
		while(!user_choice>=22)
            {
                cout<<"Invalid input. Please press any button from 1 to 21: ";
                cout<<"Enter choice again: ";
                cin>>user_choice;
            }
    
            cout<<"\n\tItem Data Found.\n\n\t";
            cout<<"\n\tNow you can see it in the list.\n\n\t";
			
			listed_items();
			
			break;
			
		case 6:
			cout<<"\n\tYou are no longer in the market now";
			exit(0);
			break;

        case 7:
            cout << "\n\n\tWe will be very pleased to get your suggestions.";
            cout << "\n\n\tDear User, what should we improve?";
            
            cin.ignore();
            cin.getline(name,50);

            cout << "\n\n\tInshallah, we will work on it and make it more comfortable for you.";
            cout << "\n\n\tThank you for your valuable feedback.";
            break;
			
		default:
			cout<<"\n\tEnter one of the specific options given above";
			break;
	}
	
	goto mainmenu;             //to show mainmenu
	
	return 0;
}

