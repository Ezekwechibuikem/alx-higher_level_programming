#!/bin/bash

# displays all HTTP methods the server will accept and takes in a URL.

curl -sI "$1" | grep "Allow:" | sed -ne 's/^Allow: //p'
