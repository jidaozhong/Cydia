/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <PhotoLibrary/XXUnknownSuperclass.h>

@class NSMutableSet, NSArray, NSMutableArray;

@interface PLAddAnnotationContext : XXUnknownSuperclass {
	NSMutableArray *_annotationsToRemoveWhenAddAnimationStarts;	// 4 = 0x4
	NSMutableArray *_annotationsToRemoveWhenAddAnimationEnds;	// 8 = 0x8
	NSMutableArray *_animationOnlyAnnotations;	// 12 = 0xc
	NSMutableSet *_contextSet;	// 16 = 0x10
}
@property(copy, nonatomic) NSArray *animationOnlyAnnotations;	// G=0x6999; S=0x5719; @synthesize=_animationOnlyAnnotations
@property(copy, nonatomic) NSArray *annotationsToRemoveWhenAddAnimationEnds;	// G=0x6989; S=0x56f5; @synthesize=_annotationsToRemoveWhenAddAnimationEnds
@property(copy, nonatomic) NSArray *annotationsToRemoveWhenAddAnimationStarts;	// G=0x6945; S=0x56d1; @synthesize=_annotationsToRemoveWhenAddAnimationStarts
+ (id)contextWithPlaces:(id)places;	// 0x55e1
// declared property setter: - (void)setAnimationOnlyAnnotations:(id)annotations;	// 0x5719
// declared property getter: - (id)animationOnlyAnnotations;	// 0x6999
// declared property setter: - (void)setAnnotationsToRemoveWhenAddAnimationEnds:(id)removeWhenAddAnimationEnds;	// 0x56f5
// declared property getter: - (id)annotationsToRemoveWhenAddAnimationEnds;	// 0x6989
// declared property setter: - (void)setAnnotationsToRemoveWhenAddAnimationStarts:(id)removeWhenAddAnimationStarts;	// 0x56d1
// declared property getter: - (id)annotationsToRemoveWhenAddAnimationStarts;	// 0x6945
- (void)appendUniqueContext:(id)context;	// 0x6839
- (void)_appendArray:(id)array toVar:(id *)var;	// 0x6955
- (id)description;	// 0xa62c9
- (void)dealloc;	// 0x6f79
- (id)initWithPlaces:(id)places;	// 0x5629
@end