/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUnknownSuperclass.h"

@class AFUIUtteranceView, SBAssistantInitialQueryInstructionsController, NSString;

@interface SBAssistantInitialQueryController : SBUnknownSuperclass {
	NSString *_text;	// 12 = 0xc
	SBAssistantInitialQueryInstructionsController *_helpController;	// 16 = 0x10
	AFUIUtteranceView *_view;	// 20 = 0x14
}
@property(retain, nonatomic) NSString *text;	// G=0x144f99; S=0x1450c9; @synthesize=_text
@property(readonly, retain) AFUIUtteranceView *view;	// G=0x144fb9; converted property
- (void)dealloc;	// 0x145069
// converted property getter: - (id)view;	// 0x144fb9
// declared property getter: - (id)text;	// 0x144f99
// declared property setter: - (void)setText:(id)text;	// 0x1450c9
@end