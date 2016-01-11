#include <iostream>
#include <string.h>

using namespace std;
int main(int argc , char* argv[]){

	unsigned int cnt=0,index=0;

	cin >> cnt;

	unsigned int position;
	char  str[81];
	while(cnt--){
		
		memset(str,81,0x00);
		cin >> position >> str;
		int length = strlen(str);
		for(int i=position;i<=length;i++){
			str[i-1]=str[i];
		}
		index++;
		cout << index << " " << str <<"\n";
	}

}


