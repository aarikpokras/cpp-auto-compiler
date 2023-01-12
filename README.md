# C++ Auto-Compiler
### aka "amp" - Like a parody of apt
Uses a shell script and G++ to automatically build programs from GitHub.

## Usage
`cd` into the directory in which you have stored amp.

Give chmod 755 permissions to `bin/amp`.

```console
cd /path/to/amp
```
```console
chmod 755 bin/amp
```
### Optional
You might want to make the `amp` folder hidden.
```console
mv amp .amp
```
Executable name in the directory `amp`: `bin/amp`
## Syntax
`bin/amp`: help list

`bin/amp -i gh USER REPO BRANCH`

Sorry about the lengthy args.
## Warning
This is the first version, so there are bound to be mistakes. **If there is more than 1 .cpp file in a directory, there *will* be an error.**

I put an example in the "amp" folder.
