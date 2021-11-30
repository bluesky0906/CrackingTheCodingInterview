#include <bits/stdc++.h>

class FixedMultiStack {
  public:
    FixedMultiStack(int capacity);
    void push(int stackNum, int value);
    int pop(int stackNum);
    bool isEmpty(int stackNum);
    bool isFull(int stackNum);
    int indexOfTop(int stackNum);
  private:
    int static const numberOfStack = 3;
    int stackCapacity;
    int *stackArray;
    int *stackArrayUsed;
};
