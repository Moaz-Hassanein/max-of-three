int maxProductOfThree(int arr[],int size) {
    int max1,max2,max3,min1,min2,index1,index2,indexm1;
    max1=arr[0];
    index1=0;
    min1=arr[0];
    indexm1=0;
    for(int i=0;i<size;i++) {
        if(arr[i]>max1) {
            max1=arr[i];
            index1=i;
        }
        if(arr[i]<min1) {
            min1=arr[i];
            indexm1=i;
        }
    }

    if(index1 !=0) {
        max2=arr[0];
        index2=0;
    }
    else {
        max2=arr[1];
        index2=1;
    }
    if(indexm1 !=0)
        min2=arr[0];
    else
        min2=arr[1];
    for(int i=0;i<size;i++) {
        if(arr[i]>max2 && i!=index1) {
            max2=arr[i];
            index2=i;
        }
        if(arr[i]<min2 && i!=indexm1) {
            min2=arr[i];
        }
    }
    if(index1 !=0 && index2 !=0 )
        max3=arr[0];
    else {
        max3=max1+1;
        int i=1;
        while(max3==max1+1) {
            if(index1 !=i && index2 !=i)
                max3=arr[i];
            i++;
        }
    }
    for(int i=0;i<size;i++) {
        if(arr[i]>max3 && i!=index1 && i!= index2) {
            max3=arr[i];
        }
    }

    int result = max(max1*max2*max3,max1*min1*min2);
    return result;
}
