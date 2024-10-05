// File: functions/fn_attachWhitelist.sqf
params ["_crate", "_whitelistName"];

// Get the whitelist from the missionNamespace
private _whitelists = missionNamespace getVariable ["ArsenalWhitelists", []];

// Find the matching whitelist
private _whitelist = [];
{
    if (_x select 0 == _whitelistName) then {
        _whitelist = _x select 1;
    };
} forEach _whitelists;

// Clear the crate’s inventory and apply the new whitelist
clearItemCargoGlobal _crate;
clearWeaponCargoGlobal _crate;
clearMagazineCargoGlobal _crate;
clearBackpackCargoGlobal _crate;

// Add the whitelisted items to the crate
{
    _crate addItemCargoGlobal [_x, 10];
} forEach _whitelist;
