//给你一个由 '1'（陆地）和 '0'（水）组成的的二维网格，请你计算网格中岛屿的数量。 
//
// 岛屿总是被水包围，并且每座岛屿只能由水平方向和/或竖直方向上相邻的陆地连接形成。 
//
// 此外，你可以假设该网格的四条边均被水包围。 
//
// 
//
// 示例 1： 
//
// 
//输入：grid = [
//  ["1","1","1","1","0"],
//  ["1","1","0","1","0"],
//  ["1","1","0","0","0"],
//  ["0","0","0","0","0"]
//]
//输出：1
// 
//
// 示例 2： 
//
// 
//输入：grid = [
//  ["1","1","0","0","0"],
//  ["1","1","0","0","0"],
//  ["0","0","1","0","0"],
//  ["0","0","0","1","1"]
//]
//输出：3
// 
//
// 
//
// 提示： 
//
// 
// m == grid.length 
// n == grid[i].length 
// 1 <= m, n <= 300 
// grid[i][j] 的值为 '0' 或 '1' 
// 
// Related Topics 深度优先搜索 广度优先搜索 并查集 数组 矩阵 
// 👍 1226 👎 0


//leetcode submit region begin(Prohibit modification and deletion)
//class Solution {
//public:
//    const int dx[4]={1,0,-1,0};
//    const int dy[4]={0,1,0,-1};
//    int numIslands(vector<vector<char>>& grid) {
//        int m=grid.size(), n=grid[0].size();
//        queue<pair<int, int> > q;
//        int step=0;
//        for(int i=0;i<m;i++){
//            for(int j=0;j<n;j++){
//                if(grid[i][j]=='1'){
//                    q.emplace(i,j);
//                    step++;
//                    while(!q.empty()){
//                        int x=q.front().first, y=q.front().second;
//                        q.pop();
//                        for(int k=0;k<4;k++){
//                            int nx=x+dx[k];
//                            int ny=y+dy[k];
//                            if(nx>=0&&ny>=0&&nx<m&&ny<n&& grid[nx][ny]=='1'){
//                                q.emplace(nx,ny);
//                                grid[nx][ny]='0';
//                            }
//                        }
//                    }
//                }
//            }
//        }
//        return step;
//    }
//};
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int count=0;
        int m=grid.size(), n=grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){
                    count++;
                    dfs(grid,i,j);
                }
            }
        }
        return count;
    }

    void dfs(vector<vector<char>>& grid, int x,int y){
        if(x<0||y<0||x>=grid.size() || y>=grid[0].size()||grid[x][y]=='0'){
            return;
        }
        grid[x][y]='0';
        dfs(grid,x+1,y);
        dfs(grid,x,y+1);
        dfs(grid,x-1,y);
        dfs(grid,x,y-1);
    }
};
//leetcode submit region end(Prohibit modification and deletion)
