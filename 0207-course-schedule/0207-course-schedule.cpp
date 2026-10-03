class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adj(numCourses);
        vector<int>inD(numCourses,0);
        for(auto it:prerequisites){
            int course=it[0];
            int prev=it[1];
            adj[prev].push_back(course);
            inD[course]++;
        }
        queue<int>q;
        for(int i=0;i<numCourses;i++){
            if(inD[i]==0) q.push(i);
        }
        vector<int>courses;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            courses.push_back(node);
            for(auto neigh:adj[node]){
                inD[neigh]--;
                if(inD[neigh]==0) q.push(neigh);
            }
        }
        return numCourses==courses.size();
    }
};