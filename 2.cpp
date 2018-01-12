#include <iostream>
using namespace std;

int main()
{
	int count = 2;
	double sum;  
	while( count <= 70){
		sum = sum + 1.0/count; 
		count = count + 1;
	}
	cout << sum;
	return 0;
}
