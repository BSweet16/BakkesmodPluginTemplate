# BakkesMod Hitbox Plugin
![Preview Screenshot](PreviewImage.png)
Draws a hitbox around your car during training. Car type is auto-detected, and can also be set manually. 

## Installation
The default installation directory should be `<steam_directory>/steamapps/common/rocketleague/Binaries/Win64/bakkesmod`. To verify this is the correct installation location for your installation, open BakkesMod Injector and select "File" -> "Open BakkesMod Folder". This is the location that should be used in place of `[Bakkes Mod Directory]` below.

1. Build the project in Visual Studio (Debug or Release configuration).
    1. (!) Use `Release` configuration for  actual use in Rocket League.
2. Copy `x64\[Release | Debug]\HitboxPlugin.dll` to `[Bakkes Mod Directory]/plugins`
3. Copy `x64\[Release | Debug]\hitboxplugin.set` to `[Bakkes Mod Directory]/plugins/settings`
4. Copy `x64\[Release | Debug]\hitboxplugin.cfg` to `[Bakkes Mod Directory]/cfg/plugins.cfg`
5. Add `plugin load hitboxplugin` to `[Bakkes Mod Directory]/cfg/plugins.cfg`.
    1. (Optional) For debugging a command to manually start the plugin may be used. In the game console run `plugin load hitboxplugin`

### How to use developer console in Bakkes Mod
Assuming Bakkes Mod is already installed, load into a practice/custom match then do the following.
1. Navigate to `Misc`.
2. Ensure `Enable developer console` is checked.
3. Press `F6`.

### (Alternate) Video showing original steps (Except the restart)
[ClickMe](https://youtu.be/Pd3Sa5VWEmc)
 1. Download the repo as a zip 
 2. Move the zip into Documents\Visual Studio 2022\Templates\ProjectTemplates
 3. Unpack the zip 
 4. Restart your computer
 5. Start visual studio. Create a new project and you should see BakkesModPlugin as a project template
 6. Profit $$$

## Commands

**cl_soccar_showhitbox** [0|1] - turn hitbox on/off

**cl_soccar_listhitboxtypes** - see a list of the integer values for different car bodies.  Use this as a parameter to cl_soccar_sethitboxtype

**cl_soccar_sethitboxtype** <int> - set the hitbox to the specified value (e.g."cl_soccar_sethitboxtype 803" for Batmobile).

- when compiling the code; check and modify the include directories to point to the BakkesMod sdk, and the post-build step as well.

## Known Issues
1. `bakkesmodsdk` may be out of date if using this in the future due to Rocket League and/or BakkesMod updates. Follow other instructions to update this if needed.
--
