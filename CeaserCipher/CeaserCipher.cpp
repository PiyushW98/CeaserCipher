#include<bits/stdc++.h>
using namespace std;

int integer(char letter){
    int ret;
    map<int,char> m;
    m.insert({0,'a'});
    m.insert({1,'b'});
    m.insert({2,'c'});
    m.insert({3,'d'});
    m.insert({4,'e'});
    m.insert({5,'f'});
    m.insert({6,'g'});
    m.insert({7,'h'});
    m.insert({8,'i'});
    m.insert({9,'j'});
    m.insert({10,'k'});
    m.insert({11,'l'});
    m.insert({12,'m'});
    m.insert({13,'n'});
    m.insert({14,'o'});
    m.insert({15,'p'});
    m.insert({16,'q'});
    m.insert({17,'r'});
    m.insert({18,'s'});
    m.insert({19,'t'});
    m.insert({20,'u'});
    m.insert({21,'v'});
    m.insert({22,'w'});
    m.insert({23,'x'});
    m.insert({24,'y'});
    m.insert({25,'z'});

    for(auto i : m){
        if(i.second == letter)
            ret = i.first;
    }
    return ret;
}

char character(int key){
    char ret;
    map<int,char> m;
    m.insert({0,'a'});
    m.insert({1,'b'});
    m.insert({2,'c'});
    m.insert({3,'d'});
    m.insert({4,'e'});
    m.insert({5,'f'});
    m.insert({6,'g'});
    m.insert({7,'h'});
    m.insert({8,'i'});
    m.insert({9,'j'});
    m.insert({10,'k'});
    m.insert({11,'l'});
    m.insert({12,'m'});
    m.insert({13,'n'});
    m.insert({14,'o'});
    m.insert({15,'p'});
    m.insert({16,'q'});
    m.insert({17,'r'});
    m.insert({18,'s'});
    m.insert({19,'t'});
    m.insert({20,'u'});
    m.insert({21,'v'});
    m.insert({22,'w'});
    m.insert({23,'x'});
    m.insert({24,'y'});
    m.insert({25,'z'});

    for(auto i : m){
        if(i.first == key)
            ret = i.second;
    }
    return ret;
}

string CeaserCipherEncryption(string message , int key){
    string encrypt = "";
    for(int i=0;i<message.size();i++){
        if(message[i] == ' '){
            encrypt+=' ';
        }
        else{
        int before = integer(message[i]);
        before+=key;
        before=(before % 26);
        char mess = character(before);
        encrypt+=mess;
        }
    }
    return encrypt;
}

string CeaserCipherDecryption(string message , int key){
    string decrypt="";
    for(int i=0;i<message.size();i++){
        if(message[i]==' ')
        decrypt+=' ';
        else{
        int before = integer(message[i]);
        before-=key;
        //
        if(before<0){
            before+=25;
        }
        char mess = character(before);
        decrypt+=mess;
        }
    }
    return decrypt;
}

int main(){
    system("cls");

    cout<<"Enter the string to encrypt"<<endl;
    string message;
    getline(cin , message);
    cout<<"Enter the key"<<endl;
    int key;
    cin>>key;
    transform(message.begin(),message.end(),message.begin(),::tolower);
    string encrypt = CeaserCipherEncryption(message , key);
    cout<<encrypt<<endl;
    string decrypt = CeaserCipherDecryption(encrypt , key);
    cout<<decrypt<<endl;
    
    return 0;
}