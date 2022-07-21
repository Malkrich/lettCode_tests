#include "reverseBetween.hpp"

ListNode* reverseBetween(ListNode* head, int left, int right)
{
    ListNode* ret = head;
    int vl,vr;

    int i = left;
    int j = right;
    while(i < j)
    {
        vl = readValue(ret, i);
        vr = readValue(ret, j);
        writeValue(ret, j, vl);
        writeValue(ret, i, vr);
        i++;
        j--;
    }

    return ret;
}

int readValue(ListNode* l, int idx)
{
    if(idx == 1)
        return l->val;
    else
        return readValue(l->next, idx-1);
}

void writeValue(ListNode* l, int idx, int val)
{
    if(idx != 1)
        writeValue(l->next, idx-1, val);
    else
        l->val = val;
}

int sizeOf(ListNode* l)
{
    int i = 0;
    while(l != nullptr)
    {
        l = l->next;
        i++;
    }
    return i;
}
