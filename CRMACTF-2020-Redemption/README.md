# CRMA 2020 Redemption Writeup

A reverse engineering and shaw256 encoded string

## Challenge

## Redemption

We know Andy didn't commit the murder. Can you help Red, Andy's new friend find the weapon?

 Author: [matt2r]()

 File: [redemption](source/redemption)


## Solution 
First downloading the file we notice there is nothing we can do. This might suggest this is an executable. We will use chmod to make this an executable file.

```bash
chmod +x redemption
```

Running the script we recieve the following output

```bash 
> ./redemption
"Are you looking for something?"

> Yes

"You're gonna have to look a harder then that."
```

It does look like it will give use the key if we simply run the file. We will have to do some initial reverse engineering. First thing I always try is ``strings``.

```bash
strings redemption | less
```

Once we do this we can see the prompts that we recieved from initially running the script. However, this time we see a string that seems out of place.

```bash 
d1792d0c1d677d2e358e9ed00b09aaec7d09d9f4d6faa4c82f31985faa2dde15
```

This might be a encoded string. Best guess this looks like a shaw256 encoded string. Tossing the string into a shaw256 decoder we find the following:

```bash
CRMACTF-{5h@w-c4ank-r4d4m9ti0n}
```


## Flag 

**CRMACTF-{5h@w-c4ank-r4d4m9ti0n}**

