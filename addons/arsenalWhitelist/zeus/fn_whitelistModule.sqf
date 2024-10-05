// File: functions/fn_whitelistModule.sqf
// Description: Handles the Zeus module for placing a supply box and selecting a whitelist.

params ["_logic", "_units"];

private _whitelists = missionNamespace getVariable ["ArsenalWhitelists", []];
private _zeus = _units select 0;

if (count _whitelists == 0) exitWith {
    [_zeus, "No whitelists available."] remoteExec ["hint", _zeus];
};

private _dialog = createDialog "RscDisplayWhitelistSelection";

waitUntil { !dialog };

private _selectedWhitelist = missionNamespace getVariable ["SelectedWhitelist", ""];

if (_selectedWhitelist == "") exitWith {
    [_zeus, "No whitelist selected."] remoteExec ["hint", _zeus];
};

// Create the supply box
private _box = createVehicle ["Box_NATO_Ammo_F", position _logic, [], 0, "NONE"];
[_box, _selectedWhitelist] remoteExec ["applyWhitelist", 0, true];