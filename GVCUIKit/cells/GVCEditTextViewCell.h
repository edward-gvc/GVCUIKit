//
//  GVCEditTextViewCell.h
//
//  Created by David Aspinall on 12-06-19.
//  Copyright (c) 2012 Global Village Consulting. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GVCUITableViewCell.h"

@interface GVCEditTextViewCell : GVCUITableViewCell

@property (strong, nonatomic) IBOutlet UITextView *textView;

@end