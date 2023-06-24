name and initials: Makhubela K,T
student no: 216947533
group: L/12
lecturer:Mr lepota

1.1) 
10,15,12,15,45,99,16,99,18,55;

1.2)
1.2.1)
bestSub = 0
highestSales = monthSales(0) 
for month = 1 to 11  
	if monthSales(month) > highestSales   
		highestSales = monthSales(month)
		bestSub = month  
	endif 
next month 
display “The best sales for the year was in “, monthName(bestSub) 
display “The amount was R”, highestSales 
display “The top salesperson for that month was “,  nameBestSP(bestSub) 

1.2.2)

total = 0 
for month = 0 to 11  
	total = total + monthSales(month) 
next month 
yearAve = total / 12 
display “Months with a total sales more than the average of     R”, ave, “:” 
for month = 0 to 11  
	if monthSales(month) >= yearAve then   
		display monthName(month) ~ On a new line  
	endif 
next month 

1.3)
PayrollMainModule
	for emp = 0 to 249 
		medAidDeduc =  CalcMedAidDeduc  (numDependants(emp) )    
		taxPayable = CalcTaxPayable (taxPerc(emp),empGrossSal(emp)) 
		empNetSal(emp) = empGrossSal(emp)–medAidDeduc–taxPayable
	next emp
	call DisplayTotPayroll() 
 display “Enter the employee number that you would like to see the gross and net salary (-1 to end)”   
 enter num  
 do while num <> -1   
	call DisplayGrossNetSal(num)    
	display “Enter the employee number that you would like to see the gross and net salary (-1 to end)”  
	enter num   
	loop  
 end 
 function CalcMedAidDeduc (valNumDep)   
	medAidDeduc = 1500 + 850 * valNumDep  
	return medAidDeduc  
 function CalcTaxPayable (valTaxPerc, valGrossSal)   
	taxPayable = valTaxPerc /100 * valGrossSal  
	return taxPayable  
 
 
sub DisplayTotPayroll()  
	totGrossSal = 0   
	totNetSal = 0   
	display “Employee Number      Employee Name    Gross Salary   Net Salary”  
		for emp = 0 to 249   
			display  empNum(emp), “ ”, empName(emp), “ ”, empGrossSal(emp),  “ ”, empNetSal(emp)  
			totGrossSal = totGrossSal + empGrossSal(emp)  
			totNetSal = totNetSal + empNetSal(emp)   
		next emp  
		totDeductions = totGrossSal – totNetSal   
		display “Total Gross Salary = ”, totGrossSal   
		display “Total Net Salary = ”, totNetSal   
		display “Total Deductions = ”, totDeductions  
end sub  
 sub DisplayEmp(valEmpNum)   
	index = -1 
	for emp = 0 to 249    
		if valEmpNum = empNum(emp) then 
			index = emp     
			emp = 250    
		endif  
	next emp  
	if index <> -1 then    
		display “Employee Name = ”, empName(emp)    
		display “Employee Gross Salary = ”, empGrossSal(emp)    
		display “Employee Net Salary = ”,  empNetSal(emp)   
	else   
		display “Employee number not found”   
	endif 
 end sub
	
	
2.1)
/*name and initials: Makhubela K,T
  Student number: 21694533
  group 12/L
  lecturer: MR Lepota
*/	
#include <iostream> 
#include <string> 
#include <conio.h> 
 
using namespace std; 
 
int main()
{ 
 
	 //Enter votes  
	 const int ARRAYSIZE = 10;  
	 int totalNum = 0;  
	 int num, winnerNumVotes, winnerSub;  
	 int numVotes[ARRAYSIZE];  
	 string idolName[] = { "Danny", "Lovely", "Tebogo", "Ronny", "Candy", "Pretty", "Innocent", "Dan", "Happy", "Wesley"};  
	 cout << "Enter the number of the person to vote for (0 to stop): ";  
	 cin >> num;  
	 while (num != 0)
	 {   
		if (num > 0 && num < ARRAYSIZE + 1)
		{  
			totalNum = totalNum + 1;    
			numVotes[num - 1] = numVotes[num - 1] + 1;   
		}   
		else    
			cout << "Invalid number entered - please retry\n";   
			cout << "Enter the number of the person to vote for (0 to stop): ";   
			cin >> num;
	 } 
 	
	cout <<"\n-----------------------------------------------------------\n";  
	cout << "The total number of votes received = " << totalNum << endl;  
	//Determine the winner   
	winnerSub = 0;  
	winnerNumVotes = numVotes[0];  
	for (int idol = 1; idol < ARRAYSIZE; idol++)
	{   
		if (numVotes[idol] > winnerNumVotes)
		{    
			winnerSub = idol;    
			winnerNumVotes = numVotes[idol];   
		}  
	}  
	cout << "The winner is " << idolName[winnerSub] << endl;  
	cout <<"-----------------------------------------------------------\n"; 
	_getch();  
	return 0; 
} 
2.2
/*name and initials: Makhubela K,T
  Student number: 21694533
  group 12/L
  lecturer: MR Lepota
*/	
#include <iostream> 
#include <iomanip> 
#include <string> 
#include <conio.h> 
 
using namespace std;
 
const int SIZEARRAY = 5;     
int sumVotes();     
int winnerIndex();     
string candidates[SIZEARRAY];     
int votes[SIZEARRAY ] = {0};
   
int main() 
{     
	int totalVotes;     
	int i; 
 
    cout << fixed << setprecision(2);     
	cout << "Enter candidate's name and the votes received by " <<"the candidate." << endl; 
 
    for (i = 0; i < SIZEARRAY; i++)
	{
		cin >> candidates[i] >> votes[i];
	}	
 		totalVotes = sumVotes(); 
		cout << "\nCandidate    Votes Received   % of Total Votes" << endl;     
		for (i = 0; i < SIZEARRAY; i++)
		{			
			cout << left << setw(10) << candidates[i]<< right << " " << setw(10) << votes[i] << "   " << setw(15)<< double(votes[i]) / double(totalVotes) * 100.0 << endl; 
		}
    cout << "\nTotal" << totalVotes << endl; 
    cout << "The Winner of the Election is " << candidates[winnerIndex()]<< "." << endl; 
 
    _getch();     
	return 0; 
} int sumVotes() 
{  
	int sum = 0;
	for (int i = 0; i < SIZEARRAY; i++)   
		sum = sum + votes[i];  
	return sum; 
} 

int winnerIndex() 
{     
	int winInd = 0;     
	for (int i = 0; i < SIZEARRAY; i++)         
		if (votes[i] > votes[winInd])             
			winInd = i;     
		return winInd; 
} 












	
	
	
	
	
	