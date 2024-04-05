# Sorting Algorithms and Big O notation Readme

## Installation

Access Github and request a pull, [link](https://github.com/allthatgroove89/holbertonschool-sorting_algorithms) to install to get function package.

## Header

```C#ifndef SORT_H
#define SORT_H
#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
#endif
```


## Tasks
### Bubble Sort
Write a function that sorts an array of integers in ascending order using the [Bubble sort](https://intranet.hbtn.io/rltoken/m7M7HzUS94EwEZ96NiXF-w "Bubble sort") algorithm

-   Prototype: `void bubble_sort(int *array, size_t size);`
-   You’re expected to print the `array` after each time you swap two elements (See example below)

Write in the file `0-O`, the big O notations of the time complexity of the Bubble sort algorithm, with 1 notation per line:

-   in the best case
-   in the average case
-   in the worst case

### 1. Insertion sort
Write a function that sorts a doubly linked list of integers in ascending order using the [Insertion sort](https://intranet.hbtn.io/rltoken/vdTKclgyL2SoU8tWvvUYAA "Insertion sort") algorithm

-   Prototype: `void insertion_sort_list(listint_t **list);`
-   You are not allowed to modify the integer `n` of a node. You have to swap the nodes themselves.
-   You’re expected to print the `list` after each time you swap two elements (See example below)

Write in the file `1-O`, the big O notations of the time complexity of the Insertion sort algorithm, with 1 notation per line:

-   in the best case
-   in the average case
-   in the worst case

### 2. Selection sort
Write a function that sorts an array of integers in ascending order using the [Selection sort](https://intranet.hbtn.io/rltoken/tCeLZCrai4EjZ6F-JzwoEw "Selection sort") algorithm

-   Prototype: `void selection_sort(int *array, size_t size);`
-   You’re expected to print the `array` after each time you swap two elements (See example below)

Write in the file `2-O`, the big O notations of the time complexity of the Selection sort algorithm, with 1 notation per line:

-   in the best case
-   in the average case
-   in the worst case

### 3. Quick sort
Write a function that sorts an array of integers in ascending order using the [Quick sort](https://intranet.hbtn.io/rltoken/__W1KGuZNqzEWYlSJokx-g "Quick sort") algorithm

-   Prototype: `void quick_sort(int *array, size_t size);`
-   You must implement the `Lomuto` partition scheme.
-   The pivot should always be the last element of the partition being sorted.
-   You’re expected to print the `array` after each time you swap two elements (See example below)

Write in the file `3-O`, the big O notations of the time complexity of the Quick sort algorithm, with 1 notation per line:

-   in the best case
-   in the average case
-   in the worst case
## Contributing

Pull requests are welcome. For major changes, please open an issue first

to discuss what you would like to change.

Please make sure to update tests as appropriate.

## Authors and acknowledgment

###  Saul Vera Echevestre (<saul.vera787@gmail.com>) Glorisabel Rivera Rodriguez(<glorisabel200@gmail.com>) ,  github [link](https://github.com/allthatgroove89/holbertonschool-printf)
