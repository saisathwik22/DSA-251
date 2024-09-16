vector<int> twoSum(vector<int> nums, int target) {
  int n = nums.size();

  int i=0, j=n-1;
  while(i<j){
    int sum = nums[i] + nums[j];
    if(sum > target) j--;
    else if(sum < target) i++;
    else if(sum == target) return {i+1, j+1};
  }
  return {};
}
