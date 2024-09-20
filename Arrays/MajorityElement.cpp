class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
        int count =0;
        int element;
        
        for(int i=0;i<n;i++){
            if(count==0){
                count = 1;
                element = arr[i];
            }
            else if(arr[i]==element){
                count++;
            }
            else{
                count--;
            }
        }
        
        int final = 0;
        for(int i=0;i<n;i++){
            if(element == arr[i]){
                final++;
            }
        }
        
        if(final>(n/k)){
            return element;
        }
        
        return 0;
    }
};