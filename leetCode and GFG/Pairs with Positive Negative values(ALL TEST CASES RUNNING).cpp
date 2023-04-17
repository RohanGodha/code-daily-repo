//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
  public:
  vector<int> PosNegPair(int a[], int n) 
    {
        vector<int> v;
        unordered_map<int, int> umap;
        for(int i=0;i<n;i++)
        {
            umap[a[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            int key=-a[i];
            if(umap[a[i]] > 0 && umap[key] > 0)
            {
                if(a[i] < key)
                {
                  v.push_back(a[i]);
                  v.push_back(key);
                }
                else 
                {
                  v.push_back(key);    
                  v.push_back(a[i]);
                }
                umap[a[i]]--;
                umap[key]--;
            }
        }
    vector<int> v2;
    // Sort the vector
    sort(v.begin(), v.end());

    // Initialize iterators for the middle elements
    auto left = v.begin() + v.size() / 2 - 1;
    auto right = v.size() % 2 == 0 ? left + 1 : left;

    // Traverse the vector from both sides and print the elements
    while (left >= v.begin() && right < v.end())
    {
        // Print the negative element from the left side
        if (*left < 0)
        {
            v2.push_back(*left);
        }

        // Print the positive element from the right side
        if (*right >= 0)
        {
            v2.push_back(*right);
        }

        // Move the iterators towards each other
        --left;
        ++right;
    }
        return v2;
        
        
        // sort(v.begin(), v.end());
// vector<int> v2;
// for(int i = 0; i < n; i++) {
//     if(!v.empty()) {
//         v2.push_back(v.front());
//         v2.push_back(v.back());
//         v.erase(v.begin());
//         v.pop_back();
//     }
//     else {
//         break;
//     }
// }
}
};
  
  
  
  
  
    // vector<int> PosNegPair(int a[], int n) 
    // {
    // vector<int> v;
    // unordered_map<int,int> u;
    // for(int i=0;i<n;i++)
    // {
    //     u[a[i]]++;
    // // }
    // for(int i=0;i<n;i++)
    // {
    //     int key=-a[i];
    //     if(u[a[i]]>0 && u[key]>0)
    //     {
    //         if(a[i]<key)
    //         {
    //           v.push_back(a[i]);
    //           v.push_back(key);
    //         }
    //         else 
    //         {
    //           v.push_back(key);    
    //           v.push_back(a[i]);
    //         }
    //         // u.erase(key);
    //         u[a[i]]--;
    //         u[key]--;
    //     }
    // }
    
    // return v;
    // }
    
    
    
 
 
// vector<int> PosNegPair(int a[], int n) {
//         vector<int> v;
//         unordered_map<int, int> umap;
//         for(int i = 0; i < n; i++) {
//             umap[a[i]]++;
//         }
//         for(int i = 0; i < n; i++) {
//             int key = -a[i];
//             if(umap[a[i]] > 0 && umap[key] > 0) {
//                 if(a[i] < key) {
//                     v.push_back(a[i]);
//                     v.push_back(key);
//                 } else {
//                     v.push_back(key);
//                     v.push_back(a[i]);
//                 }
//                 umap[a[i]]--;
//                 umap[key]--;
//             }
//         }

//         sort(v.begin(), v.end(), [](int x, int y) {
//             return abs(x) < abs(y);
//         });

//         vector<int> v2;
//         int size = v.size();
//         for(int i = 0; i < size / 2; i++) {
//             v2.push_back(v[2 * i]);
//             v2.push_back(v[2 * i + 1]);
//         }

//         return v2;
//     }





// vector<int> PosNegPair(int a[], int n) {
//         vector<int> v;
//         unordered_map<int, int> umap;
//         for(int i=0;i<n;i++) {
//             umap[a[i]]++;
//         }
//         for(int i=0;i<n;i++) {
//             int key=-a[i];
//             if(umap[a[i]] > 0 && umap[key] > 0) {
//                 if(a[i] < key) {
//                   v.push_back(a[i]);
//                   v.push_back(key);
//                 } else {
//                   v.push_back(key);    
//                   v.push_back(a[i]);
//                 }
//                 umap[a[i]]--;
//                 umap[key]--;
//             }
//         }
//         sort(v.begin(), v.end());

//         vector<int> v2;
//         for(int i = 0; i < n; i++) {
//             if(!v.empty()) {
//                 v2.push_back(v.front());
//                 v2.push_back(v.back());
//                 v.erase(v.begin());
//                 v.pop_back();
//             } else {
//                 break;
//             }
//         }
//         return v2;
//     } 
    
// vector<int> PosNegPair(int a[], int n) {
//         vector<int> v;
//         unordered_map<int, int> umap;
//         for(int i = 0; i < n; i++) {
//             umap[a[i]]++;
//         }
//         for(int i = 0; i < n; i++) {
//             int key = -a[i];
//             if(umap[a[i]] > 0 && umap[key] > 0) {
//                 v.push_back(min(a[i], key));
//                 v.push_back(max(a[i], key));
//                 umap[a[i]]--;
//                 umap[key]--;
//             }
//         }
//         return v;
//     }
    
// vector<int> PosNegPair(int a[], int n) {
//     vector<int> result;
//     unordered_map<int, int> countMap;
//     for (int i = 0; i < n; i++) {
//         countMap[a[i]]++;
//     }
//     for (int i = 0; i < n; i++) {
//         int key = -a[i];
//         if (countMap[key] > 0 && countMap[a[i]] > 0) {
//             result.push_back(min(a[i], key));
//             result.push_back(max(a[i], key));
//             countMap[a[i]]--;
//             countMap[key]--;
//         }
//     }
//     return result;
// }

// vector<int> PosNegPair(int a[], int n) {
//     vector<int> v;
//     unordered_map<int, int> umap;
//     for(int i=0;i<n;i++) {
//         umap[a[i]]++;
//     }
//     for(int i=0;i<n;i++) {
//         int key=-a[i];
//         if(umap[a[i]] > 0 && umap[key] > 0) {
//             v.push_back(a[i]);
//             v.push_back(key);
//             umap[a[i]]--;
//             umap[key]--;
//         }
//     }
//     sort(v.begin(), v.end());
//     return v;
// }




//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> v = obj.PosNegPair(a, n);

        if (v.size() == 0) cout << "0";

        for (auto it : v) cout << it << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends