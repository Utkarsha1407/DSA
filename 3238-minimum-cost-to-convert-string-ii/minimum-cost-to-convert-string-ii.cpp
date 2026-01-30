#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long minimumCost(
        string source,
        string target,
        vector<string>& original,
        vector<string>& changed,
        vector<int>& cost
    ) {
        int n = source.size();
    
        // 1) Build map of unique substrings to ids
        unordered_map<string,int> subToId;
        for (auto &s : original) 
            if (!subToId.count(s))
                subToId[s] = subToId.size();
        for (auto &s : changed) 
            if (!subToId.count(s))
                subToId[s] = subToId.size();
        
        int U = subToId.size();
        const long long INF = LLONG_MAX/4;
        
        // 2) Build all-pairs shortest path cost table
        vector<vector<long long>> dist(U, vector<long long>(U, INF));
        for (int i = 0; i < U; i++)
            dist[i][i] = 0;

        for (int i = 0; i < cost.size(); i++) {
            int u = subToId[original[i]];
            int v = subToId[changed[i]];
            dist[u][v] = min(dist[u][v], (long long)cost[i]);
        }

        // Floyd-Warshall
        for (int k = 0; k < U; k++)
            for (int i = 0; i < U; i++)
                if (dist[i][k] < INF)
                    for (int j = 0; j < U; j++)
                        if (dist[k][j] < INF)
                            dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);

        // 3) DP array: dp[i] = min cost to fix source[0..i-1]
        vector<long long> dp(n+1, INF);
        dp[0] = 0;

        // For efficient substring lengths, collect original substring lengths
        unordered_set<int> subLens;
        for (auto &s : original)
            subLens.insert(s.size());

        for (int i = 0; i < n; i++) {
            if (dp[i] == INF) continue;

            // Option A: just match one char if equal
            if (source[i] == target[i])
                dp[i+1] = min(dp[i+1], dp[i]);

            // Option B: try any substring length L
            for (int L : subLens) {
                if (i + L > n) continue;

                string sSub = source.substr(i, L);
                string tSub = target.substr(i, L);
                if (!subToId.count(sSub) || !subToId.count(tSub)) 
                    continue;

                int u = subToId[sSub];
                int v = subToId[tSub];
                if (dist[u][v] < INF) 
                    dp[i+L] = min(dp[i+L], dp[i] + dist[u][v]);
            }
        }

        return dp[n] == INF ? -1 : dp[n];
    }
};
