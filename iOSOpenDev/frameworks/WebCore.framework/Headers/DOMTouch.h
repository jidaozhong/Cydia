/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <WebCore/DOMObject.h>

@protocol DOMEventTarget;

__attribute__((visibility("hidden")))
@interface DOMTouch : DOMObject {
}
@property(readonly, assign) int screenY;	// G=0x34d5e5; 
@property(readonly, assign) int screenX;	// G=0x34d5b9; 
@property(readonly, assign) int pageY;	// G=0x34d58d; 
@property(readonly, assign) int pageX;	// G=0x34d561; 
@property(readonly, assign) int clientY;	// G=0x34d535; 
@property(readonly, assign) int clientX;	// G=0x34d509; 
@property(readonly, assign) unsigned identifier;	// G=0x34d4dd; 
@property(readonly, retain) id<DOMEventTarget> target;	// G=0x34d68d; 
- (void)dealloc;	// 0x34d611
- (void)finalize;	// 0x34d749
// declared property getter: - (id)target;	// 0x34d68d
// declared property getter: - (unsigned)identifier;	// 0x34d4dd
// declared property getter: - (int)clientX;	// 0x34d509
// declared property getter: - (int)clientY;	// 0x34d535
// declared property getter: - (int)pageX;	// 0x34d561
// declared property getter: - (int)pageY;	// 0x34d58d
// declared property getter: - (int)screenX;	// 0x34d5b9
// declared property getter: - (int)screenY;	// 0x34d5e5
@end