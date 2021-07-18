#include <iostream>

using namespace std;

int sum(int, int);

int main()
{
 int a, b;
 cout << "Please enter two numbers: ";
 cin >> a >> b;
 cout << "The sum of those numbers are: " << sum(a, b) << endl;

 return 0;
}

int sum(int x, int y){
	return x + y;
}
