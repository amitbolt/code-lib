class Solution {
    unordered_map<RandomListNode*, RandomListNode*> cloneMap;
    RandomListNode *helper(RandomListNode* head){
        if(head == NULL) return NULL;
        if(cloneMap.count(head)) return cloneMap[head];
        RandomListNode *cloned = new RandomListNode(head->label);
        cloneMap[head] = cloned; //crucial;
        cloned->next = helper(head->next);
        cloned->random = helper(head->random);
        return cloned;
    }
public:
    RandomListNode *copyRandomList(RandomListNode *head) {
        return helper(head);
    } 
};