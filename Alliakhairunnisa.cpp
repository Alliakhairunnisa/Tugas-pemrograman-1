#include<iostream>
#include<iomanip>

using namespace std;

struct mahasiswa {
  int npm;
  string nama;
  int mid, semester;
  float akhir;
  char huruf;
};

int main() {
  mahasiswa mhs[100];
  int jmlh;
  
  cout<<"Masukkan Jumlah Data: ";
  cin>>jmlh;
  
  if (jmlh>100 || jmlh<=0) {
    cout<<"Jumlah data harus antara 1 dan 100.\n";
    return 1;
  }
  
  for(int i=0; i<jmlh; i++) {
    cout<<"\nData Nilai Ujian Mahasiswa Ke-"<<i+1<<endl;
    cout<<"NPM: ";
    cin>>mhs[i].npm;
    cout<<"Nama: ";
    cin.ignore();
    getline(cin, mhs[i].nama);
    cout<<"Nilai Mid: ";
    cin>>mhs[i].mid;
    cout<<"Nilai Semester: ";
    cin>>mhs[i].semester;
    
    mhs[i].akhir = 0.4f * mhs[i].mid + 0.6f * mhs[i]. semester;
    
    mhs[i].huruf = (mhs[i].akhir>=80) ? 'A' :
                   (mhs[i].akhir>=70) ? 'B' :
                   (mhs[i].akhir>=55) ? 'C' :
                   (mhs[i].akhir>=40) ? 'D' : 'E' ;
  }
  
  cout<<"\nData Nilai Ujian Pemrograman C++\n"
      <<"Dosen : Bodiman, S.SI\n"
      <<"------------------------------------------------------------------\n"
      <<left<<setw(5)<<"No"<<setw(10)<<"NPM"<<setw(15)<<"Nama"
      <<setw(10)<<"Mid"<<setw(10)<<"Semester"
      <<setw(10)<<"Akhir"<< setw(5)<<"Huruf"<<endl
      <<"------------------------------------------------------------------\n"<<endl;
  
  for (int i=0; i<jmlh; i++) {
    cout<<left<<setw(5)<<i+1<<setw(10)<<mhs[i].npm<<setw(15)<<mhs[i].nama
        <<setw(10)<<mhs[i].mid<<setw(10)<<mhs[i].semester
        <<setw(10)<<fixed<<setprecision(2)<<mhs[i].akhir<<setw(5)<<mhs[i].huruf<<endl;
  }
  
  cout<<"\n------------------------------------------------------------------\n"<<endl;
 
  return 0;
}
