#include <iostream>
using namespace std;



int ustalma(int sayi,int ust) {

	 int sonuc = 1;
	for (int i = 1; i <= ust; i++)
	{
		sonuc *= sayi;
	}
	return sonuc;
}
int main() {
		
	for (int i = 1; i <= 20; i++)
	{

		cout << ustalma(2, i)-1 << endl;

	}

}