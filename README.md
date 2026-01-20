# BakkesMod Hitbox Plugin
Draws a hitbox around your car during training.   Car type is auto-detected, and can also be set manually. 

## Known Issues

--

## Installation

1. Download the repo as a zip and extract it.
2. Copy `HitboxPlugin.dll` to `<steam_directory>/steamapps/common/rocketleague/Binaries/Win32/bakkesmod/plugins`
3. Copy `hitboxplugin.set` to `<steam_directory>/steamapps/common/rocketleague/Binaries/Win32/bakkesmod/plugins/settings`
4. In the game console run `plugin load hitboxplugin`

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
