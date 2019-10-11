//
//  NiceLoggerEx.h
//  NiceLoggerEx
//
//  Created by 전혜연 on 11/10/2019.
//  Copyright © 2019 전혜연. All rights reserved.
//


#import <Foundation/Foundation.h>


@interface NiceLoggerEx : NSObject

+ (instancetype) sharedInstance;
- (BOOL) isInitialized;

@end
