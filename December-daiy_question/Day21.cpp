//! 1637. Widest Vertical Area Between Two Points Containing No Points


class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
      vector<int> xPoints;

      for(auto point: points){
        xPoints.push_back(point[0]);
      }

      sort(xPoints.begin(), xPoints.end());

      int maxWidth = INT_MIN;

      for(int i=0; i<xPoints.size()-1; i++){
        if(xPoints[i+1]-xPoints[i] > maxWidth){
          maxWidth=xPoints[i+1]-xPoints[i];
        }
      }

      return maxWidth;
    }
};