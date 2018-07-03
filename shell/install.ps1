if (!(Get-Command g++)) {
    if (!(Get-Command choco)) {
        Set-ExecutionPolicy Bypass -Scope Process -Force
        iex ((New-Object System.Net.WebClient).DownloadString('https://chocolatey.org/install.ps1'))
    }

    choco upgrade chocolatey
    choco install mingw

    $ENV:Path += ';C:\MinGW\bin'
}

Set-ExecutionPolicy -ExecutionPolicy REMOTESIGNED