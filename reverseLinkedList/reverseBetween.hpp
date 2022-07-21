#ifndef REVERSEBETWEEN_HPP
#define REVERSEBETWEEN_HPP

#include "extra_librairies/listNode.hpp"

ListNode* reverseBetween(ListNode* head, int left, int right); // main algorithm

/**
 * @brief readValue : reads a value a index _idx
 */
int readValue(ListNode* _l, int _idx);

/**
 * @brief writeValue : writes a value at index _idx
 */
void writeValue(ListNode* _l, int _idx, int _val);

#endif // REVERSEBETWEEN_HPP
