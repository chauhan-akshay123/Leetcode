/*
---LINK--- https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/
*/
  int mostWordsFound(vector<string>& sentences) {
       int max=0;
       for(int i=0; i<sentences.size(); i++){
          int count=0;
           for(int j=0; j<sentences[i].length(); j++){
               if(sentences[i][j]==' '){
                  count++;  
               }
           }
           if(max<count+1){
               max=count+1;
           }
       }
       return max;
    }
