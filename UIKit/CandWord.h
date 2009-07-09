/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import "NSCopying.h"
#import <Foundation/NSObject.h>

@class CandWordString;

@interface CandWord : NSObject <NSCopying> {
	CandWordString* _word;
}
-(id)initWithWord:(id)word;
-(void)dealloc;
-(id)word;
-(const char*)wordUTF8String;
-(id)insertion;
-(unsigned)deleteCount;
-(unsigned)wordOriginFeedbackID;
-(id)copyWithZone:(NSZone*)zone;
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
@end
