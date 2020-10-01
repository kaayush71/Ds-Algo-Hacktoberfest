/*
Code by Urjita Sharma

Function for Possible Bipartition

Given a set of N people (numbered 1, 2, ..., N), we would like to split everyone into two groups of any size.
Each person may dislike some other people, and they should not go into the same group. 
Formally, if dislikes[i] = [a, b], it means it is not allowed to put the people numbered a and b into the same group.
Return true if and only if it is possible to split everyone into two groups in this way.
*/

bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        
        vector<vector<int>> graph(n + 1);
        for ( auto dislike : dislikes) {
            graph[dislike[0]].push_back(dislike[1]);
            graph[dislike[1]].push_back(dislike[0]);
        }

        vector<bool> visited(n + 1, false);
        vector<int> groups(n + 1, 0);
        
        
        for (int i = 1; i <= n; ++i) {
            
            if (!visited[i]) {
                
                groups[i] = 1;
                
                queue<int> to_process;
                to_process.push(i);
                
                while (!to_process.empty()) {
                    auto person = to_process.front();
                    to_process.pop();
                    
                    if (visited[person]) continue;
                    visited[person] = true;
                    
                    
                    for (auto next_person : graph[person]) {
                        
                        if (groups[person] == groups[next_person]) {
                            return false;
                        }
                       
                        groups[next_person] = groups[person] == 1 ? 2 : 1;
                        to_process.push(next_person);
                    }
                }
            }
        }
        return true;
    }
