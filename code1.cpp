#include<iostream>
using namespace std;


int main()
{		

			cout<<"\n\n\n\t\t\t\t\t*****ADVANCE DATA STRUCTURE PROJECT-1*****\n";	

			int i, opt1, opt2, opt3, ride, adult, kids, th, family, opt4, opt5; int price=0;


			next:
			cout<<"\n\n\t\t\t\t\t\t----RIDE SELECTION----\n";
			cout<<"1.Adult\n2. Kids \n3. Family \n";
		

			for(i=0;i<15;++i)
			{	
				//next:
				cout<<"\n\n\t\t\tENTER YOUR CHOICE:";
				cin>>ride;
	
				//to restrict user's input
				try
				{ 
		      			if (ride != 1 && ride != 2 && ride != 3 && ride != 4) 
		      			{ 
		        			throw ride;  
		      			} 
		   		} 
		   		catch (int ride) 
				{ 
		      			cout << "Wrong choice opted\n"; 
					goto next; 
		   		}
		

				case 2:
					cout<<"\n<<<<<<<<<<<<<<<<<<<<Kids Ride and Slides >>>>>>>>>>>>>>>>>>>>\n";
					//next:
				cout<<"Only for Kides\n RIDE***\n\t1. Sky Train\t\t   \n\t2. Photo Points\t\t \n\t3. Mini Merry Go Round\t\t \n\t4. Boating \t\t  \n\t5. Baby Train\t\t  \n\t6. Uncle Sam's wheel\t\t\n\t7. Jump n Joy\t\t   \n\t8. Bouncing Dragon\t\t  \n\t9. Swing Chair\t\t  \n SLIDES***\n\t10.Water Play Zone Zone\t\t    \n\t11. Gorilla Slide\t\t  \n\t12. Elephant Slide\t\t  \n\t13. Wave pool\t\t   \n\t14. Multi Slide Tower\t\t  \n\t15. Pirate Pool\t\t   \nENTER YOUR CHOICE:";
				for(i=0;i<15;++i)
				{
					cin>>kids;
		
					try
					{ 
      						if (kids != 1 && kids != 2 && kids != 3 && kids != 4 && kids != 5 && kids != 6 && kids != 7 && kids != 8 && kids != 9 && kids != 10 && kids != 11 && kids != 12 && kids != 13 && kids != 14 && kids != 15) 
   	   					{ 
   				     			throw kids;  
   	   					} 
   					} 
   					catch (int kids) 
					{ 
   	   					cout << "Wrong choice opted\n"; 
						//goto next; 
   					}

					switch (kids)
					{
				
					case 1:
						price = price + 70;break;
					case 2:
						price = price + 80;break;
					case 3:
						price = price + 80;break;
					case 4:
						price = price + 90;break;
					case 5:
						price = price + 50;break;
					case 6:
						price = price + 60;break;
					case 7:
						price = price + 50;break;
					case 8:
						price = price + 80;break;
					case 9:
						price = price + 50;break;
					case 10:
						price = price + 30;break;
					case 11:
						price = price + 20;break;
					case 12:
						price = price + 50;break;
					case 13:
						price = price + 30;break;
					case 14:
						price = price + 70;break;
					case 15:
						price = price + 90;break;
					}
					cout<<"\n\nPrice is- "<<price<<endl;
					
					if(opt5 == 1)
					{
						continue;
						cout<<"Enter Your Choice";
					}

					else 
						break;
				}	
				break;
				
