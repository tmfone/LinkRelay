//
//  ImageUtils.h
//  LinkRelay
//
//  Created by Thomas Fojan on 2026-05-21.
//  Copyright (c) 2026 tmf.one. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>

@interface ImageUtils : NSObject

+(ImageUtils*) sharedInstance;

+ (NSImage*) statusBarIconForAppId: (NSString*) applicationIdentifier;
+ (NSImage*) menuIconForAppId: (NSString*) applicationIdentifier;
+ (NSImage*) fullSizeIconForAppId: (NSString*) applicationIdentifier;
+ (NSImage*) fullSizeIconForAppId: (NSString*) applicationIdentifier withSize:(NSSize)size;
+ (NSImage*) tintInputImage:(NSImage*)inputImage toColor:(NSColor*)outputColor;

@end
