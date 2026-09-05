#include <iostream>
#include <map>
#include<string>
using namespace std;
string ToText(string s,map<char,string> m1){
    string count,final;
    for (char c:s){
        if (c=='/'){
            final+=" "; 
            count="";
        }
        else if (c!=' '){
            count+=c;
        }
        else if (c==' '){
            for (auto it=m1.begin(); it!=m1.end(); it++){
                if (it->second==count){
                    final+=it->first;
                }
            }
            count="";

        }
    }
    if (count!=""){
        for (auto it=m1.begin(); it!=m1.end(); it++){
            if (it->second==count){
                final+=it->first;
                }
            }

    }


return final;
}

string ToMorse(string s, map<char,string>m1){
    string final;
    for (char c:s){
        if (c!=' '){
        auto it=m1.find(c);
        final+=it->second;
        final+=" ";}
        else if (c==' '){
            final+="/ ";


        }

}
return final;
    
}

int main(){
    map<char,string> m1 = {
    {'A', ".-"}, {'B',"-..."}, {'C',"-.-."}, {'D', "-.."} ,{'E', "."}, {'F', "..-."}, {'G', "--."},{'H', "...."}, {'I',".."}, {'J', ".---"},{'K',"-.-"},
    {'L', ".-.."}, {'M',"--"},{'N',"-."},{'O',"---"}, {'P',".--."}, {'Q',"--.-"}, {'R',".-."},{'S',"..."}, {'T',"-"}, {'U',"..-"},{'V',"...-"},{'W',".--"},
    {'X',"-..-"},{'Y',"-.--"},{'Z',"--.."} 
};
int n=-1;
string s;
while(true){
    cout<<"Menu\n";
    cout<<"1.Choose 1 to translate from morse code to text\n";
    cout<<"2.Choose 2 to translate from text to morse code\n";
    cout<<"3.Choose 3 to exit\n";
    cin>>n;
    if (n==1){
    cout<<"Enter the text:"<<endl;
    cin.ignore();
    getline(cin,s);
    cout<<ToText(s,m1)<<endl;
    continue;
    }
    else if (n==2){
        cout<<"Enter the text:"<<endl;
        cin.ignore();
        getline(cin,s);
        cout<<ToMorse(s,m1)<<endl;
        continue;
    }
    else if(n==3){
        break;
    }
    else{
        cout<<"Error, You entered a wrong number!";
        continue;
    }

}

}
