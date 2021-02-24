class CfgPatches {
    class tft_spotlight {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.6;
        requiredAddons[] = {};
        version = 2.0;
        versionStr = 2.0;
        versionAr[] = {2, 0};
        author = "Ampersand";
    };
};

class RscStandardDisplay;
class RscDisplayMain: RscStandardDisplay
{
	class Spotlight
	{
		//delete;
		class TFTServer
		{
			text = "TFT8 Private Server"; // Text displayed on the square button, converted to upper-case
			textIsQuote = 0; // 1 to add quotation marks around the text
			picture = "\tft_spotlight\logo_tft8_512.paa"; // Square picture, ideally 512x512
			//video = "\a3\Ui_f\Video\spotlight_1_Apex.ogv"; // Video played on mouse hover
			//action = "0 = [_this, '127.0.0.1', '2302', ''] execVM '\x\joinServer.sqf';";
			action = "0 = [_this, 'tft8.com', '2322', 'truly'] execVM '\tft_spotlight\joinServer.sqf';";
			actionText = "Join the TFT8 Private Server"; // Text displayed in top left corner of on-hover white frame
			condition = "true"; // Condition for showing the spotlight
		};
	};
};