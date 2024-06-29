#include <iostream>
#include<climits>
#include<conio.h>
#define block "\u25A0";
using namespace std;
//color implementation
    const string RESET = "\033[0m";
    const string BLACK = "\033[30m";
    const string RED = "\033[31m";
    const string GREEN = "\033[32m";
    const string YELLOW = "\033[33m";
    const string BLUE = "\033[34m";
    const string MAGENTA = "\033[35m";
    const string CYAN = "\033[36m";
    const string WHITE = "\033[37m";
void delay(){
    for(int i=0;i<35000;i++);
}
void printpic(char** pic , int n , int m){
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<m ; j++){
            if(pic[i][j]=='.') cout<<BLUE<<'.'<<RESET;
            else if(pic[i][j]=='#') cout<<RED<<'#'<<RESET;
            else if(pic[i][j]=='R') cout<<GREEN<<'R'<<RESET;
            else cout<<YELLOW<<pic[i][j]<<RESET;
        }
        cout<<endl;
    }
}
void filling(char** v, int sr, int sc, int n , int m){
        if(v[sr][sc]!=' ' ) return;
        v[sr][sc]='*';
        system("clear");
        printpic(v , n , m);
        delay();
        if(sc-1>=0 && v[sr][sc-1]==' ') filling(v, sr , sc-1 , n , m);
        if(sr+1<n && v[sr+1][sc]==' ') filling(v , sr+1 , sc , n , m );
        if(sc+1<m && v[sr][sc+1]==' ') filling(v , sr , sc+1  , n , m );
        if(sr-1>=0 && v[sr-1][sc]==' ') filling(v, sr-1 , sc  , n , m);
        return;
    }
int main() {
    int n;
    cin>>n;
    char** pic = new char*[n];
    for(int i = 0 ; i<n ; i++){
        pic[i]= new char[n+1];
        for(int j = 0 ;j<n ; j++ ){
            if(i==n-1 || j==n-1 || i==0 ||j==0)pic[i][j]='#';
            else pic[i][j] = ' ';
        }
    }
    for(int i = 0 ; i< n ; i++){
        for(int j = 0 ; j<n ;j++){
            cout<<pic[i][j];
        }
        cout<<endl;
    }
    int i , j ;
    cin>>i>>j;
    system("clear");
    delay();
    filling(pic , i , j , n , n);
}
