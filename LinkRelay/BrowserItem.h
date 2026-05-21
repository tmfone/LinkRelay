//
//  BrowserItem.h
//  LinkRelay
//
//  Created by Thomas Fojan on 2026-05-21.
//  Copyright (c) 2026 tmf.one. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BrowserItem : NSObject

@property NSString *identifier;
@property NSString *name;
@property NSString *path;
@property BOOL hidden;
@property BOOL isDefault;

- (BrowserItem*) initWithApplicationId: (NSString*)theId name: (NSString*)theName path: (NSString*) thePath;

@end
