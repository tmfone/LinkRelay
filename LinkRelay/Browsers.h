//
//  Browsers.h
//  LinkRelay
//
//  Created by Thomas Fojan on 2026-05-21.
//  Copyright (c) 2026 tmf.one. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BrowserItem.h"

@interface Browsers : NSObject

+ (Browsers*)sharedInstance;
+ (NSArray*) browsers;
+ (NSArray*) validBrowsers;

@property(readonly) NSArray* browsers;
@property(readonly) NSArray* validBrowsers;
@property NSString* defaultBrowserIdentifier;
@property(readonly) NSString* systemDefaultBrowser;

- (BOOL) isHidden:(NSString*) browserIdentifier;
- (void) hideABrowser:sender;
- (void) unhideABrowser:sender;

- (void) findBrowsersAsync;
- (void) findBrowsers;
- (void) setOurselvesAsDefaultBrowser;

@end
