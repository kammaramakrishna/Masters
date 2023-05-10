//Name: Rama Krishna Kamma
//CWID: 50321021
//Date: 05-02-2023

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
	//intialize the counter values to zero to calculate the no of addition operations
    int count1 = 0, count2 = 0; 
    
    //Store the n values in an array
    int table[] = {5, 10, 15, 20, 25};

    // Output table headers
    cout << " n\tRecursive(n)\t# Additions\tDynamic(n)\t# Additions\n";

	int z = 0;
    // Output table rows
    while(z < 5) {
    	
    	//Declare the result1 and result2
        int result1, result2;
        
		//Call the Recursive function and store in result 1
        result1 = RX(table[z], count1);
        //Call the Dynamic function and store in result 2
		result2 = DX(table[z], count2);
		
        //Display the output values
        cout << "|-----------------------------------------------------------------------|\n";
        cout << "|"<<table[z] << "\t" << result1 << "\t\t" << count1 << "\t\t"<< result2 << "\t\t" << count2 <<  "\t\t" << "|"<< "\n";
        
        //Reset the counter values to zero
        count1 = 0;
        count2 = 0;
        
        //Increment the z value by 1
        z += 1;
    }
	cout << " -----------------------------------------------------------------------\n";
    
	return 0;
}

