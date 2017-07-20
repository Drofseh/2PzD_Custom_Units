# Reporting an issue
## Before reporting
If you have found an issue please make sure that this mod really is the cause of the problem.

To do this try to reproduce the issue with using only IFA, FOW, LEN, and this mod on a newly created mission.

Indicate if the issue appears on stable or development version.

## Reporting the issue
Head over to the [GitHub issue tracker](https://github.com/Drofseh/2PzD_Custom_Units/issues) and press the [New issue](https://github.com/Drofseh/2PzD_Custom_Units/issues/new) button in the top right corner.

Add a descriptive title and complete the issue template.

Pictures or a video of the issue might be helpful in resolving it faster.

# Feature Requests
A single issue has been created for tracking [feature requests](https://github.com/Drofseh/2PzD_Custom_Units/issues/1).

Please post a comment there if you have a feature request.

It will be evaluated and responded to.

# Pull Requests
As an alternative to reporting issues or requesting feature, if you're willing to do the work, please feel free to create a [pull request](https://github.com/Drofseh/2PzD_Custom_Units/pulls) with your new feature in it.

## Pull Requests Guide

### Code Style Guide

The [ACE3 Code Style Guide](https://ace3mod.com/wiki/development/coding-guidelines.html#5-code-style) should be followed when making a contribution.

### Names:
English names for roles will be preferred, with the exception of German units.

All names will use modern English alphabet characters with no accents.

Characters like ü do not display properly in the asset browser.

### Inheritance:
Inheritance for units and vehicles shall be from an IFA3 class whenever possible.
If the faction cannot reasonably inherit from an IFA3 class, then classes from other mods may be used.

For example new US classes must inherit from an IFA3 class, while new Japanese classes may inherit from FOW as IFA3 has no Japanese content.

Once a 2PzD faction has established classes then future classes will inherit from them.

For example a Wehrmacht rifleman from 1939 will inherit from an IFA3 class
`class 2PzD_G_39_Rifle : LIB_GER_Soldier_base {};`

But a rifleman from later in the war will inherit from the new class
`class 2PzD_G_40_Jan_Rifle : 2PzD_G_39_Rifle {};`

### File Structure:
Each Faction will have its own Addon folder.
`Addons\2PzD_Custom_British_Units` or
`Addons\2PzD_Custom_German_Units` for example

Base classes shall go in config.cpp so all other files may use them as needed.

New classes shall go in their own .hpp file and that file will be included in the config.cpp file.

For example, German Wehrmacht units for 1939 January will go in their own .hpp which will be in the config.cpp like this:
```
class cfgVehicles {

    class LIB_GER_Soldier_base;

    #include "units\WHR_1939.hpp"

}; //End cfgVehicles
```

### Units:

Units shall adhere closely to the compositions and their loadouts as found in the 2PzD Mission template.

In general, create a new unit class for each unique slot in a composition, and then base the gear that class carries on the loadout that slot is assigned.

For template loadouts that have randomized weapons, which is nearly all of them, generally use the weapon and associated magazines that have the highest % chance to be chosen.

Additional classes may be created that are equiped with weapons that have a lower % chance to spawn, but they should be used infrequently when adding them to groups.

For example, a early 1943 USMC Squad should not have very many M1 Garands.