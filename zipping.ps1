Add-Type -assembly "system.io.compression.filesystem"

$source = "C:\chrome\Password"
$destination = "C:\chrome\Password.zip"

[io.compression.zipfile]::CreateFromDirectory($Source, $destination)