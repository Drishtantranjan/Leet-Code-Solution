class Solution {
public:
    vector<int> intersect(vector<int>& num1, vector<int>& num2) {
        int arr1[1001] = {0};
        int arr2[1001] = {0};
        vector<int> result;
        
        for(int i = 0 ; i<num1.size() ; i++){
            arr1[num1[i]]++;
        }
        for(int i = 0 ; i<num2.size() ; i++){
            arr2[num2[i]]++;
        }
        
        for(int i = 0; i<1001;i++){
            if(arr1[i] > 0 && arr2[i] > 0){
                int m = min(arr1[i], arr2[i]);
                for(int k = 0; k<m; k++){
                    result.push_back(i);
                }
                
            }
        }
        
        return result;
        
    }
};