/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int MaxinArrays(int * arr,int n){
    int max = -9999999;
    for(int i = 0 ; i < n ; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
 }
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    bool *check = malloc(candiesSize * sizeof(bool));
    memset(check,0,candiesSize * sizeof(bool));
   int max = MaxinArrays(candies,candiesSize);
 for(int i = 0 ; i < candiesSize ; i++){
        if(candies[i]+extraCandies>=max){
            check[i] = true;
        }
 }
    *returnSize = candiesSize; 
   return check;
   
}