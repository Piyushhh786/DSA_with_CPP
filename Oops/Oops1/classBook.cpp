#include<iostream>
#include<string>
using namespace std;
class book{
    private:
    string name;
    int price;
    int pages;
    public:
    void inp_name(string s){
        name =s;
    }
    void inp_price(int p){
        price = p;
    }
    void inp_pages(int n){
        pages=n;
    }
    int countBook(int p){
        if(price<p) return 1;
        else return 0;
        
    }
    bool isBookPresent(string s){
        if(s==name) return true;
        else return false;
    }
};
int main(){
    book harry;
    harry.inp_pages(276);
    harry.inp_price(300);
    harry.inp_name("HarryPotter");
    cout<<harry.countBook(270)<<" "<<harry.isBookPresent("HarryPotter");

}