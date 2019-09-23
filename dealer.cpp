#include <iostream>
#include <string>

//PROGRAM DEALER

using namespace std;
class motor //class induk 1
{
	protected :
		int jm, jmp;
    public :
    	void rp1()
    	{
			cout<<"masukkan jumlah motor masuk dealer : "; cin >> jm;
			cout<<"masukkan jumlah motor yang terjual : "; cin >> jmp;
		}
};

class alamat {
    public:
   string namaJalan, kota;
     alamat(string namaJalan, string kota)
    {
        this->namaJalan = namaJalan;
        this->kota = kota;
    }
};

class car //class induk 2
{
	protected :
		int jc, jcp;
    public :
    	void rp2()
    	{
			cout<<"masukkan jumlah mobil masuk dealer : "; cin>>jc;
			cout<<"masukkan jumlah mobil yang terjual : "; cin >> jcp;
			cout<<endl;
		}
};
class hasil : public motor, public car //inheritance, polymorphism
{
	private :
		alamat* almt; //aggregation
	int totalKendaraan, totalTerjual;
	string namaJalan="Jalan Ketintang", kota="Surabaya";
	public :

		void total()
		{
			totalKendaraan = (jm+jc);
			totalTerjual = (jmp+jcp);
			cout<<"jumlah mobil : "<<jc;
			cout<<endl;
			cout<<"jumlah mobil yang terjual : "<<jcp;
			cout<<endl;
			cout<<"jumlah mobil yang tersisa : "<<jc-jcp;
			cout<<endl;
			cout<<"alamat tempat dealer : "<<namaJalan<<" "<<kota;
			cout<<endl;
			cout<<endl;
			cout<<"jumlah motor : "<<jm;
			cout<<endl;
			cout<<"jumlah motor yang terjual : "<<jmp;
			cout<<endl;
			cout<<"jumlah motor yang tersisa : "<<jm-jmp;
			cout<<endl;
			cout<<"alamat tempat dealer : "<<namaJalan<<" "<<kota;
			cout<<endl;
			cout<<endl;
			cout<<"total kendaraan : "<<totalKendaraan<<endl;
			cout<<"total kendaraan yang terjual : "<<totalTerjual<<endl;
			cout<<"total sisa kendaraan: "<<totalKendaraan-totalTerjual<<endl;
		}

};
int main()
{
	alamat a1= alamat("Jalan Ketintang","Surabaya");
	hasil a;
	a.rp1();
	a.rp2();
	a.total();
	return 0;
}
