/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <Foundation/NSObject.h>

@class NSTimer;

@interface SBWiFiManager : NSObject {
	WiFiManagerClient* _manager;
	WiFiDeviceClient* _device;
	WiFiNetwork* _currentNetwork;
	BOOL _currentNetworkHasBeenSet;
	BOOL _powered;
	BOOL _poweredHasBeenSet;
	int _rssiThreshold;
	BOOL _joining;
	int _signalStrengthBars;
	int _signalStrengthRSSI;
	BOOL _signalStrengthHasBeenSet;
	NSTimer* _signalStrengthTimer;
	int _shouldPollSignalStrength;
	BOOL _canPollSignalStrength;
	id _delegate;
	unsigned _notificationID;
	double _lastSignalStrengthUpdateTime;
}
+(id)sharedInstance;
+(BOOL)hasWiFi;
-(void)dealloc;
-(WiFiManagerClient*)_manager;
-(void)setDevice:(WiFiDeviceClient*)device;
-(id)init;
-(void)setDelegate:(id)delegate;
-(void)scan;
-(BOOL)joining;
-(void)dismissAlerts;
-(void)_powerStateDidChange;
-(void)_linkDidChange;
-(void)_updateCurrentNetwork;
-(BOOL)isAssociated;
-(BOOL)_cachedIsAssociated;
-(id)currentNetworkName;
-(BOOL)powered;
-(BOOL)wiFiEnabled;
-(void)setWiFiEnabled:(BOOL)enabled;
-(int)signalStrengthBars;
-(int)signalStrengthRSSI;
-(void)updateSignalStrength;
-(void)_updateSignalStrengthTimer;
-(void)beginPollingForSignalStrength;
-(void)endPollingForSignalStrength;
-(void)cancelTrust:(BOOL)trust;
-(void)acceptTrust:(id)trust;
-(void)cancelPicker:(BOOL)picker;
-(void)userChoseNetwork:(id)network;
-(id)knownNetworks;
-(void)resetSettings;
-(void)_scanComplete:(CFArrayRef)complete;
-(void)_joinComplete:(int)complete network:(WiFiNetwork*)network;
-(void)joinNetwork:(id)network password:(id)password;
-(void)_askToJoinWithID:(unsigned)anId;
-(void)_trustCallbackWithID:(unsigned)anId type:(int)type network:(WiFiNetwork*)network data:(id)data;
@end
