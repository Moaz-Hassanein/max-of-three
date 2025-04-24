#include <bits/stdc++.h>

using namespace std;
typedef long long ll;


int maxProductOfThree(int arr[],int size) {
    int max1,max2,max3,index1,index2;
    max1=arr[0];
    for(int i=1;i<size;i++) {
        if(arr[i]>max1) {
            max1=arr[i];
            index1=i;
        }
    }

    max2=arr[0];
    for(int i=1;i<size;i++) {
        if(arr[i]>max2 && i!=index1) {
            max2=arr[i];
            index2=i;
        }
    }

    max3=arr[0];
    for(int i=1;i<size;i++) {
        if(arr[i]>max3 && i!=index1 && i!= index2) {
            max3=arr[i];
        }
    }

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
