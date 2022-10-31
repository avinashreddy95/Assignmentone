#include <iostream>
using namespace std;

int main() {
    
int l_size=5;
cout<<"Enter array size"<<endl;
cin>>l_size;
int values[5];
    cout<<"Enter array elements for instance 2 3 4 5 6 "<<endl;
    for(int i=0;i<l_size;i++)
    {
        cin>>values[i];
    }
    int size = l_size;
    cout<<"Initial Array:";
    for(int y=0;y<size;y++) {
        cout<<values[y]<<",";
    }
    cout<<"\n";
    if(size<2 || size>104){
    cout<<"Invalid Array Length";
    return 0;
    }
    for(int x=0;x<size;x++){
    if(values[x]<-109 || values[x]>109){
    cout<<"Invalid Array numbers";
    return 0;
    }
    }
    int target;
    cout<<"Enter target value:";
    cin>>target;
    if(target<-109 || target>109){
        cout<<"Invalid Target Value";
    return 0;
    }
    for(int i=0;i<size;i++)
    {
        for(int j = i+1; j<size;j++)
        {
            if(values[i]+values[j]==target)
            {
                cout<<"Final Array";
                cout<<"["<<i<<","<<j<<"]"<<endl;
                
            }
        }
    }
    
    return 0;
}
