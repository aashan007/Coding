class Solution {
    int num_pts;
    vector<int> rect_count;
    vector<vector<int>> rects;
public:
    Solution(vector<vector<int>>& rects) {
        num_pts = 0;
        this->rects = rects;
        for(vector<int>& rect:rects){
            num_pts +=(rect[2]-rect[0] +1)*(rect[3]-rect[1]+1);
            rect_count.push_back(num_pts);
        }
    }
    
    vector<int> pick() {
        int pt_idx=rand()%num_pts;
        int l=0,r=rects.size()-1;
        while(l<r){
            int mid = l+(r-l)/2;
            if(rect_count[mid]<=pt_idx) l=mid+1;
            else r=mid;
        }
        vector<int> & rect = rects[l];
        int x= rect[2]-rect[0]+1;
        int y=rect[3]-rect[1]+1;
        int pts = x*y;
        int start = rect_count[l]-pts;
        int offset = pt_idx-start;
        return {rect[0] + (offset)%x,rect[1]+offset/x};
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(rects);
 * vector<int> param_1 = obj->pick();
 */