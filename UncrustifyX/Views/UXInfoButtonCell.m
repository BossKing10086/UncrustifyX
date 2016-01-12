//
//  UXInfoButtonCell.m
//  UncrustifyX
//
//  Created by Ryan Maxwell on 6/01/13.
//  Copyright (c) 2013 Ryan Maxwell. All rights reserved.
//

#import "UXInfoButtonCell.h"

@implementation UXInfoButtonCell

- (id)initWithCoder:(NSCoder *)aDecoder {
    self = [super initWithCoder:aDecoder];
    
    if (self) {
        _standardStateImage = [NSImage imageNamed:@"Info"];
        _downStateImage = [NSImage imageNamed:@"Info-Down"];
    }
    
    return self;
}

- (void)drawWithFrame:(NSRect)cellFrame inView:(NSView *)controlView {
    [self.standardStateImage drawInRect:cellFrame
                               fromRect:NSZeroRect
                              operation:NSCompositeSourceOver
                               fraction:1.0
                         respectFlipped:YES
                                  hints:nil];
}

- (void)highlight:(BOOL)flag withFrame:(NSRect)cellFrame inView:(NSView *)controlView {
    if (flag){
        [self.downStateImage drawInRect:cellFrame
                               fromRect:NSZeroRect
                              operation:NSCompositeSourceOver
                               fraction:1.0
                         respectFlipped:YES
                                  hints:nil];
    } else {
        [self drawWithFrame:cellFrame
                     inView:controlView];
    }
}

@end
