#include <bits/stdc++.h>

using namespace std;
typedef long long ll;


int maxProductOfThree(int arr[],int size) {
    int max1,max2,max3,index1,index2,index3;
    max1=arr[0];
    for(int i=1;i<size;i++) {
        if(arr[i]>max1) {
            max1=arr[i];
            index1=i;
        }
    }
    arr[index1]=-99999;

    max2=arr[0];
    for(int i=1;i<size;i++) {
        if(arr[i]>max2) {
            max2=arr[i];
            index2=i;
        }
    }
    arr[index2]=-99999;

    max3=arr[0];
    for(int i=1;i<size;i++) {
        if(arr[i]>max3) {
            max3=arr[i];
            index3=i;
        }
    }
    arr[index3]=-99999;

    int result = max1*max2*max3;
    return result;
}

int main() {
    int arr[]={16,14,10,8,7,9,3,2,4,1,200,10,20,30};
    int ans=maxProductOfThree(arr,sizeof(arr)/sizeof(arr[0]));
    for (int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++)
        cout<< arr[i]<<"  ";
    cout<<"\n"<< ans;
}


