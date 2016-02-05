#include <iostream>
#include <string>
#include <sstream>
#include <stdio.h>
#include <string.h>
#include <time.h>
using namespace std;
int array3[100]; // answer
clock_t before;

int main(int argc , char* argv[]){
        unsigned int cnt=0,index=0;
	before = clock();
        cin >> cnt;
        unsigned int position;
	int array[100][100];
	int array1[100][100];
	int array2[100];
	int array3[100];
	unsigned int friend_cnt = 0,virus=0;
        while(cnt--){
		int friend_cnt = 0;
		cin >> friend_cnt;
		//cout << "friend count: " << friend_cnt<< endl;
		memset(array,0x00,100*100);
		memset(array1,0x00,100*100);
		for(int i=0;i<friend_cnt;i++){
			for(int j=0;j<friend_cnt;j++){
			cin >> array[i][j];
		//	cout << array[i][j] << " ";
			}
		//	cout << endl;
		}

		cin >> virus;

		for(int i=0;i<virus;i++){
			for(int j=0;j<2;j++){
				cin >> array1[i][j];
		//		cout << array1[i][j] << " ";
			}
	        //	cout << endl;
		}

		int rcnt=0,cocnt=0;
		for(int i=0;i<virus;i++){
			rcnt =0,cocnt=0;
			memset(array3,0x00,100);
			memset(array2,0x00,100);
			array3[cocnt++] = array1[i][0];
			array3[cocnt++] = array1[i][1]; 
			//cout << "new line" << endl;
			for(int j=0;j<cocnt;j++){
				for(int k=0;k<friend_cnt;k++){
					if(array[array1[i][j]-1][k] == 1) {
						array2[rcnt++] = k+1;
					}
				}
		//		cout <<  "rcnt " << rcnt << endl; 
				for(int l=0;l<rcnt;l++){
					if(rcnt<3)
						break;
					for(int m=l+1;m<rcnt;m++){
						if(array2[l] == array2[m]){
							int already = 0;
							for(int n=0;n<cocnt;n++)
								if(array3[n] == array2[l]){ 
									already = 1;
									break;
							}
						        if(already ==0 ) {
								array3[cocnt++]=array2[l];
								array1[i][cocnt-1] = array2[l];
		//						cout << "added " << array1[i][cocnt-1]<<endl; 
							}
						}
					}
				}
			}	
		cout<<cocnt<<" ";
		}
		cout<<endl;
        }
	double result = (double)(clock() - before);// / CLOCKS_PER_SEC;
	cout<< "excution time " << result << endl;
}

