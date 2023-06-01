[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/Ad3CiblN)
# Lab3
Lab 3
This assignment has 2 parts. You need to implement single linked list (in part 1) and doubly linked list (in part 2). You will create 1 file for each part, 2 files in total. Upload your .c files on GitHub. Don’t forget to attach the output screenshots in README.md.
 
PART 1:
Implement a single linked list using structures in C. 
The linked list structure should contain a value (int) and a pointer. 
Suppose you have the following linked list
 
23 -> 52 -> 19 -> 9 -> 100
Here, head points to 23.
 
Implement the following methods
1. Search for a given element (input taken from the user) in the linked list. If the element is found, return its position in the linked list. Otherwise return -1.

 <img width="616" alt="Screenshot 2023-06-01 at 9 42 43 AM" src="https://github.com/CS5008-5009/lab3-LocalBinNotFound/assets/129228556/98447ae6-3aab-4183-a705-5d5aeb7c3491">

2. Insert an element in the linked list. Use malloc to create a new node. Take input from the user. 

  a. Insert element in the middle of the linked list, position should be taken as an input from the user. 
  e.g. Insert 7 at position 3
  Original linked list : 23 -> 52 -> 19 -> 9 -> 100
  After insertion = 23 -> 52 -> 7 -> 19 -> 9 -> 100

<img width="614" alt="Screenshot 2023-06-01 at 9 44 57 AM" src="https://github.com/CS5008-5009/lab3-LocalBinNotFound/assets/129228556/08c42151-2b83-4278-83e4-1f2b129be0b8">

  b. Insert element at the head of the linked list. Head should point to the 'new' head. 
  Original linked list : 23 -> 52 -> 19 -> 9 -> 100
  After insertion: 7 -> 23 -> 52 -> 19 -> 9 -> 100
  Here, head should point to 7.

<img width="608" alt="Screenshot 2023-06-01 at 9 44 25 AM" src="https://github.com/CS5008-5009/lab3-LocalBinNotFound/assets/129228556/57627791-4bf7-4922-ac8e-2180aca31159">

  c. Insert element at the end of the linked list 
  Original linked list : 23 -> 52 -> 19 -> 9 -> 100
  After insertion: 23 -> 52 -> 19 -> 9 -> 100 -> 7

<img width="612" alt="Screenshot 2023-06-01 at 9 45 21 AM" src="https://github.com/CS5008-5009/lab3-LocalBinNotFound/assets/129228556/5cb0dacb-8630-4392-91ab-2204bdd6dc84">
 
3. Delete element from the linked list.

  a. Delete element from the middle of the linked list
  e.g. Delete 19.
  Original linked list : 23 -> 52 -> 19 -> 9 -> 100
  After deletion = 23 -> 52 -> 9 -> 100

 <img width="607" alt="Screenshot 2023-06-01 at 9 46 21 AM" src="https://github.com/CS5008-5009/lab3-LocalBinNotFound/assets/129228556/df5e0ebf-b029-4e1c-9e88-8b6ba9eb11a9">

  b. Delete head of the linked list
  Original linked list : 23 -> 52 -> 19 -> 9 -> 100
  After deletion = 52 -> 19 -> 9 -> 100
  Head points to 52.

 <img width="634" alt="Screenshot 2023-06-01 at 9 47 26 AM" src="https://github.com/CS5008-5009/lab3-LocalBinNotFound/assets/129228556/96b3cf8e-d564-4d73-8ece-64f13354ab29">

  c. Delete last element of the linked list
  Original linked list : 23 -> 52 -> 19 -> 9 -> 100
  After deletion = 23 -> 52 -> 19 -> 9 
  Here, pointer of 9 should point to null.

 <img width="609" alt="Screenshot 2023-06-01 at 9 46 50 AM" src="https://github.com/CS5008-5009/lab3-LocalBinNotFound/assets/129228556/59987cb7-ee2e-4f18-999e-673fc4339443">

4. Print all the elements in the linked list.
Output: 23, 52, 19, 9, 100

<img width="615" alt="Screenshot 2023-06-01 at 9 47 59 AM" src="https://github.com/CS5008-5009/lab3-LocalBinNotFound/assets/129228556/4eef73ff-c5bb-4b56-9543-18cce0c67baa">

