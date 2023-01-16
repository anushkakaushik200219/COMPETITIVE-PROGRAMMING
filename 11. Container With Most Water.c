class Solution {
public:
    int maxArea(vector<int>& h) {
        int max;
        int l=0;
        int hl,hr;
        int n=h.size();
        int r=n-1;
        int t;
        max=0;
        for(int i=0;i<n;i++)
        {
            hl=h[l];
            hr=h[r];
            t=min(hl,hr)*(r-l);
            if(t>max)
                max=t;
            if(hl<hr)
                l++;
            else
                r--;
        }
        
        return max;
        
    }
};
