#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n, i;
	cin >> n;
	for(i=10;i>=1;i--)  //Using the loop from backwards because already our limit is given from 1-10,
	                    // hence starting from back will eventually give us the highest divisor.
	{
	    if((n%i)==0)
	    {
	        break;
	    }
	}
	cout<<i<<endl;
	return 0;
}
