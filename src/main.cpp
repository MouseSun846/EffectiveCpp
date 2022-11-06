#include <iostream>
#include <string>
#include "Widget/Widget.h"
vector<vector<string>> mostPopularCreator(vector<string>& creators, vector<string>& ids, vector<int>& views) {
    vector<vector<string>> res;
    map<string,long long> grid;
    map<string,string> gridId;
    map<string,long long> viewMp;
    long long maxViews = 0;
    for(int i = 0;i<creators.size();i++){
        grid[creators[i]]+=views[i];
        string curId = ids[i];
        int curView = views[i];
        if(viewMp.find(creators[i]) != viewMp.end()){
            if(viewMp[creators[i]] > curView){
                curId = gridId[creators[i]];
                curView = viewMp[creators[i]];
            }else if(viewMp[creators[i]] == curView){
                if(gridId.find(creators[i]) != gridId.end()){
                    if(gridId[creators[i]] < curId){
                        curId = gridId[creators[i]];
                    }
                }                
            }
        }     
        viewMp[creators[i]] = curView;   
        gridId[creators[i]] = curId;
        if(grid[creators[i]] > maxViews){
            maxViews = grid[creators[i]];
        }
    }
    for(auto &[k,v]:grid){
        if(v == maxViews){
            res.push_back({k,gridId[k]});
        }
    }
    return res;
}
int main() {
    std::string name = "lsy";
    Widget widget{123, name};
    Widget w2 = widget;
    std::cout << w2;
}
