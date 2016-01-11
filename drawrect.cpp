#include <iostream>
using namespace std;

int main(int argc , char* argv[]){

	unsigned int cnt;
	unsigned int inputx[4],inputy[4];

	unsigned int remainx,remainy;
	cin >>  cnt;
	while(cnt--){
		cin >> inputx[0]>> inputy[0];
		cin >> inputx[1]>> inputy[1];
		cin >> inputx[2]>> inputy[2];

		if(inputx[0] == inputx[1])
		{
			remainx = inputx[2];
		}else if(inputx[0] == inputx[2]){
			remainx = inputx[1];
		}else{
			remainx = inputx[0];
		}
	
		if(inputy[0] == inputy[1]){
			remainy = inputy[2];
		} else if(inputy[0] == inputy[2]){
			remainy = inputy[1];
		} else{
			remainy = inputy[0];
		}

	cout << remainx << ' '<<remainy<< '\n';
	}

}
