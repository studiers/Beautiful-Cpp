param (
    [string] $filename,
    [string] $workspace
)

Set-Location $workspace

''

if (-not (Test-Path -Path ./bin/)) {
    New-Item -Type Directory -Name ./bin/
}

"[+] Compile $workspace/$filename"
"[+] Execute Binary"

''

g++ -o ./bin/test.exe $filename

./bin/test.exe

''