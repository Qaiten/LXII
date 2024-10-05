// fn_spawnCrate.sqf
params ["_logic"];

// Check for whitelists
private _whitelists = missionNamespace getVariable ["ArsenalWhitelists", []];
if (count _whitelists == 0) exitWith {
    hint "No Whitelists available.";
};

// Create the crate
private _crate = createVehicle ["B_supplyCrate_F", position _logic, [], 0, "CAN_COLLIDE"];

// Populate options
private _options = ["Option1", "Option2", "Option3"]; // Example options array

// Ensure the display is correct
private _display = findDisplay 46; // Example display ID
private _ctrl = _display displayCtrl 1000; // Example control ID

// Add options to the combo box
// {
//     _ctrl ctrlComboAdd _x;
// } forEach _options;

// Wait for the dialog to close and then attach the selected whitelist
[] spawn {
    waitUntil { !dialog };
    private _selectedIndex = lbCurSel 1000; // Assuming 1000 is the ID of the dropdown
    private _selected = _options select _selectedIndex;

    if (_selectedIndex != -1) then {
        [_crate, _selected] call ArsenalWhitelist_fnc_attachWhitelist;  // Attach the selected whitelist to the crate
    };
};