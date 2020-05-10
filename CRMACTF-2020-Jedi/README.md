# CRMACTF 202 Jedi Writeup

A simple base64 encoding.

## Challenge

## Jedi
Oh NO the Sith have found the resistance's base. You have 64 seconds before the base is wiped out. Remember what Yoda taught you!

"The greatest teacher, failure is." - Yoda

 Author: [matt2r]()

 [jedi.txt](jedi.txt)

 ## Solution 
Given the challenge description we can extract some key works, base and 64. Looking at the text file we can see that this is a base64 encoded string. A key identifier is the two equal signs that appear at the end of the strings

```bash
    Q1JNQUNURi17ajRkMS1tMW42LXRyMWs1fQ==
```

Tossing this in the a base64 decoder we can find that string is he following

```bash
    CRMACTF-{j4d1-m1n6-tr1k5}
```

## Flag

**CRMACTF-{j4d1-m1n6-tr1k5}**
