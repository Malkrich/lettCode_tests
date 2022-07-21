#ifndef REVERSEBETWEEN_HPP
#define REVERSEBETWEEN_HPP

#include "extra_librairies/listNode.hpp"

#include <cmath>

/**
 * @brief reverseBetween : main algorithm
 */
ListNode* reverseBetween(ListNode* head, int left, int right);

/**
 * @brief readValue : reads a value a index idx
 */
int readValue(ListNode* l, int idx);

/**
 * @brief writeValue : writes a value at index idx
 */
void writeValue(ListNode* l, int idx, int val);

/**
 * @brief sizeOf : find the a linked list
 */
int sizeOf(ListNode* l);

#endif // REVERSEBETWEEN_HPP
