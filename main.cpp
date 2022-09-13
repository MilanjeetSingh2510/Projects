#include<bits/stdc++.h>
using namespace std;
string Cipher(string Msg,int key)
{
    for(int i=0;i<Msg.length();i++)
    {
        if(Msg[i] != ' ')
        Msg[i]+=key;
    }
    return Msg;
}
string True(string Msg,int key)
{
    for(int i=0;i<Msg.length();i++)
    {
        if(Msg[i] != ' ')
        Msg[i]-=key;
    }
    return Msg;
}
int main()
{
    string Msg;
    int key;
    cout<<"Enter the Message:\n";
    getline(cin,Msg);
    cout<<"Enter the Key:\n";
    cin>>key;
    cout<<"Encrypted Code :\n";
    Msg = Cipher(Msg,key);
    cout<<Msg<<endl;
    cout<<"Decrypted Message:\n";
    Msg = True(Msg,key);
    cout<<Msg<<endl;
    return 0;
}