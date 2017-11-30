#!/bin/bash
cd "$(dirname "$0")" || exit 1

g++ ./main.cpp -o hash-miner
