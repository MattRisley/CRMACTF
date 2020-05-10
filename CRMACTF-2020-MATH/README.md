# CRMACTF 2020 Math Writeup

A twist to a hill cipher with a special encoding

## Challenge

## Math? 
Did you ever think you'd have to remember the stuff you learned in that math class?

Note: the flag will not be in the regular format; wrap it with CRMACTF-{your found flag here}

Author: [matt2r]()

 [math.txt](math.txt)

## Solution
Given the matrix and string this might be a variation of a hill cipher. We can just use the provided key.

```bash 
    1 2 3     
    0 1 4  
    5 6 0 
```

We now have to convert the string into a matrix.

```bash
     -68    60  -13
     243  -199   52
    -108    91  -18
```

Multiply the two we get 

```bash 
    1 2 3        -68    60  -13       13  1 20
    0 1 4   *    243  -199   52 -->    8  9 19
    5 6 0       -108    91  -18       20  21 6
```

Converting this into a string 
13 1 20 8 9 19 20 21 6

```bash
MATHISTUF
```

## Flag

**CRMACTF-{mathistuf}**