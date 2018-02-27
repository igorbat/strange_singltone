#include "changer.h"
#include <string>
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;
string s[15][2];
string rand_pool[9];
string rand_call[6];
int mas[105];
int back_mas[105];
void host(int cc){
	int aa,bb,vv;
	aa = (cc / 100) + 1;
	bb = ((cc %100) / 10) + 1;
	vv = (cc % 10) + 1;
	cout<<rand_call[rand()%3]<<aa<<rand_call[3]<<bb<<rand_call[4]<<vv<<rand_call[5];
}
void coder(){
	freopen("strange.story","w",stdout);
	int i;
	int j = 0;
	int t;
	for(i=0;i<7;i++){
		host(j);
		j++;
		cout<<s[i][1]<<endl;
	}
	int wer,war,wor, qqqq;
	wer = rand()%103;
	war = rand()%103;
	while (war == wer){
		war = rand()%103;
	}
	for(t=0;t<102;t++){
		host(j+t);
		if(t==war or t == wer){
			if ( t == war){
				cout<<s[7][1];
			} else {
				cout<<s[8][1];
			}
		} else {
			cout<<rand_pool[rand()%9];
		}
		cout<< " goto "<< ((mas[t] * 5) % 103) + 7<< ";"<<endl;
	}
	j = j + 102;
	host(j);
	cout<<s[9][1]<<endl;
	j++;
	wer = rand()%103;
	war = rand()%103;
	while (war == wer){
		war = rand()%103;
	}
	wor = rand()%103;
	while(wor==war || wor==wer){
		wor = rand()%103;
	}
	for(t=0;t<102;t++){
		host(j+t);
		if(t==war || t == wer || t == wor){
			if ( t == war){
				cout<<s[10][1];
			} else {
				if(t == wer){
					cout<<s[11][1];
				} else {
					cout<<s[12][1];
				}
			}
		} else {
			cout<<rand_pool[rand()%9];
		}
		cout<< " goto "<< ((mas[t] * 5) % 103) + 110<< ";"<<endl;
	}
	j = j + 102;
	host(j);
	cout<<s[13][1]<<endl;
	j++;
	host(j);
	cout<<s[14][1]<<endl;
}
void decoder(){
	
	
}
int main(){
	s[0][0] = "#include \"changer.h\" ";
	s[1][0] = "#include \"the_first.h\" ";
	s[2][0] = " #include <iostream> ";
	s[3][0] = "using namespace std;";
	s[4][0] = "//jeu_de_singltone";
	s[5][0] = "class compiler{";
	s[6][0] = "  private:";
	s[7][0] = "  static compiler * p_instance;";
	s[8][0] = "    compiler(){}compiler( const compiler& );compiler& operator=( compiler& );";
	s[9][0] = "  public:";
	s[10][0] = "    static compiler * getInstance(){if(!p_instance)p_instance = new compiler();return p_instance;}";
	s[11][0] = " int run(const char* file){return runner(file);}";
	s[12][0] = " void compi(int get_count){/*play_music or nothing*/}";
	s[13][0] = "};";
	s[14][0] = "compiler* compiler::p_instance = 0;int main(){compiler* the_once = compiler :: getInstance();int t =  the_once -> run(\"ya.dimoon\");the_once -> compi(t);return 0;}";
	s[0][1] = " ochen ";
	s[1][1] = " strannye_deti ";
	s[2][1] = " zvali_dimy_gulat ";
	s[3][1] = " zvali_dimy_katat ";
	s[4][1] = " ne_ot_singltone_stadat ";
	s[5][1] = " hotelos'kak_luchshe ";
	s[6][1] = " No ne poshlo ";
	s[7][1] = " %:??; ";
	s[8][1] = " %:?;; ";
	s[9][1] = " POSLE_PAR_POGULYAU ";
	s[10][1] = " %:?*^^^; ";
	s[11][1] = " %:?*@#$; ";
	s[12][1] = " %@#$:?*; ";
	s[13][1] = " OTKRblBAETCYA_PODbE3D ";
	s[14][1] = " DIMOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOON ";
	rand_pool[0] = " %:?*;";
	rand_pool[1] = " %:?*;%^$^$%^";
	rand_pool[2] = " %:&&&?*;";
	rand_pool[3] = " %:?**&;";
	rand_pool[4] = " %:?*><>;";
	rand_pool[5] = " %:?<<<*;";
	rand_pool[6] = " %:%^&?*;";
	rand_pool[7] = " %:?**(^%*;";
	rand_pool[8] = " %:?^$%^*;";
	rand_call[0] = " MAMA_KRICHIT ";
	rand_call[1] = " DETI_ZOVUT ";
	rand_call[2] = " SOSEDI_GORYAT ";
	rand_call[3] = " etaj ";
	rand_call[4] = " podbezd ";
	rand_call[5] = " okno ";
	int i=0;
	mas[0] = 1;
	for(i=1;i<102;i++){
		mas[i] = (mas[i-1] * 5)% 103;
	}
	for(i=0;i<102;i++){
		back_mas[mas[i]] = mas[102 - i];
	}
	coder();
	//decoder();
	return 0;
}
	