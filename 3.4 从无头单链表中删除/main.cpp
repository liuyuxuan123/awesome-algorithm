//
//  main.cpp
//  3.4
//
//  Created by 刘宇轩 on 2019/5/24.
//  Copyright © 2019 yuxuanliu. All rights reserved.
//

#include <stdio.h>
#include <string>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


int main(int argc, const char * argv[]) {
    
    ListNode* root = new ListNode(0);
    ListNode* node = root;
    ListNode* deleteNode = NULL;
    for(int i = 1;i < 10;i ++){
        ListNode* tmp = new ListNode(i);
        node->next = tmp;
        node = tmp;
        
        if(i == 4){
            deleteNode = node;
        }
    }
    
    deleteNode->val = deleteNode->next->val;
    deleteNode->next = deleteNode->next->next;
    
    ListNode* cur = root;
    ListNode* next = root->next;
    while(next){
        free(cur);
        printf(" %d 👌 ", cur->val);
        cur = next;
        next = cur->next;
    }
    printf(" %d 👌 \n", cur->val);
    free(cur);
    return 0;
}
