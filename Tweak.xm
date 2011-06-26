#import "RadiosPreferences.h"


%subclass AIIcon : SBApplicationIcon

- (void)launch
{
	RadiosPreferences *prefs = [[RadiosPreferences alloc] init];

	[prefs setAirplaneMode:!prefs.airplaneMode];

	[prefs release];
}

%end