//
//  ViewController.h
//  自定义UIPickerView
//
//  Created by 陈家庆 on 15-2-7.
//  Copyright (c) 2015年 shikee_Chan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UIPickerViewDelegate,UIPickerViewDataSource>{
    
    NSArray *_nameArray;
}

@property (strong, nonatomic) UIPickerView *pickerView;

@end
