class Solution {
  public:
   int rotateDelete(vector<int> &arr) {
        // Your code here
        int k=0;
        while(arr.size()>1){
            int n=arr.size();
            int temp=arr[n-1];
            arr.pop_back();
            arr.insert(arr.begin(),temp);
            int delInd=n-(k+1);
            if(k>=n){
                arr.erase(arr.begin());
            }
            else{
                arr.erase(arr.begin()+delInd);
                k++;
            }
        }
        return arr[0];
        
    }
};