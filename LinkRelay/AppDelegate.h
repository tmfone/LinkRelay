//
//  AppDelegate.h
//  LinkRelay
//
//  Created by Thomas Fojan on 2026-05-21.
//  Copyright (c) 2026 tmf.one. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "PrefsController.h"


@interface AppDelegate : NSObject <NSApplicationDelegate, NSUserNotificationCenterDelegate>

- (void) hotkeyTriggered;
- (void) selectABrowser:sender;
- (void) updateStatusBarIcon;

@property PrefsController* prefsController;

@end
