#include<iostream>
using namespace std;
void path(int ir,int ic,int fr,int fc,string s){
    if(ic>fc||ir>fr) return;
    if(ic==fc && ir==fc) cout<<s<<endl;
    path(ir,ic+1,fr,fc,s+"R");
    path(ir+1,ic,fr,fc,s+"D");
}
int main(){
	path(0,0,2,2," ");
            // irow,icol,destRow,destCol
}