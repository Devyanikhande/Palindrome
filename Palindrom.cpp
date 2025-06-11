#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
string str,rev;
cout<<"Enter the string : ";
cin>>str;
rev=str;
reverse(rev.begin(),rev.end());

if(str==rev){
    cout<<"The given string is PALINDROM.";
}else{
    cout<<"The given string is NOT PALINDROM.";
}
cout<<endl;
return 0;

}