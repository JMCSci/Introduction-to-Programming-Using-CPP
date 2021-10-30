/* Chapter 11.3 */

#include <iostream>

void swap(int& n1, int& n2)
{
    int temp = n1;
    n1 = n2;
    n2 = temp;
}

void print(int size, const int* array)
{
    for(int i = 0; i < size; i++)
    {
        std::cout << array[i] << std::endl;
    }

}

void bubbleSort(int* const array, int size)
{
    int* arrCopy = new int[size];
    // copy array contents to persistent data
    for(int i = 0; i < size; i++)
    {
        arrCopy[i] = array[i];
    }

    // perform bubble sort
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - 1; j++)
          if(arrCopy[j] > arrCopy[j + 1])
          {
              swap(arrCopy[j], arrCopy[j + 1]);
          }
    }
    
    print(size, arrCopy);
}

int main(int argc, char* argv[])
{
    int array[6] = {4, 5, 1, 0, 11, 2};
    int size = sizeof(array) / sizeof(int);
    bubbleSort(array, size);
    // print(size, array);
    return 0;
}
