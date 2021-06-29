#include <iostream>
#include <math.h>

using namespace std;

//Given a vector with integer elements and an interval [a, b]. Let another vector be formed with elements in the range [a, b].

void main() {
	int x[10], y[10], n, a, b, i, k = 0;
	cout << "Dimension: ";
	cin >> n;
	cout << "smallest value (a) and the largest value (b). " << endl;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "The elements of the vector: " << endl;
	for (i = 1; i <= n; i++) {
		cout << "x[" << i << "]=";
		cin >> x[i];
	}
	cout << "The new vector: " << endl;
	for (i = 1; i <= n; i++)
		if (a <= x[i] && x[i] <= b) {
			k++;
			y[k] = x[i];
			cout << "y[" << k << "]=" << y[k] << endl;
		}
}