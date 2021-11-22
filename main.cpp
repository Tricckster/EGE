#include <iostream>
#include <vector>

using namespace std;

void number_of_products_div()
{
	/**
	+ 1.читать и запоминать числа
	+ 2.вывести пары
	+ 3.вместо пар, считать произведения
	+ 4.только пары, кратные 154
	5.только кол-во пар
	*/
	int n(0);
	cin >> n;
	vector<int> numbers(n, 0);
	for (int i(0); i<n; i++)
	    cin >> numbers[i];
	for (int j(0); j<n-1; j++)
	    for (int i(j+1); i<n; i++)
	        if ((numbers[i]*numbers[j])%154==0)
	        cout << numbers[i]*numbers[j] << endl;
}

int main()
{
    number_of_products_div();
    return 0;
}

