	int minStepToReachTarget(vector<int>&KnightPos, vector<int>&TargetPos, int N){
	    
	    queue<pair<int,int>>q;
	    
	    q.push({KnightPos[0]-1,KnightPos[1]-1});
	    
	    int x=TargetPos[0]-1,y=TargetPos[1]-1;
	    int ans = INT_MAX;
	    
	    vector<vector<int>>vis(N,vector<int>(N,0));
	    
	    while(!q.empty()){
	        auto tf = q.front();
	        q.pop();
	        
	        int a=tf.first,b=tf.second;
	        
	        if(a+2>=0 and a+2<N and b+1>=0 and b+1<N and vis[a+2][b+1]==0){
	            vis[a+2][b+1]=vis[a][b]+1;
	            q.push({a+2,b+1});
	        }
	        
	         if(a+2>=0 and a+2<N and b-1>=0 and b-1<N and vis[a+2][b-1]==0){
	             vis[a+2][b-1]=vis[a][b]+1;
	            q.push({a+2,b-1});
	        }
	             
	         if(a-2>=0 and a-2<N and b+1>=0 and b+1<N and vis[a-2][b+1]==0){
	             vis[a-2][b+1]=vis[a][b]+1;
	            q.push({a-2,b+1});
	        }
	             
	         if(a-2>=0 and a-2<N and b-1>=0 and b-1<N and vis[a-2][b-1]==0){
	             vis[a-2][b-1]=vis[a][b]+1;
	            q.push({a-2,b-1});
	        }
	             
	         if(a+1>=0 and a+1<N and b+2>=0 and b+2<N and vis[a+1][b+2]==0){
	             vis[a+1][b+2]=vis[a][b]+1;
	            q.push({a+1,b+2});
	        }
	             
	        if(a+1>=0 and a+1<N and b-2>=0 and b-2<N and vis[a+1][b-2]==0){
	             vis[a+1][b-2]=vis[a][b]+1;
	            q.push({a+1,b-2});
	        }
	         if(a-1>=0 and a-1<N and b+2>=0 and b+2<N and vis[a-1][b+2]==0){
	              vis[a-1][b+2]=vis[a][b]+1;
	            q.push({a-1,b+2});
	        }
	         if(a-1>=0 and a-1<N and b-2>=0 and b-2<N and vis[a-1][b-2]==0){
	              vis[a-1][b-2]=vis[a][b]+1;
	            q.push({a-1,b-2});
	        }
	        
	    }
	    
	  
	    return vis[x][y];
	}