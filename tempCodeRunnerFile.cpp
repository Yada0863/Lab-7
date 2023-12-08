#include<iostream>
using namespace std;

char before(char x){
	if( x == 'A'){
		char x = 'Z';
		return x;
	}
    if( x > 'A' && x <= 'Z'){
        char y =  x - 1;
        return y;
        }
    else{
        char x = 0;
		return x;
        }

}
