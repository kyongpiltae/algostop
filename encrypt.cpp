#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char * argv[]){

unsigned int cnt, output;
string line;
char chr[1001];
char dst[1001];
char temp[2];
cin >> cnt;

while(cnt--){

	int length;
	unsigned int index1=0,index2=0;
	memset(chr,0x00,1001);
	memset(dst,0x00,1001);

	cin >> chr;
	length = strlen(chr);

	for(int i=0;i<length;i++){

		if(i%2 ==0 ){
			dst[index1++] = chr[i]; 
		}

	}
	
	for(int i=0;i<length;i++){

		if(i%2 !=0 ){
			dst[index1++] = chr[i]; 
		}

	}
	
	cout << dst << '\n';
}
return 0;

}
