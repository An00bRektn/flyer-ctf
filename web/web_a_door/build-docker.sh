#!/bin/bash
docker rm -f web_a_door
docker build -t web_a_door .
docker run --name=web_a_door --rm -p1337:80 -it web_a_door