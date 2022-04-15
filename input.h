using namespace std;

class Input {
public:
  void cetak() {
    cout << "Berapa uang saku bulanan anda -> ";cin >> uangsaku;
    
  }
  void toFile() {
    tulis_data.open("api.data.txt");
    tulis_data << uangsaku;
    tulis_data.close();
  }

private:
  ofstream tulis_data;
  int uangsaku;
};