#include<vector>
int numDuplicates(vector<string> name, vector<int> price, vector<int> weight)
{
    unordered_map<string,vector<int>> hashmap;
    vector<int> indices;
    int count = 0;
    for(int i=0;i<name.size();i++)
    {
        if(hashmap.find(name[i])==hashmap.end())
            hashmap[name[i]] = {price[i],weight[i]};
        else
            indices.push_back(i);
    }

    if(indices.size()==0)
        return 0;
    
    for(int i=0;i<indices.size();i++)
    {
        if(hashmap.find(name[indices[i]])!=hashmap.end())
        {
            if(hashmap[name[indices[i]]][0] == price[indices[i]] && hashmap[name[indices[i]]][1]== weight[indices[i]])
                count++;
        }
    }
    return count;
}