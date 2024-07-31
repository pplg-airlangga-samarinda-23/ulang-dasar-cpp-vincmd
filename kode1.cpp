#include<iostream>
using namespace std;

    void cetakdata(string nama,string nisn,string jurusan,int beratbadan);
int main(){
    int jadi,input;
    cout <<"masukkan nama<<\n";
    cin >> nama;
    cout <<"masukkan nisn<<\n";
    cin >> nisn;
    cout <<"masukkan jurusan\n";
    cin >> jurusan;
    cout <<"masukkan tinggi badan\n";
    cin >> beratbadan
    jadi=cetakdata(nama,nisn,jurusan,beratbadan);
    cout << "hasilnya yang anda buat adalah" <<jadi <<endl;

}