
661. Image Smoother




class Solution {
    int cAvg(const vector<vector<int>> &mt, const int i, const int j)
    {
      int sum = 0, amount = 0;

      int m = mt.size() - 1, n = mt[0].size() - 1;

      int newI = i - 1 >= 0 ? i - 1 : i;
      int newJ = j - 1 >= 0 ? j - 1 : j;
      int newM = i + 1 <= m ? i + 1 : m;
      int newN = j + 1 <= n ? j + 1 : n;

      for (int row = newI; row <= newM; row++)
      {
        for (int col = newJ; col <= newN; col++)
        {
          sum += mt[row][col];
          amount++;
        }
      }

      return std::floor(sum / amount);
    }
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        vector<vector<int>> smoothed = vector<vector<int>> (img.size(), vector<int> (img[0].size(), 0));

        for (int i = 0; i < img.size(); i++)
          for (int j = 0; j < img[0].size(); j++)
            smoothed[i][j] = cAvg(img, i, j);

        return smoothed;
    }
};