#include<iostream>
using namespace std;

class Father{
    public:
    int age;
    public:
    Father(){
        age = 0;
    }
    Father(int a){
        age = a;
    }
    void check(){
        try{
        if(age<0){
            throw "Wrong Age";
        }
    }
        catch(char *s){
            cout<<s;
        }
    }
};
class Son: public Father{
    private:
    int age_son;
    public:
    Son(){
        age_son = 0;
    }
    Son(int a_s){
        age_son = a_s;
    }
    void check(){
        try{
            if(age_son>=age){
                throw "Input must be greater than the father age";
            }
        }
        catch(char*p){
            cout<<p;
        }
    }
};
int main(){

}
