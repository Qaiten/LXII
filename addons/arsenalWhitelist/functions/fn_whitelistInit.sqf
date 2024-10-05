// File: fn_whitelistInit.sqf
// Initialize whitelists

hint "fn_whitelistInit is being executed.";

private _whitelists = [
    ["whitelist1", "Whitelist 1 Description"],
    ["whitelist2", "Whitelist 2 Description"]
];
missionNamespace setVariable ["ArsenalWhitelists", _whitelists];