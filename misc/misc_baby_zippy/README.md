# baby Zippy
You're the zip to my zag. Or is it zig? I don't really know, but can you get this flag out from all of these layers?

FLAG: `LUCTF{7h3r3_4r3_m4ny_w4ys_70_c0mpr3ss_d474}`

## Solution
Just unzip it lol. Most of the tools necessary are already installed or can be installed in a Linux machine, and is the recommended way to do this challenge.

```shell
unzip flag.txt.xz.7z.tar.gz.zip
tar -xvf flag.txt.xz.7z.tar.gz
xz --decompress flag.txt.xz
cat flag.txt
```