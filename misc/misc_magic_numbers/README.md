# Magic Numbers
To find the secret, you might need a little magic...

FLAG: `LUCTF{m4g1c_by73s_4r3_3ss3n714l}`

## Solution
This file is a regular PNG but I tampered with the "magic bytes" which define what type of file it is to most programs. You can use [this Wikipedia page](https://en.wikipedia.org/wiki/List_of_file_signatures) and use some kind of hexeditor to change the first 4 bytes to `89 50 4E 47` and then open the file to get the flag.