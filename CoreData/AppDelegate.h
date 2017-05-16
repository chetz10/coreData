//
//  AppDelegate.h
//  CoreData
//
//  Created by Chetan Chauhan on 16/05/17.
//  Copyright © 2017 Chetan Chauhan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

