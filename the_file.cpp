#include "changer.h"
#include "the_first.h"
#include <iostream>

using namespace std;
//jeu_de_singltone
class compiler
{
  private:
    static compiler * p_instance;
    compiler() {}
    compiler( const compiler& );  
    compiler& operator=( compiler& );
  public:
    static compiler * getInstance() {
        if(!p_instance)           
            p_instance = new compiler();
        return p_instance;
    }
	int run(const char* file){
		return runner(file);  
	}
	void compi(int get_count){
		//play_music
		//or nothing
	}
};
compiler* compiler::p_instance = 0;
int main(){
	compiler* the_once = compiler :: getInstance();
	int t =  the_once -> run("ya.dimoon");
	the_once -> compi(t);
	return 0;
}