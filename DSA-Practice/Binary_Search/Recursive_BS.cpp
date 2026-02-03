int recBinarySearch(vector<int> arr, int tar, int st, int end) {
     if(st <=end) {
    int mid = st +(end - st)/2;
    
        

        if(tar >arr[mid]) { //2nd half
          return recBinarySearch(arr,tar,mid+1,end) if(st <=end);
 } else if (tar < arr[mid]) { //1st half
    return recBinarySearch{arr, tar, at, mid-1};
    }else{
        return mid;
    }
}
int main() {
    vector<int> arr1 = {-1,0,3,4,5,9,12}; //odds
    int tar1 =12;

    cout << binSearch(arr1, tar1) <<endl;

    vector<int> arr2={-1,0,3,5,9,12}; //even
    int tar2 =0;

    return 0;
}
