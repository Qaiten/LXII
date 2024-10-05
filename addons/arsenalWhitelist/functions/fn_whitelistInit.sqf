// File: functions/fn_whitelistInit.sqf
private _whitelists = [
    ["rifles", ["arifle_MX_F", "arifle_Katiba_F"]],
    ["sniper", ["srifle_LRR_F", "srifle_DMR_03_tan_F"]],
    ["gear", ["V_PlateCarrier1_rgr", "H_HelmetSpecB"]]
];

// Export the whitelist as a global variable
missionNamespace setVariable ["ArsenalWhitelists", _whitelists];
