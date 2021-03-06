/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBDataPlanAccountAlertItem.h"

@class NSDate;

@interface SBDataPlanExpirationAlertItem : SBDataPlanAccountAlertItem {
	NSDate *_expirationDate;	// 20 = 0x14
}
@property(retain, nonatomic) NSDate *expirationDate;	// G=0x11d051; S=0x11d0e1; @synthesize=_expirationDate
- (id)initWithAccountURL:(id)accountURL expirationDate:(id)date;	// 0x11d061
- (void)dealloc;	// 0x11d095
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;	// 0x11d109
// declared property getter: - (id)expirationDate;	// 0x11d051
// declared property setter: - (void)setExpirationDate:(id)date;	// 0x11d0e1
@end

