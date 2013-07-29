//
//  TipViewController.h
//  tipster
//
//  Created by Abhinav Raj on 7/28/13.
//  Copyright (c) 2013 abhinavr. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TipViewController : UIViewController<UITextFieldDelegate>

@property (nonatomic, strong) IBOutlet UITextField *billTextField;
@property (nonatomic, strong) IBOutlet UILabel *tipLabel;
@property (nonatomic, strong) IBOutlet UILabel *totalLabel;
@property (nonatomic, strong) IBOutlet UISegmentedControl *tipControl;

@end
