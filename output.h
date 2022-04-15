using namespace std;

class Output{
public :
  void getData() {
			ifstream ambil_data;
			ambil_data.open("api.data.txt");
			while (!ambil_data.eof()){
				ambil_data >> tabungan;
			}
			ambil_data.close();
		}
    void toFile(){
      cout<<"Sisa Tabungan Anda adalah = "<<tabungan<<endl;

      tulis_data.open("api.data.txt");
      tulis_data <<tabungan;
      tulis_data.close();
      
      }
  private :
    ifstream ambil_data;
    ofstream tulis_data;
    int tabungan;
};
  