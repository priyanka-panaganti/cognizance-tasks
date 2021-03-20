#include<iostream>
using namespace std;
int main()
{
	// declaring integers x and n as positions of elephant and friend
	int x,n;
	int steps=0;
	cin >> x;
	if (x <= 5)cout << "1";
	else 
		if (x % 5 == 0)
	    {
		    n = x / 5;
		    cout << n;
	    }
	    else
		{
			n = x / 5 + 1;
			cout << n;
	    }
 
}
