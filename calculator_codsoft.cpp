#include<iostream>
using namespace std;
int main()
{
	float n1,n2,n3;
	int ch;
	cout<<"###CALCULATOR###"<<endl;
	do{
	
	cout<<"1.ADD\n";
	cout<<"2.SUB\n";
	cout<<"3.MUL\n";
	cout<<"4.DIV\n\n";
	cout<<"Enter your choice:"<<endl;
	cin>>ch;
	cout<<"ENTER TWO NUMBERS:"<<endl;
	cin>>n1>>n2;
	
	
	
	switch(ch)
	{
		case 1:
				n3 = n1+n2;
				cout<<"ANSWER:"<<n3<<endl;
				break;
		case 2:
			    n3= n1-n2;
			    cout<<"ANSWER:"<<n3<<endl;
				break;
		case 3:
				n3= n1*n2;
				cout<<"ANSWER:"<<n3<<endl;
				break;
		case 4:
				if(n2!=0)
				{
				n3=n1/n2;
					cout<<"ANSWER:"<<n3<<endl;
					
				}
				else
				{
					cout<<"INFINITE VALUE!!!"<<endl;
				}	
				break;    
			
	}
    }  while(ch<5 && ch>0);
	
	return 0;
	

}
