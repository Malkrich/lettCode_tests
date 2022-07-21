#include "listNode.hpp"

void display(ListNode* l)
{
    if(l->next != nullptr)
    {
        std::cout << l->val << ", ";
        display(l->next);
    }
    else
        std::cout << l->val << std::endl;
}
