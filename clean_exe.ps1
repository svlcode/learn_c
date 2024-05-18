# Script to delete all executables in the current directory and its subdirectories

# Get the current directory
$rootFolder = Get-Location


# Get all executable files within the current directory and subdirectories
$executables = Get-ChildItem -Path $rootFolder -Recurse -Filter *.exe

if ($executables.Length -eq 0)
{
  Write-Output "No Executables to delete"
}
else
{
  Write-Output "Deleting all executables from $($rootFolder.Path)"
  
  # Delete the executable files
  foreach ($exe in $executables)
  {
    try {
      
      Remove-Item -Path $exe.FullName -Force
      Write-Output "Deleted: $($exe.FullName)"
    }
    catch {
      Write-Error "Failed to delete: $($exe.FullName). Error: $_"
    }
  }

}

