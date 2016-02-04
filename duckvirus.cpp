#include <iostream>
#include <string>
#include <sstream>

using namespace std;
int array3[100]; // answer

int main(int argc , char* argv[]){
        unsigned int cnt=0,index=0;
        cin >> cnt;
        unsigned int position;
	int array[100][100];
	int array1[100][100];
	int array2[100];
	unsigned int friend_cnt = 0,virus=0;
        while(cnt--){
		int friend_cnt = 0;
		cin >> friend_cnt;
		cout << "friend count: " << friend_cnt<< endl;
		for(int i=0;i<friend_cnt;i++){
			for(int j=0;j<friend_cnt;j++){
			cin >> array[i][j];
			cout << array[i][j] << " ";
			}
			cout << endl;
		}
		cin >> virus;

		for(int i=0;i<virus;i++){
			for(int j=0;j<virus;j++){
				cin >> array1[i][j];
				cout << array1[i][j] << " ";
			}
			cout << endl;
		}

		
		int rcnt=0;
		for(int i=0;i<virus;i++){
			for(int j=0;j<virus;j++){ 
				array1[i][j];
				for(k=0;k<friend_cnt;k++){
					if(array[array1[i][j]-1][k] == 1) {
						array2[rcnt++] = k;
					}

				}
			}

	
		}
        }

}

int same (int * array ,int cnt ) {
	int temp;
	int index=0;
	for (int i=0;i<cnt;i++){
		for(int j=i+1;j<cnt;j++) {
			if(array[i] == array[j]) 
				array3[index++] = array[i];
		}
	}

}

int find_friend(int i , int j,int cnt, int (*array)[]){
	
	for(int t=0; t < cnt ; t++){
		array[i][t] 
	}

	
}
