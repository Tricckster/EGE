#include <iostream>
#include <vector>

using namespace std;

void number_of_products_div()
{
	/**
	+ 1.читать и запоминать числа
	+ 2.вывести пары
	+ 3.вместо пар, считать произведения
	+ 4.только пары, кратные 35
	5.только кол-во пар
	*/
	int n(0),cur(0);
	int n35(0),n5(0),n7(0),no(0);
	cin >> n;
	vector<int> numbers(n, 0);
	for (int i(0); i<n; i++)
	{
		
		cin >> cur;
		if (cur % 35 == 0)
		   n35++;
		else if (cur%5==0)
		   n5++;
		else if (cur%7 == 0)
		   n7++;
	}
	no=n-n35-n5-n7;
	cout << n35*(n35-1)/2+n35*n7+n35*n5+n35*no+n5*n7 << endl;
}
int main()
{
    number_of_products_div();
    return 0;
}

