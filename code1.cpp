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
		
