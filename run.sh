#!/bin/bash

set -e
set -u

SCRIPT_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )
BUILD_DIRECTORY="${SCRIPT_DIR}/build"
SOURCE_DIRECTORY="${SCRIPT_DIR}"

commands=()

i=1
while [ "$i" -le "$#" ]; do
    case ${!i} in
    "build")
        commands+=("build")
        ;;
    "test")
        commands+=("build" "test")
        export GTEST=""
        ;;
    "clean")
        commands+=("clean")
        ;;
    "example")
        commands+=("build" "example")
        i=$((i + 1))
        example=${!i}
        ;;
    "generate-tests")
        commands+=("build" "generate-tests")
        ;;
    "generate-docs")
        commands+=("build" "generate-docs")
        ;;
    "help"|"--help"|"-h")
        commands+=("help")
        break
        ;;
    *)
        echo "Error unknown arg: ${!i}"
        commands=("help")
        break
        ;;
    esac
    i=$((i + 1))
done

for command in ${commands[*]}
do
    case $command in
    "build")
        cmake -S ${SOURCE_DIRECTORY} -B "${BUILD_DIRECTORY}" && cmake --build "${BUILD_DIRECTORY}"
        ;;
    "test")
        (cd "${BUILD_DIRECTORY}" && ctest && cd "${SOURCE_DIRECTORY}")
        ;;
    "example")
        case $example in
        "c")
            ./build/c-example
            ;;
        "cpp")
            ./build/cpp-example
            ;;
        *)
            echo "Unknown example..."
            exit 1
            ;;
        esac
        ;;
    "generate-tests")
        ./build/generate gtest > ./tests/test-operators.cpp
        ;;
    "generate-docs")
        ./build/generate markdown > ./docs/operator_result.md
        ;;
    "clean")
        rm -rfv "${BUILD_DIRECTORY}"
        ;;
    *)
        echo "Usage:"
        echo "    ./build.sh build            # Build project"
        echo "    ./build.sh test             # Test project"
        echo "    ./build.sh clean            # Delete build directory"
        echo "    ./build.sh generate-tests   # Generate tests"
        echo "    ./build.sh generate-docs    # Generate docs"
        echo "    ./build.sh help             # Show this help message"
        exit 1
        ;;
    esac
done
