//
//  NUISegmentedControlRenderer.h
//  NUIDemo
//
//  Created by Tom Benner on 11/24/12.
//  Copyright (c) 2012 Tom Benner. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NUISettings.h"
#import "NUIUtilities.h"

@interface NUISegmentedControlRenderer : NSObject

+ (void)render:(UISegmentedControl*)segmented_control withClass:(NSString*)class_name;

@end
