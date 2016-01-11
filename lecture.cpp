#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char * argv[]){

unsigned int cnt, output;
string line;
char chr[1001];
char temp[2];
cin >> cnt;
nclude <iostream>
#include <string.h>
using namespace std;

int main(int argc, char * argv[]){

unsigned int cnt, output;
string line;
char chr[1001];
char temp[2];
cin >> cnt;

while(cnt--){

        int length;
        memset(chr,0x00,1001);
        cin >> chr;
        length = strlen(chr);
        for(int i=0;i<length-2;i=i+2)
                for(int j=i+2;j<length;j=j+2)
                {

                        if(chr[i] >  chr[j])
                        {
                                temp[0] = chr[j];
                                temp[1] = chr[j+1];

                                chr[j] = chr[i];
                                chr[j+1] = chr[i+1];

                                chr[i] = temp[0];
                                chr[i+1] = temp[1];
                        }else if( (chr[i+1] >  chr[j+1]) && (chr[i] == chr[j]))
                        {

                                temp[0] = chr[j];
                                temp[1] = chr[j+1];

                                chr[j] = chr[i];
                                chr[j+1] = chr[i+1];

                                chr[i] = temp[0];
                                chr[i+1] = temp[1];
                        }

                }


        cout << chr << '\n';
}
return 0;

}

while(cnt--){

	int length;
	memset(chr,0x00,1001);
	cin >> chr;
	length = strlen(chr);
	for(int i=0;i<length-2;i=i+2)
		for(int j=i+2;j<length;j=j+2)
		{
		
			if(chr[i] >  chr[j])
			{
				temp[0] = chr[j];		
				temp[1] = chr[j+1];

				chr[j] = chr[i];
				chr[j+1] = chr[i+1];

				chr[i] = temp[0];
				chr[i+1] = temp[1];
			}else if( (chr[i+1] >  chr[j+1]) && (chr[i] == chr[j]))
			{

				temp[0] = chr[j];
        	                temp[1] = chr[j+1];

                	        chr[j] = chr[i];
	                        chr[j+1] = chr[i+1];

        	                chr[i] = temp[0];
                	        chr[i+1] = temp[1];
			} 

		}	

	
	cout << chr << '\n';
}
return 0;

}
