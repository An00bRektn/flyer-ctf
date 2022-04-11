# Obligatory Steg
Something something data stored in image. Something something these kinds of challenges suck.

## Solution
This is just a classic steg challenge. All you need to do is use `steghide` with an empty password to extract the flag.

```shell
steghide extract -sf stegosaurus.jpg # I think this is the command?
```