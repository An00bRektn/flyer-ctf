#!/bin/bash
docker rm -f pwn_basic
docker build -t pwn_basic . 
docker run --name=pwn_basic -p1234:1234 pwn_basic