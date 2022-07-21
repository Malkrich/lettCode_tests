#include "reverseBetween.hpp"

ListNode* reverseBetween(ListNode* head, int left, int right)
{


    return nullptr;
}

int readValue(ListNode* _l, int _idx)
{
    if(_idx == 1)
        return _l->val;
    else
        return readValue(_l->next, _idx-1);
}

void writeValue(ListNode* _l, int _idx, int _val)
{
    if(_idx != 1)
        writeValue(_l->next, _idx-1, _val);
    else
        _l->val = _val;
}
