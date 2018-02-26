#include <iostream>
#include <fstream>
#include <string>
int runner(const char* file){
	char buff[101];
	char programm[300];
	int i;
	int f,j;
	string temp0;
	char temp;
	for(i=0;i<101;i++){
		buff[i]=0;
	}
	fstream in(file);
	i=1;
	f=0;
	//cout<<"hello "<<in.eof()<<endl;;
	while (!in.eof()){
		getline(in,temp0);
		//cout<<"read "<<f<<endl;
		programm[f] = temp0[0];
		f++;
	}
	j=0;
	while (j<f){
		if(j<0 or j>299){return 1;}
		temp = programm[j];
		switch (temp){
			case 'A':
				i++;j++;
				break;
			case 'G':
				i--;j++;
				break;
			case 'S':
				buff[i]++;j++;
				break;
			case 'D':
				buff[i]--;j++;
					break;
			case 'J':
				cout<<(buff[i]);j++;
					break;
			case 'Y':
				if(buff[i]!=0){j++;}else{while(programm[j]!='N'){j++;}} 
				break;
			case 'N':
				if(buff[i]==0){j++;}else{while(programm[j]!='Y'){j--;if(j<0)return 1;}}
				break;
			default: return 1;
		}
	}
	return 0;
}