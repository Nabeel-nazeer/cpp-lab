// C++ program to demonstrate getline() function

#include <iostream>
#include <string>

class operation{
    private:
    int len;
    std::string word;
    public:
    int length(std::string word);

};
int operation::length(std::string x){
    word=x;
    len = word.length();
    return (len);
}
const std::string YES = "stop";
const std::string NO = "no";



int main(){
    std::string name;
    operation s;
    int length;
    while(true){
        std::cout<<"enter word to get length ; "<<std::endl;
        getline(std::cin,name);
        if(name.empty()){
            std::cout<<"please enter a word to continue\n";
        }
        else{
            length= s.length(name);
            std::cout<<"the length of word is : "<<length<<std::endl;
            if(name==YES){
                break;
            }


        }
}
}