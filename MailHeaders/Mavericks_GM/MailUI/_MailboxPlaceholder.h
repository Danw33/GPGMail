/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "MFUIMailbox.h"
#import "NSCopying.h"

@class NSString;

@interface _MailboxPlaceholder : NSObject <MFUIMailbox, NSCopying>
{
    BOOL _isContainer;
    int _type;
    NSString *_persistentIdentifier;
    NSString *_displayName;
    NSString *_accountURLString;
}

@property(nonatomic) BOOL isContainer; // @synthesize isContainer=_isContainer;
@property int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *accountURLString; // @synthesize accountURLString=_accountURLString;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *persistentIdentifier; // @synthesize persistentIdentifier=_persistentIdentifier;
- (id)extendedDisplayName;
- (unsigned long long)displayCount;
- (id)description;
- (void)dealloc;
- (BOOL)isPlaceholder;
- (BOOL)isDescendantOfMailboxWithType:(int)arg1;
- (id)children;
- (unsigned long long)numberOfChildren;
- (BOOL)hasChildren;
- (BOOL)isStore;
- (BOOL)isSmartMailbox;
- (id)account;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPersistentIdentifier:(id)arg1 name:(id)arg2 accountURLString:(id)arg3 type:(int)arg4 isContainer:(BOOL)arg5;

@end

