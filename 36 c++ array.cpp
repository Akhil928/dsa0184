#include <iostream>
void insertElement(int arr[], int size, int element, int position) {
    for (int i = size - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }
    arr[position] = element;
}
int main() {
    const int maxSize = 100;
    int arr[maxSize]; 
    int size; 
    int element, position; 
    std::cout << "Enter the size of the array: ";
    std::cin >> size;
    std::cout << "Enter the elements of the array:\n";
    for (int i = 0; i < size; i++) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> arr[i];
    }
    std::cout << "Enter the element to insert: ";
    std::cin >> element;
    std::cout << "Enter the position to insert the element (0-based index): ";
    std::cin >> position;
    if (position < 0 || position > size) {
        std::cout << "Invalid position!\n";
        return 1;
    }
    insertElement(arr, size, element, position);
    size++;
    std::cout << "Updated array:\n";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
    return 0;
}
