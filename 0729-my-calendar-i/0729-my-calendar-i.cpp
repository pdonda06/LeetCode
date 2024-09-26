class MyCalendar {
public:
    MyCalendar() {
        
    }

    bool book(int start, int end) {
        auto it=m.upper_bound(start);
        if(it!=m.begin() && prev(it)->second>start) return false;
        if(it!=m.end() && it->first<end) return false;
        
        m[start]=end;
        return true;
    }
    
    map<int, int> m;
};