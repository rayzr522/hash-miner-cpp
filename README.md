# Hash Miner
> A simple hash miner written in C++

This simple program searches for a hash with the given prefix

## Usage
```bash
$ hash-miner <input> <prefix>
# Example usage and output:
$ hash-miner "Rayzr rocks" "faded"
1000000 : 14218cc06f85b7ae8acd23cf8f887735b1ef1fe7bae1e8ffacaa79ca462f5923
Input: Rayzr rocks
Prefix: faded
Nonce: 1655629
Hash: faded5e39eda9499a4ad4a2c474ada5759518d35997ec38b6b5c34d4d5add190
```

## Building
```
$ ./build.sh
# OR
$ g++ ./main.cpp -o hash-miner
```
