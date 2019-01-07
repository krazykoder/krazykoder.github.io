# Helloworld to Everyone 

A "Hello, World!" message being displayed through long-exposure light painting with a moving strip of LED lights. A "Hello, World!" program is a computer program that outputs or displays the message "Hello, World!". Because it is very simple in most programming languages, it is often used to illustrate the basic syntax of a programming language and is often the first program people write.

## Helloworld in `C`

```C
#include<stdio.h>

// Function to add 2 numbers
int addme (int a, int b) {
	return a+b;
}

// Function to multiply 2 numbers
int multme (int a, int b) {
	return a*b;
}

// Function to divide 2 numbers
int divideme (int a, int b) {
	return a/b;
}

// main function -> entrypoint
int main () {
	printf("Hello World");
	printf("\n");
	printf("add 5 + 2 = %d", addme(5,2) );
	printf("\n");
	printf("mult 5 * 2 = %d", multme( 5,2));
	printf("\n");
   	printf("divide 5 / 2 = %d", divideme( 5,2));
	printf("\n");
}

```

## Helloworld in `Java`

```java
public class helloworld {
    public static int addme (int a , int b) {
		return a+b;
	}

	public static int multme (int a , int b) {
		return a*b;
	}

	public static int divideme (int a , int b) {
		return a/b;
	}
	
	// main function -> entrypoint
	public static void main (String args []) {
		System.out.print ( "Hello World!");
		System.out.print ( "\n");
		System.out.println ( "Add 5 + 2 = " + addme (5,2));
		System.out.println ( "multiply 5 + 2 = " + multme (5,2));
		System.out.println ( "divide 5 + 2 = " + divideme(5,2));
	}
}
```


## Helloworld in `Python`

```python
# Function to add 2 numbers
def addme(a, b):
    return a+b
    
def multme(a, b):
    return a*b
    
def divideme(a, b):
    return a/b
    
print("Hello World")
print("Add 5 + 2 = ", addme(5, 2))
print("Multiply 5 * 2 = ", multme(5, 2))
print("Divide 5 / 2 = ", divideme(5, 2))

```