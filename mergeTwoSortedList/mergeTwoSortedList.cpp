#include "mergeTwoSortedList.hpp"

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
{
    if(list1 != nullptr && list2 != nullptr)
    {
        if(list1->val <= list2->val)
            return new ListNode(list1->val, mergeTwoLists(list1->next, list2));
        else
            return new ListNode(list2->val, mergeTwoLists(list1, list2->next));
    }
    else if(list1 == nullptr && list2 !=nullptr)
        return list2;
    else if(list1 != nullptr && list2 == nullptr)
        return list1;

    return nullptr;
}
