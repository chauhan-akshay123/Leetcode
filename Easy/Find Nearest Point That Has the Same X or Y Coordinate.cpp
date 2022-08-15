/*
---LINK--- https://leetcode.com/problems/find-nearest-point-that-has-the-same-x-or-y-coordinate/
*/

 int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int min = INT_MAX,index=-1;
        for(int i=0; i<points.size(); i++){
            int x1 = points[i][0];
            int y1 = points[i][1];
            if((x1!=x) && (y1!=y)){
                continue;
            }
            int dis = abs(x-x1)+abs(y-y1);
            if(dis<min){
                min=dis;
                index=i;
            }
        }
        return index;
    }


