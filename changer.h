#include <iostream>
#include <string>
#include <fstream>
using namespace std;
void gotop(string what, string what_c, const char* file_in, const char* file_out){
	string temp;
	ifstream in(file_in);
	ofstream out(file_out);
	while (in.eof() != true){
		cin>>temp;
		if (temp == what) temp = what_c;
		cout<<temp<<endl;
	}
	in.close();
	out.close();
}
void agotop(string what_c, string what, const char* file_out, const char* file_in){
	string temp;
	freopen(file_in, "r", stdin);
	freopen(file_out, "w", stdout);
	ifstream in(file_out);
	ofstream out(file_in);
	while (in.eof() != true){
		cin>>temp;
		if (temp == what) temp = what_c;
		cout<<temp<<endl;
	}
	in.close();
	out.close();	
}