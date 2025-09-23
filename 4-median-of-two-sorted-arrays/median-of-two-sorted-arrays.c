double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int i=0,j=0,k=0;
    int *arr=(int*)malloc((nums1Size+nums2Size)*sizeof(int));
    while(i<nums1Size||j<nums2Size){
        if (j==nums2Size){
            arr[k++]=nums1[i++];
        }
        else if(i==nums1Size){
            arr[k++]=nums2[j++];
        }
        else if(nums1[i]<nums2[j]){
            arr[k++]=nums1[i++];
        }
        else{
            arr[k++]=nums2[j++];
        }
    }
    int index = (nums1Size+nums2Size)/2;
    if ((nums1Size+nums2Size)%2==0){
    	
        return (arr[index]+arr[index-1])/2.0;
    }
    
    return arr[index];   
}