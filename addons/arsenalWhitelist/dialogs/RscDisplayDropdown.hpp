// File: dialogs/RscDisplayDropdown.hpp
class RscDisplayDropdown {
    idd = -1;  // Dialog ID
    movingEnable = false;
    enableSimulation = true;

    class Controls {
        class Dropdown {
            idc = 1000;  // ID for dropdown
            type = 4; // Type: ComboBox
            style = 0; // Style: 0 = Drop Down
            x = 0.2; // X position
            y = 0.2; // Y position
            w = 0.4; // Width
            h = 0.1; // Height
            font = "TahomaB";
            sizeEx = 0.04;
            wholeHeight = 0.5; // Height of the dropdown menu
            colorText[] = {1, 1, 1, 1};
            colorBackground[] = {0, 0, 0, 0.5};
            colorSelect[] = {0, 0, 0, 1};
            colorSelectBackground[] = {1, 1, 1, 1};
            colorSelectBackground2[] = {1, 0, 0, 1};
            soundSelect[] = {"", 0.1, 1};
            autoScrollSpeed = -1;
            autoScrollDelay = 5;
            autoScrollRewind = 0;

            // Populate the options in the dropdown
            class Items {
                class Option1 { text = "Whitelist 1"; value = "whitelist1"; }; // Add your actual whitelist values here
                class Option2 { text = "Whitelist 2"; value = "whitelist2"; };
            };
        };
        class OKButton {
            idc = 1;
            text = "OK"; // Text on the button
            x = 0.5; // X position
            y = 0.5; // Y position
            action = "closeDialog 0"; // Close dialog
        };
    };
};