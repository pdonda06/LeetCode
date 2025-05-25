class FrontMiddleBackQueue {
private:
    ListNode* head;
public:
    FrontMiddleBackQueue() {
        head = NULL;
    }
    
    void pushFront(int val) {
        ListNode* n = new ListNode(val);
        n->next = head;
        head = n;
        return;
    }
    
    void pushMiddle(int val) {
        if(head==NULL || head->next==NULL) {
            pushFront(val);
            return;
        }
        
        ListNode* p = NULL;
        ListNode* s = head;
        ListNode* f = head->next;
        while(f && f->next) {
            p = s;
            s = s->next;
            f = f->next->next;
        }
        ListNode* n = new ListNode(val);
        if(f) {
            n->next = s->next;
            s->next = n;
            return;
        }
        else {
            n->next = s;
            p->next = n;
            return;
        }
    }
    
    void pushBack(int val) {
        if(head==NULL) {
            head = new ListNode(val);
            return;
        }
        ListNode* t = head;
        while(t->next) {
            t = t->next;
        }
        t->next = new ListNode(val);
        return;
    }
    
    int popFront() {
        if(head==NULL) {
            return -1;
        }
        int ans = head->val;
        head = head->next;
        return ans;
    }
    
    int popMiddle() {
        if(head==NULL) {
            return -1;
        }
        if(head->next==NULL || head->next->next==NULL) {
            int ans = head->val;
            head = head->next;
            return ans;
        }
        ListNode* p = NULL;
        ListNode* s = head;
        ListNode* f = head->next;
        while(f && f->next) {
            p = s;
            s = s->next;
            f = f->next->next;
        }
        int ans = s->val;
        p->next = s->next;
        delete s;
        return ans;
    }
    
    int popBack() {
        if(head==NULL) {
            return -1;
        }
        else if(head->next==NULL) {
            int ans = head->val;
            head = head->next;
            return ans;
        }
        int ans;
        ListNode* t = head;
        ListNode* p = NULL;
        while(t->next) {
            p = t;
            t = t->next;
        }
        ans = t->val;
        p->next = NULL;
        delete t;
        return ans;
    }
};

/**
 * Your FrontMiddleBackQueue object will be instantiated and called as such:
 * FrontMiddleBackQueue* obj = new FrontMiddleBackQueue();
 * obj->pushFront(val);
 * obj->pushMiddle(val);
 * obj->pushBack(val);
 * int param_4 = obj->popFront();
 * int param_5 = obj->popMiddle();
 * int param_6 = obj->popBack();
 */