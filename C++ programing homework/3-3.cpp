#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	const int size=12;
	int i,j;
	cout << endl
    << size << " by "<<size << " Multiplication Table "<< endl <<endl;
	cout << endl << "    |";
	for(i = 2; i<=size; i++)
		cout << setw(3) << i <<" ";
	cout << endl;
	for(i = 2; i <= size;i++)
		cout<<"____";
	for(i =2;i<=size; i++)
	{
		cout<< endl
        <<setw(3)<< i<<" |";
		for(j=2;j<=size;j++)
			cout<< setw(3)<<i*j<<" ";
	}
	cout<<endl;
	return 0;
}
