

class VariableMultiStack {
	public:
    VariableMultiStack();
    void push(int stackNum, int value);
    int pop(int stackNum);
    bool allStacksAreFull();
  private:
		class StackInfo {
			public:
				int size;
				int start;
				int capacity;
				StackInfo(int start, int capacity);
				bool isFull();
				bool isEmpty();
				bool isWithinStackCapacity(int index);
				int lastCapacityIndex();
				int lastElementIndex();
		};
    int static const numberOfStack = 3;
		int stackArraySize;
    int *stackArray;
    StackInfo *stackInfo;
};