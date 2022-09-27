#include<iostream>
using namespace std;
int add(int x){
    int a,sum=0;
    while(x!=0){
        a=x%10;
        sum+=a;
        x=x/10;
    }
    return sum;
}
int main(){
    int temp=0,totalSum=0;
    int cardNumber[16];
    cout<<"Credit Card Validator"<<endl;
    cout<<endl<<"Enter your '16' digit Credit Card Number"<<endl<<endl;
    for(int i=0;i<16;i++){
        cout<<"Enter "<<i+1<<"th digit: ";
        cin>>cardNumber[i];
    }
    for(int i=0;i<16;i+=2){
        temp=2*cardNumber[i];
        if(temp>9)
        temp=add(temp);
        cardNumber[i]=temp;
    }
    for(int i=0;i<16;i++)
    totalSum+=cardNumber[i];
    if(totalSum%10==0)
    cout<<endl<<"Valid Credit Card";
    else
    cout<<"Invalid Credit Card";
    return 0;
}