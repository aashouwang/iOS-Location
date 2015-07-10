//
//  ViewController.h
//  IOS定位
//
//  Created by TangTieshan on 15/7/9.
//  Copyright (c) 2015年 TangTieshan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import <CoreLocation/CLLocationManagerDelegate.h>

@interface ViewController : UIViewController<CLLocationManagerDelegate>
{
    CLLocationManager * _locationManager;
    CLGeocoder * _geocoder;
}
@end

