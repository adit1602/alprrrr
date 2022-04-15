using namespace std;

class Proses {
  public :
      void getData() {
			ifstream ambil_data;
			ambil_data.open("api.data.txt");
			while (!ambil_data.eof()){
				ambil_data >> uangsaku;
			}
			ambil_data.close();
		}
    void toFile(){
      
      bulan = 1;
      int tabungan=0;
      do {
      cout<<"Tabungan bulan\n "<<bulan;
      cout<<"UangSaku\n"<<uangsaku;
      cout<<"Pengeluaran\n"<<pengeluaran;
      cout<<"sisa tabungan\n"<<tabungan;
      
      tabungan=tabungan+uangsaku-pengeluaran;
      cout<<"\t\t\t\t\t\t\t\t\t"<<tabungan<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        bulan=bulan+1;
        }
        
        while (mad/='y');
    
      tulis_data.open("api.data.txt");
      tulis_data << tabungan;
      tulis_data.close();
      
    }
  private :
    ifstream ambil_data;
    ofstream tulis_data;
    int uangsaku,pengeluaran,bulan;
    char mad;
};
