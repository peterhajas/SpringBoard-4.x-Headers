/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBDeviceLockKeypad.h"

@class UIPushButton, SBEmergencyCallButton, UIImage;

@interface SBDeviceLockKeypadPhone : SBDeviceLockKeypad {
	SBEmergencyCallButton* _emergencyCallButton;
	UIPushButton* _poundButton;
	UIImage* _deleteIcon;
}
+(id)keypadImage;
+(id)pressedImage;
+(void)flushPressedImage;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(float)_yFudge;
-(BOOL)showsEmergencyCallButton;
-(void)setShowsEmergencyCallButton:(BOOL)button;
-(void)setDeleteEnabled:(BOOL)enabled;
-(BOOL)deleteKeyChar;
-(BOOL)cancelKeyChar;
-(BOOL)emergencyKeyChar;
-(void)_updateCancelAndDeleteButtons;
@end

