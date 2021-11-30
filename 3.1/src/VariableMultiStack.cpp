#include "ValiableMultiStack.h"

ValiableMultiStack::StackInfo(int start, int capacity){
	this.start = capacity;
	this.capacity = capacity;
}

bool ValiableMultiStack::StackInfo::isWithinStackCapacity(int index) {
	if (index < 0 || index >= stackArraySize) {
		return false;
	}
}

ValiableMultiStack(int defaultSize){
	stackInfo = StackInfo[numberOfStacks];
	for (int i=0; i< numberOfStacks; i++) {
		info[i] = StackInfo(defaultSize * i, defaultSize);
	}
	stackArraySize = numberOfStacks * defaultSize;
	stackArray = int[stackArraySize];
}

void push(int stackNum, int value) {
	if (allStacksAreFull()){
		cout << "All stacks are full." << endl;
	}

	if(stackInfo[stackNum].isFull()){
		expand(stackNum);
	}
	stack.size++;
	values[stack.lastElementIndex()] = value;
}

