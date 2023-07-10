class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        unordered_map<int , int> m;
        
        int ans = 0;
        for(int i =0  ;i<n;i++){
            int b = k - arr[i];
            
            if(m[b]){
                ans = ans+m[b]; //frequency add kr rhe ho
                
            }
            
            m[arr[i]]++;
        }
        
        return ans;
    }
};
