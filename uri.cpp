#include <iostream>
#include <string.h>

using namespace std;
char conver(char *val);

int main(int argc , char* argv[]){
        unsigned int cnt=0,index=0;
        cin >> cnt;
        unsigned int position;
        char  str[83];
        char  str1[83];
        while(cnt--){

                memset(str,83,0x00);
                memset(str1,83,0x00);
                cin >>  str;
                int length = strlen(str);
                int j=0;
                for(int i=0;j<=length;i++){

                   if(str[j] != '%'){
                        str1[i]=str[j];
                   }else{

                        str1[i]=conver(&str[++j]);
			if(str1[i] == 0x00)
			  {
				str1[i++] = str[j-1];
				str1[i++] = str[j];
				str1[i] = str[j+1];
			  }
                        j++;
                   }
                        j++;
                }
                cout << str1<<'\n';
        }
}

char conver(char *val){
        if(!strncmp(val,"20",2))
                return ' ';
        if(!strncmp(val,"21",2))
                return '!';
        if(!strncmp(val,"24",2))
                return '$';
        if(!strncmp(val,"25",2))
                return '%';
        if(!strncmp(val,"28",2))
                return '(';
        if(!strncmp(val,"29",2))
                return ')';
        if(!strncmp(val,"2a",2))
                return '*';
        if(!strncmp(val,"2b",2))
                return '+';
	return 0x00;
}


