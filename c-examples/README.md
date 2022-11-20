# Script
1. Install `gcc`. On Centos for example: `sudo yum install gcc`
2. Run `./build.sh assemble` to generate the `hello` executable
3. Try hello with `./hello`
4. Clean with `./build.sh clean`

# Make
1. Install `make`. On Centos for example: `sudo yum install make`
2. Run several times `make hello` to witness incrementality. On second run, everything should be up to date
3. Try hello with `./hello`
4. Clean with `make clean`