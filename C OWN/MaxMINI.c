
#include <iostream>
using namespace std;

int main()
{
	int n,x,y;

	cin>>n;

	for(int i;i<=n;i++)
    {
		cin >>x>>y;
		if(x<y)
		cout << "<";
		else if(x>y)
		cout <<">";
		else
		cout <<"=";
		cout <<endl;
	}

	return 0;
}
