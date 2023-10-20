/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */

class NestedIterator {
public:
    vector<int> finalAns;
    int itr = 0;
    void solve(vector<NestedInteger> &v)
    {
        for(int i=0;i<v.size();i++)
        {
            if(v[i].isInteger())
            {
                finalAns.push_back(v[i].getInteger());
            }
            else
            {
                solve(v[i].getList());
            }
        }
        return;
    }
    NestedIterator(vector<NestedInteger> &nestedList) {
        solve(nestedList);
    }
    
    int next() {
        int ans = finalAns[itr];
        itr++;
        return ans;
    }
    
    bool hasNext() {
        if(itr<finalAns.size())
        return true;
        else
        return false;
    }
};

/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */