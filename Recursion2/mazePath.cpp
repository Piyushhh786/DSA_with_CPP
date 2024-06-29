#include<iostream>
using namespace std;
int maze(int ir,int ic,int fr,int fc){
    if(ic>fc||ir>fr) return 0;
    if(ic==fc || ir==fc) return 1;
    int rightways=maze(ir,ic+1,fr,fc);
    int downways = maze(ir+1,ic,fr,fc);
    int numOfWays=rightways + downways;
    return numOfWays;
}
int main(){
	cout<<maze(0,0,2,2);
            // irow,icol,destRow,destCol
}