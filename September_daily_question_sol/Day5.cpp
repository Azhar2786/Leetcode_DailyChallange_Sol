//! first methos using recursion

class Solution {
public:
    Node* helper(Node* head, unordered_map<Node*,Node*>&mp){
        if(head == NULL){
            return NULL;
        }
        Node* newHead = new Node(head->val);
        mp[head] = newHead;
        newHead->next = helper(head->next,mp);

        if(head->random){
            newHead->random = mp[head->random];
        }
        return newHead;
    }
    Node* copyRandomList(Node* head) {
        unordered_map<Node*,Node*>mp;
        return helper(head,mp);
    }
};


//! second method

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head == NULL ){
            return NULL;
        }
    // clonig new linklist
        Node *it = head;
        while(it){
            Node*cloneNode = new Node(it->val);
            cloneNode->next = it->next;
            it->next = cloneNode;
            it = it->next->next;
        }

        //assinging random links of of new with the help of old list
        it = head;
        while(it){
            Node *cloneNode = it->next;
            cloneNode->random = it->random ? it->random->next : nullptr;
            it = it->next->next;
        }

        it = head;
        Node* cloneHead = it->next;
        while(it){
            Node*cloneNode = it->next;
            it->next = it->next->next;
            if(cloneNode->next){
                cloneNode->next = cloneNode->next->next;
            }
            it = it->next;
        }

        return cloneHead;
    }
};