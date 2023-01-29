// C++ program to demonstrate getline() function

#include <iostream>
#include <string>

class operation{
    private:
    int len;
    std::string word;
    public:
    int length(std::string word);
    void concantate();

};
int operation::length(std::string x){
    word=x;
    len = word.length();
    return (len);
}
void operation::concantate(){
    std::cout<<"enter a word to concantate : "<<std::endl;
    getline(std::cin,word);
    word+=word;
    std::cout<<"result : "<<word<<std::endl;
}
const std::string YES = "stop";

int main(){
    std::string name;
    operation s;
    int length;
    while(true){
        std::cout<<"enter word to get length or type 'stop' to skip : "<<std::endl;
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
    while(true){
        int choice;
        std::cout<<"press any number to continue or press 1 to skip concantating"<<std::endl;
        std::cin>>choice;
        if(choice==1){
            break;
        }
        else{
            s.concantate();
        }
    }



}