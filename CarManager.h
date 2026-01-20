#pragma once
// Ensure the include path for BakkesMod is set up correctly in your project settings.
// If the header is missing, install BakkesMod SDK and set the include directory.
// Example: In Visual Studio, go to Project Properties > C/C++ > General > Additional Include Directories
// Add the path to your BakkesMod SDK, e.g., C:\BakkesModSDK\include

#include "bakkesmod/plugin/bakkesmodplugin.h"
#include "Hitbox.h"
#include <vector>
#include <string>

class CarManager
{
public:
	CarManager();
	static const std::string getHelpText();
	static Hitbox getHitbox(CARBODY car_type, CarWrapper& car);
	~CarManager();
};

