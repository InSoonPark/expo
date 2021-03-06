/**
 * Copyright (c) 2015-present, Horcrux.
 * All rights reserved.
 *
 * This source code is licensed under the MIT-style license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <Foundation/Foundation.h>

#import "ABI16_0_0RNSVGBrush.h"
#import "ABI16_0_0RNSVGCGFloatArray.h"
#import "ABI16_0_0RNSVGCGFCRule.h"
#import "ABI16_0_0RNSVGNode.h"

@interface ABI16_0_0RNSVGRenderable : ABI16_0_0RNSVGNode

@property (nonatomic, strong) ABI16_0_0RNSVGBrush *fill;
@property (nonatomic, assign) CGFloat fillOpacity;
@property (nonatomic, assign) ABI16_0_0RNSVGCGFCRule fillRule;
@property (nonatomic, strong) ABI16_0_0RNSVGBrush *stroke;
@property (nonatomic, assign) CGFloat strokeOpacity;
@property (nonatomic, assign) CGFloat strokeWidth;
@property (nonatomic, assign) CGLineCap strokeLinecap;
@property (nonatomic, assign) CGLineJoin strokeLinejoin;
@property (nonatomic, assign) CGFloat strokeMiterlimit;
@property (nonatomic, assign) ABI16_0_0RNSVGCGFloatArray strokeDasharray;
@property (nonatomic, assign) CGFloat strokeDashoffset;
@property (nonatomic, assign) CGPathRef hitArea;
@property (nonatomic, copy) NSArray<NSString *> *propList;
@property (nonatomic, strong) NSMutableArray<NSString *> *ownedPropList;

- (void)setBoundingBox:(CGRect)boundingBox;
- (CGFloat)getWidthRelatedValue:(NSString *)string;
- (CGFloat)getHeightRelatedValue:(NSString *)string;
- (CGFloat)getContextWidth;
- (CGFloat)getContextHeight;
- (CGFloat)getContextX;
- (CGFloat)getContextY;


@end
