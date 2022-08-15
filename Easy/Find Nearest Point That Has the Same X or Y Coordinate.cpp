/*
---LINK--- https://leetcode.com/problems/find-nearest-point-that-has-the-same-x-or-y-coordinate/
*/

    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
             int mn=INT_MAX, res=-1;
          for(int i=0;i<points.size();i++){
      
      if(points[i][0]== x || points[i][1]==y){
           
          int md= abs(points[i][0] - x) + abs(points[i][1] - y);
          
          if(md < mn){
              mn = md;
              res= i;
          }
      }
    }
   return res; 
    }


