# Bitwise Operations

Bitwise operations perform logical functions that take effect at bit level. 

The basic operations are: 

- AND (&)
- OR (|)
- Shift LEFT <<
- Shift RIGHT >>

Bit masks are operations used to access specific bits in data.


## AND(&) Operation

The AND operator will return a 1 at each bit position where both input values are 1. 


```
int a = 0b1001;
int b = 0b1000;

int c = a&c; // c will be 8 since there is only one common bit at position 1000.

```

## OR (|) Operation

The OR operator will result in a 1 at each position where either input values are 1.

It could be said that it copies one bit over the other

```
int a = 0b0100;
int b = 0b0010;

int c = a|b; // c will be 6 since the only filled positions are the 3rd and the 2nd 0110

```


## Shift LEFT (<<)

The shift LEFT operator (<<) moves all the bits in the byte by the specified number of times.

Each time is equal to multiplying by 2.


```
int a = 0b0110;
int b = 0b1001;

int c = a<<1 	// 0b01100;
int d = b<<3 	// 0b1001000;

```

## Shift RIGHT (>>)

The shift RIGHT operator shifts the bits by an specified number of positions to the right.

This is equivalent of dividing by two.

NB! the last bit is dropped off. 

```
int a = 0b0111;
int b = 0b1001;

int c = a>>1;	// c = 0b0011
int d = b>>3;	// d = 0b0001

```


