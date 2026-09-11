#include <iostream>
#include <map>
#include<string>
#include <cctype>
using namespace std;
string ToText(string s,map<string,char>& m2){
    string final,count;
    if (s==""){
        return "Invalid Morse";
    }
    for (char c:s){
        if (c=='/'){
            final+=" "; 
        }
        else if (c=='-' || c=='.'){
            count+=c;
        }
        else if (c==' '){
            if (count!=""){
            auto it=m2.find(count);
            if(it!=m2.end()){
            final+=it->second;
            count="";
            }
            else{
                return "Invalid Morse";
            }
        }
    }
        else{
            return "Invalid Morse";
        }
    }
    if (count!=""){
        auto it=m2.find(count);
        if (it!=m2.end()){
            final+=it->second;}
        else{
            return "Invalid Morse";
        }
    }
return final;
}

string ToMorse(string s, map<char,string>& m1){
    string final;
    if(s==""){
        return "Invalid Morse";
    }
    for (char c:s){
        if (isalpha(c)){
        c=toupper(c);
        auto it=m1.find(c);
        final+=it->second;
        final+=" ";
    }
        else if (c==' '){
            final+="/ ";
        }
        else{
            return "Invalid Morse";
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

   map<string,char> m2 = {
    {".-", 'A'}, {"-...", 'B'}, {"-.-.", 'C'}, {"-..", 'D'}, {".", 'E'}, {"..-.", 'F'}, {"--.", 'G'}, {"....", 'H'},{"..", 'I'}, {".---", 'J'}, {"-.-", 'K'}, 
    {".-..", 'L'},{"--", 'M'}, {"-.", 'N'}, {"---", 'O'}, {".--.", 'P'},{"--.-", 'Q'}, {".-.", 'R'}, {"...", 'S'}, {"-", 'T'},{"..-", 'U'}, {"...-", 'V'}, {".--", 'W'}, 
    {"-..-", 'X'},{"-.--", 'Y'}, {"--..", 'Z'}
   };
int n;
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
    cout<<ToText(s,m2)<<endl;
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
        cout<<"Error, You entered a wrong number!"<<endl;
        continue;
    }

}

}
