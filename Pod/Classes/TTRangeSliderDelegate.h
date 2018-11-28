//
//  YLRangeSliderViewDelegate.h
//  FantasyRealFootball
//
//  Created by Tom Thorpe on 16/04/2014.
//  Copyright (c) 2014 Yahoo inc. All rights reserved.
//

#import <Foundation/Foundation.h>
@class TTRangeSlider;

@protocol TTRangeSliderDelegate <NSObject>

@optional

/**
 * Called when the RangeSlider values are changed
 */
-(void)rangeSlider:(TTRangeSlider *)sender didChangeSelectedMinimumValue:(float)selectedMinimum andMaximumValue:(float)selectedMaximum;

/**
 * Called when the user has finished interacting with the RangeSlider
 */
- (void)didEndTouchesInRangeSlider:(TTRangeSlider *)sender;

/**
 * Called when the user has started interacting with the RangeSlider
 */
- (void)didStartTouchesInRangeSlider:(TTRangeSlider *)sender;

/// Called when the RangeSeekSlider values are changed. A return `String?` Value is displayed on the `minLabel`.
///
/// - Parameters:
///   - slider: RangeSeekSlider
///   - minValue: minimum value
/// - Returns: String to be replaced
//func rangeSeekSlider(_ slider: RangeSeekSlider, stringForMinValue minValue: CGFloat) -> String?
- (NSString *)rangeSeekSlider:(TTRangeSlider *)sender stringForMinValue:(CGFloat)minValue;

/// Called when the RangeSeekSlider values are changed. A return `String?` Value is displayed on the `maxLabel`.
///
/// - Parameters:
///   - slider: RangeSeekSlider
///   - maxValue: maximum value
/// - Returns: String to be replaced
//func rangeSeekSlider(_ slider: RangeSeekSlider, stringForMaxValue: CGFloat) -> String?
- (NSString *)rangeSeekSlider:(TTRangeSlider *)sender stringForMaxValue:(CGFloat)maxValue;

@end
