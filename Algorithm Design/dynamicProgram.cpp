//Name: Rama Krishna Kamma
//CWID: 50321021
//Date: 05-02-2023

//Importing the required header files
#include <iostream>

using namespace std;

// Dynamic Programming Algorithm
int DX(int n, int& operationCount)
{
	//Declare the array of size n+1
    int x[n+1];
    
    //Initalize the first three values to one
    x[1] = x[2] = x[3] = 1;
    
    int z = 4;
    
    //Repeat the loop for remaining values and calculate the counter for each addition
    while(z <= n)
	{
		//Calculate the next value by using previous value
    	x[z] = x[z-2] + x[z-1] + x[z-3];
    	
    	//Increment counter for addition operation
    	operationCount += 2;    	
    	
    	z += 1;
	}

	//return the final value
    return x[n];
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
    cout<<"The given number " << number << " value is " << DX(number, operationCount) << endl;
    cout<<"The number of addition operations made for given input is " << operationCount << endl;
    return 0;

}