PART 2:
Implement a doubly linked list using structures in C. 
The linked list structure should contain a value (int) and 2 pointers: next and prev. 
Suppose you have the following linked list
 
23 <--> 52 <--> 19 <--> 9 <--> 100
Here, head points to 23.
 
Implement the following methods
1. Search for a given element (input taken from the user) in the linked list. If the element is found, return its position in the linked list. Otherwise return -1.

 <img width="623" alt="Screenshot 2023-06-01 at 9 54 11 AM" src="https://github.com/CS5008-5009/lab3-LocalBinNotFound/assets/129228556/fe05868a-33f1-4afc-8b20-cae366a0ee5a">

2. Insert an element in the linked list. Use malloc to create a new node. Take input from the user. 

a. Insert element in the middle of the linked list, position should be taken as an input from the user. 
e.g. Insert 7 at position 3
Original linked list : 23 <--> 52 <--> 19 <--> 9 <--> 100
After insertion = 23 <--> 52 <--> 7 <--> 19 <--> 9 <--> 100
 
 <img width="623" alt="Screenshot 2023-06-01 at 9 54 54 AM" src="https://github.com/CS5008-5009/lab3-LocalBinNotFound/assets/129228556/f462ce0d-dde7-47ea-b599-2607f91e65d0">

b. Insert element at the head of the linked list. Head should point to the 'new' head. 
Original linked list : 23 <--> 52 <--> 19 <--> 9 <--> 100
After insertion : 7 <--> 23 <--> 52 <--> 19 <--> 9 <--> 100
Here, head should point to 7.
 
 <img width="607" alt="Screenshot 2023-06-01 at 9 55 21 AM" src="https://github.com/CS5008-5009/lab3-LocalBinNotFound/assets/129228556/b33cce3d-f859-4635-9e23-537273ab8054">

c. Insert element at the end of the linked list 
Original linked list : 23 <--> 52 <--> 19 <--> 9 <--> 100
After insertion : 23 <--> 52 <--> 19 <--> 9 <--> 100 <--> 7

 <img width="615" alt="Screenshot 2023-06-01 at 9 55 40 AM" src="https://github.com/CS5008-5009/lab3-LocalBinNotFound/assets/129228556/c52bad4e-bbc4-4204-82ac-387a4b61f9a3">

3. Delete element from the linked list.

a. Delete element from the middle of the linked list
e.g. Delete 19.
Original linked list : 23 <--> 52 <--> 19 <--> 9 <--> 100
Resulting linked list = 23 <--> 52 <--> 9 <--> 100

 <img width="610" alt="Screenshot 2023-06-01 at 9 56 04 AM" src="https://github.com/CS5008-5009/lab3-LocalBinNotFound/assets/129228556/6b47afe1-849a-46a5-adc8-1ae44c2e5fb8">

b. Delete head of the linked list
Original linked list : 23 <--> 52 <--> 19 <--> 9 <--> 100
Resulting linked list = 52 <--> 19 <--> 9 <--> 100
Head points to 52.

<img width="604" alt="Screenshot 2023-06-01 at 9 56 31 AM" src="https://github.com/CS5008-5009/lab3-LocalBinNotFound/assets/129228556/4808232e-f9e6-44d1-9b66-5c2f0eba3390">

c. Delete last element of the linked list
Original linked list : 23 <--> 52 <--> 19 <--> 9 <--> 100
Resulting linked list = 23 <--> 52 <--> 19 <--> 9 
Here, pointer of 9 should point to null.

 <img width="608" alt="Screenshot 2023-06-01 at 9 56 57 AM" src="https://github.com/CS5008-5009/lab3-LocalBinNotFound/assets/129228556/ef64a0e8-6a8e-41eb-be3a-693da5d8bba4">

4. Print all the elements in the linked list in reverse order.
Original linked list : 23 <--> 52 <--> 19 <--> 9 <--> 100
Output - 100, 9, 19, 52, 23

<img width="620" alt="Screenshot 2023-06-01 at 9 57 18 AM" src="https://github.com/CS5008-5009/lab3-LocalBinNotFound/assets/129228556/31476938-7d05-4efc-821e-e4d9fe73a410">

