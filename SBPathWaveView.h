/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBWaveView.h"


@interface SBPathWaveView : SBWaveView {
}
+(Class)layerClass;
-(id)_shapeLayer;
-(id)initWithFrame:(CGRect)frame;
-(BOOL)_shouldAnimatePropertyWithKey:(id)key;
-(CGPathRef)_copyCurrentPath;
-(void)_updateCurrentPath;
-(void)setColor:(id)color;
-(void)layoutSubviews;
@end
