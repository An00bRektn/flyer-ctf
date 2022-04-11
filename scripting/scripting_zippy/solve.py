#!/usr/bin/python3
# @author: The Lonely Professors
from zipfile import ZipFile

pw = b"7819"
filename = "7819.zip"

zf = ZipFile(filename, 'r')

while True:
    filename = zf.namelist()[0]
    print(filename)
    f = zf.open(filename, pwd=pw)
    if not filename.endswith(".zip"):
        print(f.read())
        break
    zf = ZipFile(f, 'r')
    pw = bytes(filename[:-4], 'ascii')