#include <iostream>

using namespace std;

int main()

{
	int a = 0;
	int i, i_kurang, mak_2=0;
	int mak = 0, min = 0, selisih [999] = {0};
	int data[a];
	float rata2 = 0, rata = 0;
	
	cout<<"Masukkan Banyak Angka\t: ";
	cin>> a;
	
	for (i=0; i<a; i++)     
	{
		cout << "Angka ke-" << i+1 << ": ";
		cin >> data[i];
	}

	cout << "  " << endl;
	cout << "  " << endl;
	cout << "________Hasil________" <<endl;
	
	cout << "Deret\t\t : ";
	for (i=0; i<a; i++)
	{
	cout << data[i] << " " ;
	}
	cout << endl;
	
	mak = data[0];
	for (i=0; i<a; i++)
	{
		if (data[i] > mak)
		{
			mak = data[i];
		}
		else 
		min = data[0];
		if(data[i] < min)
		{
			min = data[i];
		}
	}
	cout<<"Maksimum\t : " << mak << endl;
	cout<<"Minimum\t\t : "<< min <<endl;


	for(i=0; i<a; i++)
	{
		rata = rata + data[i];
	}
	rata2 = rata/a;
	cout<<"Rata-Rata\t : "<< rata2 <<endl;

	a = a-1;
	for (i=0; i<a; i++)
	{
		i_kurang = i+1;
	
		if (i<a)selisih[i] = data[i] - data [i_kurang];
		else selisih[i] = 0;
		
		if (selisih [i]<0) selisih[i] = selisih[i] * (-1);
		
		mak_2 = selisih [0];
		if (selisih [i] > mak_2)
		{
			 mak_2 = selisih [i];
		}
	}
	cout << "Selisih Max\t : " << mak_2 <<endl;
		
return 0;
}
