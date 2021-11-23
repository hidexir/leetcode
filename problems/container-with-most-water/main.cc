class Solution {
  public:
    int maxArea(vector<int>& height) 
    {
      int ans=0;
      int leftPointer=0;
      int rightPointer=height.size()-1;
      while(leftPointer<rightPointer)
      {
        int miniHeight = 0;
        if (height[leftPointer] < height[rightPointer]){
          miniHeight = height[leftPointer];
        } else {
          miniHeight = height[rightPointer];
        }
        int menseki = miniHeight*(rightPointer-leftPointer);
        if(ans < menseki) {
          ans = menseki;
        }
        if(height[leftPointer]<height[rightPointer])
        {
          leftPointer++;
        }
        else
        {
          rightPointer--;
        }
      }
      return ans;
    }
};


