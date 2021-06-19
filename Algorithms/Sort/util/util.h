#define VECTOR_SIZE 10000

void runSortAll(void (*sortFunction)(int *vector));
void runSort(void (*sortFunction)(int *vector), int vectorType);
void startTimer();
void stopTimer();
void printTimer();
void populateVector(int *vector, int vectorType);
void printVector(int *vector);
void testVectorOrder(int *vector);
void swap(int *elementA, int *elementB);