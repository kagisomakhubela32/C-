 #include "iostream"
 #include "conio.h"
 
 using namespace std;
 
 int main()
 {
	 int  val[3][4] = {8,16,9,52,3,15,27,6,14,25,2,10};
	 int total = 0;
	 int ArrayTotalRow[3];
	 
	 for(int i = 0;i < 3;i++)
	 {
		 for(int j = 0;j < 4;j++)
		 {
			ArrayTotalRow[i] = ArrayTotalRow[i] + val[i][j];
		 }
		cout <<"The total for row "<< i <<" is = "<<ArrayTotalRow[i]<<endl; 
	 }
	 
	 _getch();
	 return 0;
 }
