//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSIndexPath.h"

@interface FLUIndexPath : NSIndexPath
{
    unsigned long long _flu_section;
    unsigned long long _flu_row;
}

+ (id)indexPathForRow:(long long)arg1 inSection:(long long)arg2;
@property(nonatomic) unsigned long long flu_row; // @synthesize flu_row=_flu_row;
@property(nonatomic) unsigned long long flu_section; // @synthesize flu_section=_flu_section;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end

