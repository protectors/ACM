//给定一个包含了一些 0 和 1 的非空二维数组 grid 。 
//
// 一个 岛屿 是由一些相邻的 1 (代表土地) 构成的组合，这里的「相邻」要求两个 1 必须在水平或者竖直方向上相邻。你可以假设 grid 的四个边缘都被 
//0（代表水）包围着。 
//
// 找到给定的二维数组中最大的岛屿面积。(如果没有岛屿，则返回面积为 0 。) 
//
// 
//
// 示例 1: 
//
// [[0,0,1,0,0,0,0,1,0,0,0,0,0],
// [0,0,0,0,0,0,0,1,1,1,0,0,0],
// [0,1,1,0,1,0,0,0,0,0,0,0,0],
// [0,1,0,0,1,1,0,0,1,0,1,0,0],
// [0,1,0,0,1,1,0,0,1,1,1,0,0],
// [0,0,0,0,0,0,0,0,0,0,1,0,0],
// [0,0,0,0,0,0,0,1,1,1,0,0,0],
// [0,0,0,0,0,0,0,1,1,0,0,0,0]]
// 
//
// 对于上面这个给定矩阵应返回 6。注意答案不应该是 11 ，因为岛屿只能包含水平或垂直的四个方向的 1 。 
//
// 示例 2: 
//
// [[0,0,0,0,0,0,0,0]] 
//
// 对于上面这个给定的矩阵, 返回 0。 
//
// 
//
// 注意: 给定的矩阵grid 的长度和宽度都不超过 50。 
// Related Topics 深度优先搜索 广度优先搜索 并查集 数组 矩阵 
// 👍 505 👎 0


//leetcode submit region begin(Prohibit modification and deletion)
//class Solution {
//public:
//    const int dx[4]={1,0,-1,0};
//    const int dy[4]={0,1,0,-1};
//    int maxAreaOfIsland(vector<vector<int>>& grid) {
//        int ans=0;
//        int m=grid.size(), n=grid[0].size();
//        for(int i=0;i<m;i++){
//            for(int j=0;j<n;j++){
//                if(grid[i][j]==1){
//                    int tmp=0;
//                    dfs(grid,i,j,tmp);
//                    ans=max(ans,tmp);
//                }
//            }
//        }
//        return ans;
//    }
//
//    void dfs(vector<vector<int>>& grid, int x, int y,int &res){
//        int m=grid.size(), n=grid[0].size();
//        res++;
//        grid[x][y]=0;
//        for(int i=0;i<4;i++){
//            int nx=x+dx[i];
//            int ny=y+dy[i];
//            if(nx>=0 && ny>=0 && nx<m && ny<n && grid[nx][ny]==1){
//                dfs(grid,nx,ny,res);
//            }
//        }
//    }
//
//};

class Solution {
public:
    const int dx[4]={1,0,-1,0};
    const int dy[4]={0,1,0,-1};
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans=0,tmp;
        int m=grid.size(), n=grid[0].size();
        queue<pair<int, int> > q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                tmp=0;
                q.emplace(i,j);
                while(!q.empty()){
                    int x=q.front().first, y=q.front().second;
                    q.pop();
                    if(x<0 || y<0 ||x==m ||y==n ||grid[x][y]!=1) continue;
                    grid[x][y] = 0;
                    tmp++;
                    for(int k=0;k<4;k++){
                        int nx=x+dx[k];
                        int ny=y+dy[k];
                        q.emplace(nx,ny);
                    }
                }
                ans=max(ans,tmp);
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
