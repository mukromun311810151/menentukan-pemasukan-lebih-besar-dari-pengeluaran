#include <iostream>
using namespace std;

int main ()
{
	int pemasukkan, pengeluaran;
	
	cout <<"masukkan pemasukkan : ";
	cin >>pemasukkan;
	cout <<"masukkan pengeluaran : ";
	cin >>pengeluaran;
	
	if (pemasukkan>pengeluaran)
	cout <<"pemasukkan LEBIH BESAR daripada pengeluaran"<<endl;
	else
	cout <<"pemasukkan LEBIH KECIL daripada pengeluaran"<<endl;
	
	return 0;
}
