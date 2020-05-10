## CRMA 2020 Sleeping Beauty Writeup

A twist to a hill cipher with a special encoding

## Challenge
 
## Sleeping Beauty 
She was gonna tell me something before I went climbing Mt. Everest but I lost service before she could. She thought it'd be funny to encrypt her message so I'd spend my entire trip back thinking about her. I need to figure it out before I'm back.

Note: the flag will not be in the regular format; wrap it with CRMACTF-{your found flag here}

Author: [matt2r]()

[bedtime.txt](bedtime.txt)

## Solution
Given the text file we're giveen a key and message. It looks like we will have to decrypt the message with the key. 

```bash
Key: 

1 1 1
1 2 3
2 4 9

Message: O K V S G R K U O C B X
```

First test is to see if the key is invertable. This will tell us if we are able to multiple it by the a message matrix to find the plaintext.

It looks like it is:

```bash
1 1 1        2	 7	9
1 2 3   ->  25	11	8
2 4 9        0	8	9
```
Now we need to conver the message string into numbers using a basic alphebetic encoding. Reading Left to right creating a matrix we produce the following:

```bash
15 11 22
19  7 18
11 21 15
 3  2 24
```
Following a Hill Cipher approah we multiply the decrpted message by the inverse of the key `mod 26` and retrive a string of numbers. 

```bash
15 11 22        2	 7	9       19  12   5
19  7 18   *    25	11	8  -->   5  16  25
11 21 15        0	8	9        1  12  12
 3  2 24                         4   1  25
```


```bash 
19 12 5 5 16 25 1 12 12 4 1 25
```

Converting the number to z26
```bash
S L E E P Y A L L D A Y
```

Following the instructions we have:

```bash 
CRMFCTF-{SLEEPYALLDAY}
```

## Flag 
(*case-insensitive*)

**CMRACTF-{sleepyallday}** 

