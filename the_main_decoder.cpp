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
	cout<<rand_call[rand()%3]<<" "<<aa<<" "<<rand_call[3]<<" "<<bb<< " "<<rand_call[4]<<" "<<vv<<" "<<rand_call[5]<< " ";
}
void coder(){
	freopen("strange_3.story","w",stdout);
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
		cout<< " goto "<< ((mas[t] * 5) % 103) + 7<<endl;
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
		cout<< " goto "<< ((mas[t] * 5) % 103) + 110<<endl;
	}
	j = j + 102;
	host(j);
	cout<<s[13][1]<<endl;
	j++;
	host(j);
	cout<<s[14][1]<<endl;
}
/*void decoder(){
	freopen("strange.story","r",stdin);
	freopen("main.cpp","w",stdout);
	string a0;
	string tocheck;
	string gogo;
	int where, ttt;
	int j;
	int aa,bb,cc;
	aa=0;
	while (aa<213){
		cin>>a0>>aa>>a0>>bb>>a0>>cc>>a0;
		aa = (aa-1)*100 + (bb-1)*10 + cc-1;
		if ((aa < 7)||(aa==109)||(aa>=212)){
			cin>>tocheck;
			for(j=0;j<15;j++){
				if(s[j][1]==tocheck){
					cout<<s[j][0]<<endl;
					break;
				}
			}
		} else {
			cin>>tocheck>>gogo>>where;
			ttt = 0;
			if (where>=111){
				ttt = 110;
			} else {
				ttt = 7;
			}
			cout<< "line"<<aa<< " : ";
			for(j=0;j<15;j++){
				if(s[j][1]==tocheck){
					cout<<s[j][0]<<endl;
					cout<< " goto line"<< back_mas[where-ttt]+ttt<<endl;
					break;
				}
			}
		}
	}
	
}*/
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
	s[0][1] = "ochen";
	s[1][1] = "strannye_deti";
	s[2][1] = "zvali_dimy_gulat";
	s[3][1] = "zvali_dimy_katat";
	s[4][1] = "ne_ot_singltone_stadat";
	s[5][1] = "hotelos'kak_luchshe";
	s[6][1] = "No_ne_poshlo";
	s[7][1] = "botat";
	s[8][1] = "spat";
	s[9][1] = "POSLE_PAR_POGULYAU";
	s[10][1] = "srajatsya";
	s[11][1] = "pokoryat";
	s[12][1] = "voevat";
	s[13][1] = "OTKRblBAETCYA_PODbE3D";
	s[14][1] = "DIMOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOON";
	rand_pool[0] = "poyut";
	rand_pool[1] = "tancyut";
	rand_pool[2] = "igreyut";
	rand_pool[3] = "veselyatsya";
	rand_pool[4] = "pit";
	rand_pool[5] = "snejki";
	rand_pool[6] = "valentike";
	rand_pool[7] = "plyaski";
	rand_pool[8] = "veselie";
	rand_call[0] = "MAMA_KRICHIT";
	rand_call[1] = "DETI_ZOVUT";
	rand_call[2] = "SOSEDI_GORYAT";
	rand_call[3] = "etaj";
	rand_call[4] = "podbezd";
	rand_call[5] = "okno";
	mas[0] = 1;
	int i;
	for(i=1;i<102;i++){
		mas[i] = (mas[i-1] * 5)% 103;
	}
	for(i=0;i<102;i++){
		back_mas[mas[i]] = mas[102 - i];
	}
	//coder();
	freopen("strange_3.story","r",stdin);
	freopen("main.cpp","w",stdout);
	string a0;
	string tocheck;
	string gogo;
	int where, ttt;
	int j;
	int aa,bb,cc,aaa;
	aa=0;
	for(i=0;i<214;i++){
		cin>>a0;
		cin>>aaa>>a0;
		//cout<<a0<<endl;
		cin>>bb>>a0;
		//cout<<bb<<endl;
		cin>>cc>>a0;
		//cout<<a0<<endl;
		//cerr<<aaa<<" "<<bb<<" "<<cc<<endl;
		aa = (aaa-1)*100 + (bb-1)*10 + cc-1;
		//cerr<<"DONE! "<<aa<<endl;
		if ((aa < 7)||(aa==109)||(aa>=212)){
			cin>>tocheck;
			for(j=0;j<15;j++){
				if(s[j][1]==tocheck){
					cout<<s[j][0]<<endl;
					break;
				}
			}
		} else {
			cin>>tocheck>>gogo>>where;
			ttt = 0;
			if (where>=111){
				ttt = 110;
			} else {
				ttt = 7;
			}
			//cout<< "line"<<aa<< ": int *p_var = new int; delete pvar;"<<endl;
			for(j=0;j<15;j++){
				if(s[j][1]==tocheck){
					cout<<s[j][0];
					break;
				}
				
			}
			/*if (where!=8&&where!=111){
				cout<< " goto line"<< where<<endl;
			}*/
		}
	}
	
	return 0;
}
	