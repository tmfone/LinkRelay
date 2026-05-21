//
//  BrowserItem.m
//  LinkRelay
//
//  Created by Thomas Fojan on 2026-05-21.
//  Copyright (c) 2026 tmf.one. All rights reserved.
//

#import "BrowserItem.h"

@implementation BrowserItem

- (BrowserItem*) initWithApplicationId: (NSString*)theId name: (NSString*)theName path: (NSString*) thePath
{
    self = [super init];
    if (self) {
        self.identifier = theId;
        self.name = theName;
        self.path = thePath;
    }
    return self;
}

-(NSString *)description
{
    return [NSString stringWithFormat:@"<BrowserItem id:%@ name:%@ hidden:%@>",
            self.identifier, self.name,
            self.hidden ? @"YES" : @"NO"];
}

@end
