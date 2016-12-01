#include "iostream"


//Problem 1
/*
Create a function that takes in 3 numbers and returns the sum of
those numbers multiplied by 5 (This function should work
for both integer and floating point values).
*/
float sum(float a, float b, float c);

//Problem 2
/*
Write a function that takes two parameters a pointer to an array and the number of elements
then populate the array with all even numbers.
*/
void even(int arr[], int size);



//Problem 3
/*
Create a function that takes in a character array and reverses the string stored inside of it.
*/
void reverse(char* Arr[], int size);


//Problem 4
/*
Create a Cat class with a private char variable called m_name.
Then create a public constructor that has no arguments. You will need one more function
of return type void called NameMe, this takes in a character as an argument and needs to assign
this character to the value of m_name. Once you have your class created, Create an array of
type Cat of size 26. Then populate the names of these cats each with a different letter of
the alphabet starting with capital A and every other cats name should
be a lowercase letter (A,b,C,d,E,f,G,...).
You cannot use a for loop and you cannot print to the console.
*/
class Cat
{
	char m_name;
public:
	Cat() {};
	void NameMe(char namer)
	{
		m_name = namer;
	}
};
void Namer();

//Problem 5
/*
Create a function that takes in two arguments, One that points to an array
of integers and one for the size of the array.
This function will return the value in the array that appears the most times.
*/
int most(int nums[], int size);


//Problem 6
/*
Create a function that swaps the value of two integers without the use of a temporary variable.
*/
int swap(int a, int b);

//Problem 7
/*
Create an array of strings then sort each string in alphabetical order.
*/

int main()
{
	//Problem 1
	float s = sum(5.5, 2, 15.2);

	//Problem 2
	int Arr[10];
	even(Arr, 10);

	//Problem 3
	char*Rev[15] = { "Tell No One" };
	reverse(Rev, 15);

	//Problem 4
	
	Namer();


	//Problem 5
	int num[10] = { 2, 3, 4, 2, 3, 1, 4, 5,4,6 };
	most(num, 10);

	//Problem 6
	swap(2, 3);

	//Problem 7
	std::string stg[5] = {"Hello","Nope","Jack","Not Again","Bodom"};

	

	return 1;
}

//Problem 1
float sum(float a, float b, float c)
{
	return 5 * (a + b + c);
}


//Problem 2
void even(int arr[], int size)
{
	int i = 0;
	for (int j = 0; j < size; j++)
	{
		arr[j] = i + 2;
	}
}


//Problem 3
void reverse(char* Arr[], int size)
{
	int i = 0;
	while (i < size)
	{
		Arr[i] = { Arr[size - i -1] };
		i++;
	}
}

//Problem 4
void Namer()
{
	int i = 0;
	int j = 65;
	while (i < 26)
	{
		Cat Namez[26];
		
		i++;
		j++;
	}
}


//Problem 5
int most(int nums[], int size)
{
	int max_count = 0;
	int i = 0;
	for (; i<5; i++)
	{
		int count = 1;
		for (int j = i + 1; j<size; j++)
			if (nums[i] == nums[j])
				count++;
		if (count>max_count)
			max_count = count;
	}

	for (; i<size; i++)
	{
		int count = 1;
		for (int j = i + 1; j<5; j++)
			if (nums[i] == nums[j])
				count++;
	}
	return nums[i];
}

//Problem 6
int swap(int a, int b)
{
	a = a + b;
	b = a - b;
	a = a - b;
	return a;
}