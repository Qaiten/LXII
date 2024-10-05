class RscDisplayWhitelistSelection {
    idd = -1;
    movingEnable = false;
    enableSimulation = true;

    class controlsBackground {
        class MainBackground: IGUIBack {
            idc = 2200;
            x = 0.3 * safezoneW + safezoneX;
            y = 0.3 * safezoneH + safezoneY;
            w = 0.4 * safezoneW;
            h = 0.4 * safezoneH;
        };
    };

    class controls {
        class Title: RscText {
            idc = 1000;
            text = "Select a Whitelist";
            x = 0.3 * safezoneW + safezoneX;
            y = 0.3 * safezoneH + safezoneY;
            w = 0.4 * safezoneW;
            h = 0.05 * safezoneH;
        };

        class WhitelistList: RscListbox {
            idc = 1500;
            x = 0.3 * safezoneW + safezoneX;
            y = 0.35 * safezoneH + safezoneY;
            w = 0.4 * safezoneW;
            h = 0.25 * safezoneH;
        };

        class ConfirmButton: RscButton {
            idc = 1600;
            text = "Confirm";
            x = 0.3 * safezoneW + safezoneX;
            y = 0.6 * safezoneH + safezoneY;
            w = 0.4 * safezoneW;
            h = 0.05 * safezoneH;
            action = "missionNamespace setVariable ['SelectedWhitelist', lbText [1500, lbCurSel 1500]]; closeDialog 0;";
        };
    };
};