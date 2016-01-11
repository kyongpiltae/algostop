#include <iostream>
using namespace std;

int main(int argc, char * argv[]){

unsigned int cnt, temp,output;
cin >> cnt;

while(cnt--){

	cin >> temp;

	output = (((temp >> 8) & 0xff)<<16) |( ((temp>>16)&0xff)<<8) | ((temp>>24)&0xff)| (temp & 0xff) << 24;
	cout << output << '\n';
}
return 0;

}
