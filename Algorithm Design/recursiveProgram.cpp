//Name: Rama Krishna Kamma
//CWID: 50321021
//Date: 05-02-2023

//Importing the required header files
#include <iostream>

using namespace std;

// Divide and Conquer(Recursive) Algorithm 
int RX(int n, int& operationCount)
{
	//if n value <=3 then return 1 
    if (n <= 3) 
	{
        return 1;
    }
    else
    {
    	//Increment the counter value by 2 for each addition operation
    	operationCount += 2; 
    	
    	//otherwise perform function according to requirements and return it
    	return RX(n-2, operationCount) + RX(n-1, operationCount) + RX(n-3, operationCount);
	}
    
}


int main() {
	
	int operationCount = 0;
    int number;
    cout<<"Enter the postive number: ";
    cin>>number;
    
    if(number<1)
    {
        cout<<"Please enter a valid number which is greater than 0"<<endl;
         return 0;
    }
    cout<<"The given number " << number << " value is " << RX(number, operationCount) << endl;
    cout<<"The number of addition operations made for given input is " << operationCount << endl;
    return 0;

}

