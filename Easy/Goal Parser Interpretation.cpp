/*
---LINK--- https://leetcode.com/problems/goal-parser-interpretation/
*/
  string interpret(string command) {
         string final = "";
        for(int i=0; i<command.length(); i++){  
                if(command[i] == 'G') final += 'G';
                else{
                    if(command[++i] == ')') final += 'o';
                    else {final += "al"; i+=2;}
                }
        }
    return final;
    }
