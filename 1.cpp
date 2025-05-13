#include<iostream>
using namespace std;

void printArray(int arr[], int size ){
    cout<<"printing the array"<<endl;

    for(int i=0; i<size; i++){
        cout<<arr[i]<<"";
    }
    cout<<"printing done"<<endl;


}


int main(){

    int numb[3]={5,6,7};
    cout <<"value at 2 index " <<numb[2]<<endl;

    int arr[10000]={0};
    cout<<"everything is fine"<<endl;

    int second[3]= {2,3,4};
    cout<<"value at 2 index is "<<second[2]<<endl;

    int third[8]={1,2,3,4,5,6,7,8};
    int n=8;
    int thirdhsize=sizeof(third)/sizeof(int);
    cout<<"size of third is "<< thirdhsize<< endl;
    // printArray(third, 8);

    cout<<"printing th array"<<endl;


    int fourth[2]={1};

    n=2;
    // printArray(fourth, 2);

    int fourthsize=sizeof(fourth)/sizeof(int);
    cout<<"size of fourth is "<< fourthsize<< endl;

    char ch[5]={'a','c', 'd', 'd','f'};
    cout<<ch[3]<<endl;

    for(int i=0; i<5; i++){
        cout<<ch[i]<<"";
    }

    


  


  

  


    



    return 0;
}