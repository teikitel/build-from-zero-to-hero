# Ant
1. Install `ant` and `ant-junit`. On Centos for example: `sudo yum install ant ant-junit`
2. Download [junit](https://mvnrepository.com/artifact/junit/junit/4.13.2) and place it in `ANT_HOME`. By default `ANT_HOME=$HOME/.ant/lib`
3. Run `ant -p` to list all the available targets
4. Run several times `ant jar` to witness incrementality. `compile` target for example shouldn't do anything on second run
5. Try hello with `ant run` or `java -jar ./build/jar/HelloWorld.jar`
6. Clean with `ant clean`

# Maven
1. Install `maven`. On Centos for example: `sudo yum install maven`
2. Run several times `mvn package` to witness incrementality. `compile` target for example shouldn't do anything on second run
3. Try hello with `java -jar target/helloworld-1.0.0.jar`
4. Clean with `mvn clean`

# Gradle
1. Optional - Install `gradle` with [SDK! Man](https://sdkman.io/) for example
2. Run `./gradlew tasks` to list all the available tasks
3. Run several times `./gradlew jar` to witness incrementality. `compile` target for example shouldn't do anything on second run
4. Try hello with `./gradlew run` or `java -jar build/libs/hello-1.0.0.jar`
5. Clean with `./gradlew clean`

## Cache
1. Run `./gradlew build --cache`
2. Clean the workspace `git clean -fxd`
3. Run again `./gradlew build --cache`. You should notice that some tasks were pulled from the cache
4. Run again `./gradlew build --cache`. You should notice that all tasks were already up to date

## Build intelligence platform
1. Run `./gradlew build --cache --scan` to export a build scan at the end of the build. Explore the build scan

# Bazel
1. Install `bazel`. On Centos for example: `sudo yum install bazel`
2. Run several times `bazel test //src/test/java/hello:unit` to witness caching. `//src/test/java/hello:unit` target for example should be pulled from cache on second run
3. Run `bazel build //src/main/java/hello:hello` to assemble hello
4. Try hello with `./bazel-bin/src/main/java/hello/hello`
5. Clean with `bazel clean`