# ![C++ Auto-Compiler](https://img.shields.io/badge/%20-amp-grey?logo=c%2B%2B&style=for-the-badge)
### aka "amp" - Like a parody of apt, but doesn't do the same thing
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
## Syntax
Executable name in the directory `amp`: `bin/amp`

`bin/amp`: help list

`bin/amp -i gh USER REPO BRANCH`

Sorry about the lengthy args.
## Warning
This is the first version, so there are bound to be mistakes. **If there is only 1 .cpp file in a directory, it'll compile as two programs.***

amp does **not** compile recursively.

I put an example in the "amp" folder.
