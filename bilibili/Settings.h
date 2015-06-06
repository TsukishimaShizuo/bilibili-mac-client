//
//  Settings.h
//  bilibili
//
//  Created by TYPCN on 2015/4/6.
//  Copyright (c) 2015 TYPCN. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface Settings : NSViewController

@property (weak) IBOutlet NSButton *autoPlay;
@property (weak) IBOutlet NSComboBox *qualityBox;
@property (weak) IBOutlet NSButton *RealTimeComment;
@property (weak) IBOutlet NSSlider *transparency;
@property (weak) IBOutlet NSComboBox *FakeIP;
@property (weak) IBOutlet NSTextField *fontsize;
@property (weak) IBOutlet NSButton *disablebottomComment;
@property (weak) IBOutlet NSButton *playMP4;
@property (weak) IBOutlet NSButton *DownloadMP4;

@end
