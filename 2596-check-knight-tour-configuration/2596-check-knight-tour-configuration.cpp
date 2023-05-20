class Solution {
public:
    bool checkValidGrid(vector<vector<int>>& a) {
        int n=a.size();
        int m=a[0].size();
        int xx[8]={-1,-2,-2,-1,1,2,2,1};
        int yy[8]={-2,-1,1,2,-2,-1,1,2};
        queue<pair<int,int>>q;
        q.push({0,0});
        int c=0;
        while(!q.empty())
        {
            int x=q.front().first;
            int y=q.front().second;
            q.pop();
            int flag=false;
            for(int i=0;i<8;i++)
            {
                int nx=x+xx[i];
                int ny=y+yy[i];
                if(nx>=0 and nx<n and ny>=0 and ny<m and a[nx][ny]==a[x][y]+1)
                {
                    x=nx;
                    y=ny;
                     q.push({x,y});
                     c++;
                    flag=true;
                    break;
                }
            }
           
        }
        if(c==n*m-1) return true;
        return false;
    }
};