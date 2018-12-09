#include <iostream>
#include <string>
using namespace std;
#include "TRI.h"

int main(){
cout<<"Enter your message\r\n>";
string mess=GetStr();
int len = GetLen(mess);
//Encryption
string encr;
for(int i = 0;i<len;i++){
    char ch = mess[i];
    int shift = i*2;
    ch-=97;
    ch+=shift;
    ch%=26;
    ch+=97;
    encr+=ch;
}
cout<<encr<<endl;
//Decryption
string decr;
for(int i = 0;i<len;i++){
   char ch = encr[i];
   int shift = i*2;
   ch-=97;
   ch-=shift;
   while(ch<0){
    ch+=26;
   }
   ch+=97;
   decr+=ch;
}
cout<<decr<<endl;
return 0;
}
