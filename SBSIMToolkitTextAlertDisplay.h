/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBSlidingAlertDisplay.h"

@class SBTextDisplayView, UIScrollView;

@interface SBSIMToolkitTextAlertDisplay : SBSlidingAlertDisplay {
	SBTextDisplayView* _contentView;
	UIScrollView* _scroller;
}
+(id)newTopBarForInstance:(id)instance;
+(id)newBottomBarForInstance:(id)instance;
-(void)dealloc;
-(void)leftNavigationButtonPressed;
-(void)rightNavigationButtonPressed;
-(void)adjustScrollerFrame;
-(id)initWithFrame:(CGRect)frame;
-(BOOL)showsDesktopImage;
-(void)setMiddleContentAlpha:(float)alpha;
-(void)displayDidTimeout;
-(id)alertText;
-(void)alertDisplayWillBecomeVisible;
-(void)accept:(id)accept;
-(void)dismiss:(id)dismiss;
-(void)dismiss;
@end

