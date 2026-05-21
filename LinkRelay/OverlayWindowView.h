//
//  OverlayWindowView.h
//  LinkRelay
//
//  Created by Thomas Fojan on 2026-05-21.
//  Copyright (c) 2026 tmf.one. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface OverlayWindowView : NSBox

-(NSSize)addBrowsers:(NSArray*)browsers;

extern const NSUInteger ICON_SIZE;
extern const NSUInteger TEXT_HEIGHT;
extern const NSUInteger H_PADDING;
extern const NSUInteger BOX_PADDING;

@property(readonly, nonatomic) NSColor* fillColor;
@property(readonly, nonatomic) NSColor* strokeColor;

@end
