/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBBaseSoftwareUpdateAlertItem.h"

@class NSError;

@interface SBSoftwareUpdateUnableToInstallAlertItem : SBBaseSoftwareUpdateAlertItem {
	NSError *_error;	// 20 = 0x14
}
@property(retain, nonatomic) NSError *error;	// G=0x16bdf9; S=0x16c26d; @synthesize=_error
- (void)dealloc;	// 0x16c221
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0x16be09
- (void)buildUnavailableSheet;	// 0x16bf15
- (void)buildDefaultSheetWithBody:(id)body isLocked:(BOOL)locked;	// 0x16c049
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;	// 0x16c295
- (BOOL)reappearsAfterLock;	// 0x16bde5
- (BOOL)undimsScreen;	// 0x16bde9
- (BOOL)shouldShowInLockScreen;	// 0x16bded
- (BOOL)allowMenuButtonDismissal;	// 0x16bdf1
- (BOOL)dismissOnLock;	// 0x16bdf5
// declared property getter: - (id)error;	// 0x16bdf9
// declared property setter: - (void)setError:(id)error;	// 0x16c26d
@end

