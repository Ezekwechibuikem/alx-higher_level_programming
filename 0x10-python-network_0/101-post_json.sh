#!/bin/bash

#displays the body of the response, and sends a JSON POST request to a URL passed as the first argument.

curl -sX POST -H "Content-Type: application/json" -d @"$2" "$1"
