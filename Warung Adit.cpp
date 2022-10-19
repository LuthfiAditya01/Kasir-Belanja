// Nama Anggota Kelompok 1 :

// Kezia Natalia Wongkar (2217051034)
// Luthfi Aditya (2217051062)
// Rofif Ramadhan Khoirullah Sowija (2257051009)

#include <iostream>
using namespace std;

int jumlahharga (float harga, float kuantitas) {
	return harga*kuantitas;
}

int main(){
	
	float totalharga; 
	float kuantitas;
	float totalbarang;
	float totalbarangdibeli = 0;
    float harga[50] = {0, 2000, 3000, 3000, 5000, 10000, 4500, 12000};
    string barang[50] = {"0", "Air Mineral", "Teh", "Kopi", "Teh Tarik", "Tepung Terigu", "Mie Instan", "Beras"};
    string putusan = "iya";
	int nobarang;
	
	cout<<"------------------------------------------"<<endl;
	cout<<"|          Selamat Datang Di             |"<<endl;
    cout<<"|          Warung BANG ADIT              |"<<endl;
    cout<<"------------------------------------------"<<endl;

    cout << " ________________________________________" << endl;
    cout << "|    Nama Barang    |  Harga Per Barang  |" << endl;
    cout << "|______________________ _________________|" << endl;
    cout << "|1. Air Mineral     |  = Rp 2000;        |" << endl;
    cout << "|2. Teh             |  = Rp 3000;        |" << endl;
    cout << "|3. Kopi            |  = Rp 3000;        |" << endl;
    cout << "|4. Teh Tarik       |  = Rp 5000;        |" << endl;
    cout << "|5. Tepung Terigu   |  = Rp 10000;       |" << endl;
    cout << "|6. Mie Instan      |  = Rp 4500;        |" << endl;
    cout << "|7. Beras           |  = Rp 12000;       |" << endl;
    cout << "|________________________________________|" << endl;
    
	do {
		cout<<"--------------------------------------------"<<endl;
    	cout<<"Masukkan nomor barang yang ingin anda beli! ";
    	cin>>nobarang;
    	cout<<"Masukkan jumlah barang yang ingin anda beli ";
    	cin>>kuantitas;
    	if (nobarang<=7&&nobarang>=1) {
    		totalbarangdibeli += kuantitas;
    	cout<<"Anda membeli "<<barang[nobarang]<<" dengan total harganya Rp ";
		cout<<jumlahharga(harga[nobarang], kuantitas)<<";";
		cout<<endl;
		cout<<endl;
		totalbarang=jumlahharga(harga[nobarang], kuantitas);
		cout<<"--------------------------------------------"<<endl;
		totalharga+=totalbarang;
    	cout<<"Apakah anda ingin membeli lagi?? (iya/tidak) ";
    	cin>>putusan;
		} else {
			cout<<"----------------------------------------"<<endl;
			cout<<"INPUT NOMOR SALAH!"<<endl;
			
		
		}
    	
	}
	while (putusan=="iya");
	
	if (putusan=="tidak"){
	    cout<<endl<< "Total Barang \t\t: " << totalbarangdibeli << endl;
	    cout<< "Total Harga Barang \t: Rp " << totalharga <<";"<< endl;
	    cout<< endl ;
		cout<<"------------------------------------------"<<endl;
		cout<<"|              Terima Kasih              |"<<endl;
   		cout<<"|            SUDAH BERBELANJA            |"<<endl;
    	cout<<"|          DI WARUNG BANG ADIT:)         |"<<endl;
    	cout<<"------------------------------------------"<<endl;
	}	

	return 0;
}
