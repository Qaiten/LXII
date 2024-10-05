// File: functions/fn_applyWhitelist.sqf
// Description: Applies the selected whitelist to the supply box.

params ["_box", "_whitelist"];

private _whitelists = missionNamespace getVariable ["ArsenalWhitelists", []];
private _whitelistData = _whitelists select { _x select 0 == _whitelist } select 0;

if (isNil "_whitelistData") exitWith {
    hint "Invalid whitelist selected.";
};

// Apply the whitelist to the box (custom logic here)
hint format ["Applying %1 to the supply box.", _whitelistData select 1];