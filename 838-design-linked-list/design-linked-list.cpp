

class MyLinkedList {
private:
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val (x), next(nullptr){}
};

ListNode* head;
int size;

public:
    MyLinkedList() {
         
        head = new ListNode(0);
        size = 0;
    }
    
    int get(int index) {

        if(index < 0 || index >= size){
            return -1;
        }

        ListNode* curr = head;
        for(int i = 0; i <= index; i++){
            curr = curr->next;
        }

        return curr->val;
        
    }
    
    void addAtHead(int val) {
        addAtIndex(0 , val);
        
    }
    
    void addAtTail(int val) {
        addAtIndex(size, val);
        
    }
    
    void addAtIndex(int index, int val) {
        if(index < 0){
            index = 0;
        }

        if(index > size){
            return;
        }

        ListNode* curr = head;

        for(int i = 0; i < index; i++){
            curr = curr->next;
        }
        ListNode* newNode = new ListNode(val);
        newNode->next = curr->next;
        curr->next = newNode;
        size++;
    }
    
    void deleteAtIndex(int index) {
        if(index < 0 || index >= size){
            return;
        }

        ListNode* curr = head;
        for(int i = 0; i < index; i++){
            curr = curr->next;
        }
        ListNode* toDelete = curr-> next;
        curr->next = toDelete->next;
        delete toDelete;
        size--;
        
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */