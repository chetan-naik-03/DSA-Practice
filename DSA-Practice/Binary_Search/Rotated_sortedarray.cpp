class Solution {
    public :
    int serach(vector<int>nums, int target) {
        int st =0, end = nums.size()-1;

        while(st <= end) {
            int mid = st + (end-st)/2;
            if(A[mid] == tar){
                return mid;
            }
            if (A[st] <= A[mid]) { //left sorted
                if(A[st] <= tar && tar<= A[mid]){
                    end = mid -1;{
                        st = mid +1;
                    }
                }else { // right sorted
                   if(A[mid] <= tar && tar<= A[end]){ 
                    st = mid +1;{
                        end = mid -1;
                }
            }
        }
    }
 return -1;
}