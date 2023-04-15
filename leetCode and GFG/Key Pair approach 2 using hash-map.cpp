bool hasArrayTwoCandidates(int arr[], int n, int x) 
{
    unordered_map<int,int> umap;
    for(int i=0;i<n;i++)
    {
        int req=x-arr[i];
        umap[arr[i]] = req;
    }
    for(int i=0;i<n;i++)
    {
        int key=arr[i];
        int req=umap[key];
        if(umap.find(req)!=umap.end() && umap[req]!=key) 
            return true;
    }
    return false;
}
