#include <iostream>
using namespace std;
int main(){
	
	//main variable
	string username;
	int password;
	int jumlah_login = 0;
	//main variable
	
	while( jumlah_login <= 3 ){
		//input group
		cout << ">>>>>>>>>>>>>>>>>"<<endl;
		cout << "Masukkan username: ";
        cin >> username;
        cout << "Masukkan password: ";
        cin >> password;
        cout << "<<<<<<<<<<<<<<<<<"<<endl;
		//input group
		
		//checking the id & password
		if( username == "rpl2020" && password == 12345 ){
			cout<<"Login Sukses!";
			break;
		}
		
		else{
			jumlah_login++;
			cout<<"Input Salah\n";
			cout<<endl;
		}
	}
	
	if( jumlah_login > 3 ){
		cout<<"KESEMPATAN ANDA HABIS";
	}
	
}

