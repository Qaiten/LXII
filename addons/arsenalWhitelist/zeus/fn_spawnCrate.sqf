// File: zeus/fn_spawnCrate.sqf
params ["_logic"];

// Create the crate
private _crate = createVehicle ["Box_NATO_Ammo_F", position _logic, [], 0, "CAN_COLLIDE"];

// Display a dialog for the Zeus player to choose a whitelist
private _whitelists = missionNamespace getVariable ["ArsenalWhitelists", []];
private _options = [];

{
    _options pushBack (_x select 0);
} forEach _whitelists;

private _selected = createDialog "RscDisplayDropdown";  // Simple dropdown menu

// Attach the selected whitelist to the crate
[] spawn {
    waitUntil {dialog};
    if (isNil "_selected") exitWith {};

    [_crate, _selected] call ArsenalWhitelist_fnc_attachWhitelist;
};
