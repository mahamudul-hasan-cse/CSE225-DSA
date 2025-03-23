#include<iostream>
using namespace std;
int linear_search(int array[],int n,int x){
    for(int i=0;i<n;i++){
        if(array[i]==x){
            return i;
        }
    }
return -1;

}

int main(){

    int array[] = {3,5,9,3,45,76,4};
    int x = 76;
    int n = 7;
    int result = linear_search(array,n,x);
    if(result==-1){
        cout<<"Not Found ";
    }
    else {
        cout<<"Found the number is " << x ;
    }

}