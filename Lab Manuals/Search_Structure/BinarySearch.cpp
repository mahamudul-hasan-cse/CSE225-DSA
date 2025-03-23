#include<iostream>
using namespace std;
int binear_search(int array[],int n,int x)
{
    int left,right,mid;
    left=0;
    right = n-1;

    while(left<=right){
        mid=(left+right)/2;
        if(array[mid]==x) {
            return mid;
        }
        if(array[mid]<x){
            left=mid+1;
        }
        else {
            right = mid-1;
        }
    }
    return -1;
}

int main(){
    /*
    int n;
    cout<<" Enter the array size : "<<endl;
    cin>>n;
    int array[n];
    cout<<"Enter array elements : "<<endl;

    for(int i=0;i<=n;i++){
        cin>>i;
    }

    int x;
    cout<<" Input a number for Search : " <<endl;
    cin>>x;
    */
   int array[] = {3,5,9,13,45,76,440};
    int x = 77;
    int n = 7;
    int result = binear_search(array,n,x);
    
    if(result==-1){
        cout<<"Not Found ";
    }
    else {
        cout<<"Found the number is " << x ;
    }

}