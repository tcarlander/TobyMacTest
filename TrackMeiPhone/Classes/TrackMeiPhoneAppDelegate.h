//
//  TrackMeiPhoneAppDelegate.h
//  TrackMeiPhone
//
//  Created by Tobias Carlander on 09/09/2010.
//  Copyright (c) 2010 WFP. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MainViewController;

@interface TrackMeiPhoneAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    NSManagedObjectContext *managedObjectContext;
    NSManagedObjectModel *managedObjectModel;
    NSPersistentStoreCoordinator *persistentStoreCoordinator;
    MainViewController *mainViewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain, readonly) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, retain, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (NSString *)applicationDocumentsDirectory;

@property (nonatomic, retain) IBOutlet MainViewController *mainViewController;

@end
