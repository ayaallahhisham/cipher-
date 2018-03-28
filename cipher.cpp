#include <iostream>
#include <string>
using namespace std;

int main()

{int x;
    cout<<"Ahlan ya user ya habibi"<<endl;
    cout<<"What do you like to do today? "<<endl;
    cout<<"1- Cipher a message "<<endl;
    cout<<"2- Decipher a message "<<endl;
    cout<<"3- End "<<endl;
    cin>>x;
     if (x==1){
            string word="abcdefghijklmnopqrstuvwxyz";
    string message;
    string result = "";
    int length;
    cout<<"Enter the chipher key : ";
    cin>>message;
    length=message.length();

    for(int i=0; i<26; i++)
    {
        bool found = false;
        for (int j=0; j<length; j++)
        {
            if(word[i]==message[j])
            {
                found = true;
            }
        }
        if(!found)
            result+=word[i];
    }

    string cipherKey = message+result;
    cout<<"Cipher Key: "<<cipherKey<<endl;
    string input;
    cout<<"Please enter the message : ";
    cin>>input;
    string encrypted = "";
    for(int i = 0;i < input.length();i++){
        for(int j = 0;j < word.length();j++)
        {
            if(input[i] ==word[j]){
                encrypted += cipherKey[j];
            }
//            else if(input[i] == ' ')
//                encrypted += ' ';
        }
    }
    cout<<encrypted;
     }
if(x==2){
    string hello;
    string cipherKey;
    cipherKey="abcdefghijklmnopqrstuvwxyz";

    hello="cairobdefghjklmnpqstuvwxyz";
    cout<<"Enter the cipher message : ";
    string cipherword;
    cin>>cipherword;
    string realyword;
    for(int i = 0;i < cipherword.length();i++){
        for(int j = 0;j < hello.length();j++)
        {
            if(cipherword[i] ==hello[j]){
                realyword += cipherKey[j];
            }
//            else if(input[i] == ' ')
//                encrypted += ' ';
        }
    }cout<<realyword;


}if(x==3)
cout<<"byebye";

    return 0;
}
