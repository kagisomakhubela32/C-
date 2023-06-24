#include "iostream"
#include "conio.h"
#include "ctime"
#include "cstdlib"
#include "string"

using namespace std;

int SIZE = 5;

//this function calculets the sum and the avarege of the arrey
void sumAvg(int randf[],int SIZE,double &Avg,int &sum)
{
	sum = 0;
	for(int a = 0;a < SIZE;a++)
	{
		sum = sum + randf[a];
		
	}
	Avg = sum / SIZE;
	
	cout <<"the sum of all the rendom numbers = "<<sum<<endl;
	cout <<"the avarege of the numbers = "<<Avg<<endl<<endl;
}

//this function props for the range for rendom numbers
void askminmax(int minNum,int maxNum)
{
	cout <<"this program is to sort and produce rendom numbers"<<endl;
	cout<<endl;
	cout <<"please enter the minimum number ot the range"<<endl;
	cin >> minNum;
	cout <<"please enter the maximum number ot the range"<<endl;
	cin >>maxNum;
}
//this functions is for sorting and swaping numbers in other
void swap(int randf[], int temp,int SIZE,int indxi,string names[],string tempS)
{
	tempS = "";
	indxi = 0;
	temp = 0;
	for(int x = 0;x < SIZE;x++)
	{
		cout <<" "<<endl;
		
		for(int y = 0;y < x;y++)
		{
			if(randf[x] < randf[y])
			{
			
				temp = randf[x];
				randf[x] = randf[y];
				randf[y] = temp;
				//this is the sortment of the corrosponding names to rendom numbers
				tempS = names[x];
				names[x] = names[y];
				names[y] = tempS;
			
			}
			
		}
		indxi = x;
	}
	for(int x = 0;x < SIZE;x++)
	{
		cout <<names[x]<<" got = "<<randf[x];
	}
}
//this is the main function
int main()
{
	int randf[SIZE] = {},num,max = 0,indx = 0,temp = 0,indxi = 0, minNum, maxNum,sum = 0;
	double Avg;
	string names[SIZE] = {"kagiso","thabo","thabang","clement","zanele"};
	string crosName = "";
	string tempS = "";
	
	srand(time(NULL));
	//the askminmax function is called
	//askminmax( minNum, maxNum);
	
	/*20 is the minimum nubber and 50 is the max number*/
	
	cout<<endl;
	for(int x = 0;x < SIZE;x++)
	{
		num = 20 + rand()% (50 - 20 ) + 1;
		randf[x] = num;
		names[x];
		cout <<"("<<x + 1<<") "<<names[x]<<" got = "<<randf[x]<<endl;
		
		if(randf[x] > max)
		{
			max = randf[x];
			indx = x;
			crosName = names[x];
		}
		cout<<endl;
		
	}
	cout <<"the max number is = "<<max<<" is in index = "<<indx<<" the name of the person is "<<crosName<<endl;
	cout <<endl;
	//the swap function is called
	swap(randf,temp,SIZE,indxi,names,tempS);
	cout <<endl;
	sumAvg(randf,SIZE,Avg,sum);
	
	_getch();
	return 0;
}
