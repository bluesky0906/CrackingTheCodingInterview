#include "FixedMultiStack.h"
#include <bits/stdc++.h>


void FixedMultiStack::push(int stackNum, int value) {
  if (isFull(stackNum)) {
    std::cout << "Stack" << stackNum << "is full.\n";
  } else {
    stackArrayUsed[stackNum]++;
    stackArray[indexOfTop(stackNum)] = value;
  }
}

int FixedMultiStack::pop(int stackNum) {
  if (isEmpty(stackNum)) {
    std::cout << "Stack" << stackNum << "is empty.\n";
  }
  int index = indexOfTop(stackNum);
  stackArray[index] = 0;
  stackArrayUsed[stackNum]--;
  
  return stackArray[index];
}

bool FixedMultiStack::isEmpty(int stackNum) {
  return stackArrayUsed[stackNum] == 0;
}

bool FixedMultiStack::isFull(int stackNum){
  return stackArrayUsed[stackNum] == stackCapacity;
}

int FixedMultiStack::indexOfTop(int stackNum) {
  int startIndex = stackNum * stackCapacity;
  return startIndex + stackArrayUsed[stackNum] - 1;
}
