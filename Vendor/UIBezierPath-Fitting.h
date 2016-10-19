/*
 Erica Sadun, http://ericasadun.com
 iPhone Developer's Cookbook, 6.x Edition
 BSD License, Use at your own risk
 */

#import <UIKit/UIKit.h>

@interface UIBezierPath (Fitting)
- (UIBezierPath *) fitInRect: (CGRect) destRect;
- (UIBezierPath *) fitElementsInRect: (CGRect) destRect;
@end
