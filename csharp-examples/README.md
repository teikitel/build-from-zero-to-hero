# MSBuild
1. Install `dotnet` with `net6.0` using (dotnet install script)[https://learn.microsoft.com/en-us/dotnet/core/tools/dotnet-install-script]
2. Run several times `dotnet test` to witness incrementality. `restore` target for example shouldn't do anything on second run
5. Try hello with (from `Hello` directory) `dotnet run`
6. Clean with `dotnet clean`