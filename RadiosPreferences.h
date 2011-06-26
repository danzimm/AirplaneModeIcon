/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <Foundation/NSObject.h>

@protocol RadiosPreferencesDelegate;

@interface RadiosPreferences : NSObject {
		//	SCPreferencesRef _prefs;
	int _applySkipCount;
	id<RadiosPreferencesDelegate> _delegate;
	BOOL _isCachedAirplaneModeValid;
	BOOL _cachedAirplaneMode;
}
@property(assign, nonatomic) id<RadiosPreferencesDelegate> delegate;
@property(assign, nonatomic) BOOL airplaneMode;
-(id)init;
-(void)dealloc;
-(void)refresh;
-(void)initializeSCPrefs:(id)prefs;
-(void)notifyTarget:(unsigned)target;
-(void)synchronize;
-(void*)getValueForKey:(id)key;
-(void)setValue:(void*)value forKey:(id)key;
	//-(void)setCallback:(/*function-pointer*/ void*)callback withContext:(XXStruct_K1psTC*)context;
@end
