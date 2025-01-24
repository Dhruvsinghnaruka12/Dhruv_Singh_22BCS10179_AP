#include<iostream>
#include<algorithm>
using namespace std;



//removing duplicate element

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

sort(arr,arr+n);
    int outt[n];
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[i+1]){
          outt[j]=arr[i];
          j++;
        }
        else{

        }
    }
    cout<<"sorted array " <<endl;
    for(int i=0;i<j;i++){
        cout<<outt[i]<<endl;
    }

}


//insertion sorting 

/*
int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i =0;i<n;i++){
        cin>>arr[i];
    }


    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
               
            }
            else{
                j++;
            }
        }

        
    }
    for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }

}
*/