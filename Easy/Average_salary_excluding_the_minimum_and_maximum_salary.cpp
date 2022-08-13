   inline double average(vector<int>& salary) {
         const auto len = salary.size()-2;
         std::sort(salary.begin(),salary.end());
         auto total=0.0;
         for(int i=1; i<=len; i++){
             total+=salary[i];
         }
       return total/len;
    }
