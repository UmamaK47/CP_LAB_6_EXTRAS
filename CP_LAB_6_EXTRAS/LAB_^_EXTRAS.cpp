/*
//TASK 1
#include<iostream>
using namespace std;
int main() {

	int end,den=1,i=1;
	double term,sum = 0;
	cout << "enter ending point to your series=";
	cin >> end;

		if (end < 0) {
			while (end < 0) {
			cout << "enter positive integer for ending point\n";
			cin >> end;

			}
		}
		for (i = 1; i <= end; i++) {

			double term = 1 / pow(i, i);
			sum = sum +term;
			cout << "1/"<<  i << " ^ " << i << "=" << term;
			cout << endl;

		}
		cout << "sum of these terms is=" << sum;
	cout << endl;
	return 0;
}
//TASK 2
#include<iostream>
using namespace std;
nt main() {
	int x, n;

	cout << "Input the value of x: ";
	cin >> x;

	cout << "Input number of terms: ";
	cin >> n;

	int term = x;
	int sum = term;

	cout << "The values of the series:" << endl;
	cout << term << endl;

	for (int i = 1; i < n; i++) {
		term = -term * x * x;
		sum += term;

		cout << term << endl;
	}

	cout << "The sum of the series up to " << n << " terms is: " << sum << endl;

	return 0;
}
*/