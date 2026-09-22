#include<iostream>
using namespace std;

//convert binary number to decimal 

void BinToDec(int num){
   
    int n=num;
    int dec=0;

    int pow=1;//2^0 2^1 2^2 2^3
    
    while(n>0){
        int digit=n%10;
        
        dec+=digit*pow;
        pow=pow*2;
        n/=10;

    }
    cout<<dec<<endl;
   


}



//convert decimal number to Binary 

void DecToBin(int num){
   
    int n=num;
    int bin=0;

    int pow=1;//10^0 10^1 10^2 10^3
    
    while(n>0){
        int rem=n%2;
        
        bin+=rem*pow;
        pow=pow*10;
        n/=2;

    }
    cout<<"binary of" <<num<<"=" <<bin<<endl;
   

}
int main(){
    BinToDec(1101);
    DecToBin(4);
}