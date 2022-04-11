#!/bin/bash
docker rm -f pwn_card_counter
docker build -t pwn_card_counter . 
docker run --name=pwn_card_counter -p1337:1337 pwn_card_counter