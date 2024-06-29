#include<iostream>
#include<vector>
using namespace std;
int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
       int n= customers.size();
        int idx;
        int sum=0;
        int curSum;
        for(int i=0;i<minutes && i<n;i++){
            sum+=customers[i];
        }
        int i=0;
        int j=minutes;
        int mx= sum;
        while(j<n){
            sum+=customers[j]-customers[i];
            if(mx<=sum){
                mx=sum;
                idx=i;
            }
            i++;
            j++;
        }
      for(int k=0;k<idx;k++){
          if(grumpy[k]==0) mx+=customers[k];
      }  
      for(int k=idx+minutes;k<n;k++){
          if(grumpy[k]==0) mx+=customers[k];
      }
      return mx;

    }
int main(){
    vector<int>customers;
	customers =[1,0,1,2,1,1,7,5];
    vector<int>grumpy;
    grumpy =[0,1,0,1,0,1,0,1];
    int min=3;
   cout<< maxSatisfied (customers, grumpy,min);


}