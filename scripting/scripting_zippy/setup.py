#!/usr/bin/python3
# zip --password 1337 1337.zip flag.txt

from pwn import *
import random
filename="1337.zip"
io = process('sh')

context.log_level='info'
io.sendline("zip --password 1337 1337.zip flag.txt")
for i in range(99):    
    #print("filename="+filename)
    #random.seed(0xc0ffee)
    is_duplicate = True
    while is_duplicate:
        name = random.randint(1111,9999)
        if str(name) != filename.strip(".zip"):
            is_duplicate = False
    
    print(filename)
    io.sendline(f"zip --password {name} {name}.zip {filename}")
    io.recvrepeat(1)
    #io.recvline()
    io.sendline("rm "+filename)
    io.sendline("ls | grep zip")
    ls =io.recvrepeat(1).decode().strip()
    if ls == "":
        break
    filename=ls
    #print("newfile="+filename)
