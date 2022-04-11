#!/bin/bash
docker rm -f pwn_welcome_to_gadgetzan
docker build -t pwn_welcome_to_gadgetzan . 
docker run --name=pwn_welcome_to_gadgetzan -p3724:3724 pwn_welcome_to_gadgetzan