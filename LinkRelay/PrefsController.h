//
//  PrefsController.h
//  LinkRelay
//
//  Created by Thomas Fojan on 2026-05-21.
//  Copyright (c) 2026 tmf.one. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <MASShortcut/Shortcut.h>


@interface PrefsController : NSWindowController

-(void) showPreferences;

@property (assign) IBOutlet NSButton *startAtLogin;
@property (assign) IBOutlet NSButton *autoHideIcon;
@property (assign) IBOutlet NSButton *showNotifications;
@property (assign) IBOutlet MASShortcutView *hotkeyRecorder;


- (IBAction)toggleLoginItem: (id)sender;
- (IBAction)toggleHideItem: (id)sender;
- (IBAction)toggleShowNotifications: (id)sender;

@end
