#include<iostream>

using namespace std;

int main()
{
	
	int input[3],weights[3],desiredoutput,actualoutput,i;
	int choice=1;
	int error;
	for(i=0;i<3;i++)
	{
		cout<<" Enter the Input Vector : ";
		cin>>input[i];
	}
	for(i=0;i<3;i++)
	{
		cout<<" Enter the Weight Vector : ";
		cin>>weights[i];
	}
	
	cout<<" Enter the Desired Output : ";
	cin>>desiredoutput;
	int flag=0;
	while(choice==1)
	{
		flag=0;
		for(actualoutput=0,i=0;i<3;i++)
		{
			actualoutput=actualoutput+weights[i]*input[i];
		}
		
		cout<<" The Desired Output is : "<<desiredoutput<<endl;
		cout<<" The Actual Output is : "<<actualoutput<<endl;
		cout<<endl;
		error=desiredoutput-actualoutput;
		
		if(error==0)
		{
			flag=1;
			break;
		}
		if(flag==0)
		{
			cout<<" The Error is : "<<error<<endl;
			cout<<" Enter 1 to Continue : ";
			cin>>choice;
			if(error<0)
			{
				for(i=0;i<3;i++)
				{
					weights[i]=weights[i]-1;
				}
			}
			else
			{
				for(i=0;i<3;i++)
				{
					weights[i]=weights[i]+1;
				}
			}
		}
		else
		{
			break;
		}
	}
	cout<<endl;
	cout<<" The Weights are : "<<endl;
	for(i=0;i<3;i++)
	{
		cout<<" "<<weights[i]<<endl;
	}
	
	
	return 0;
}
