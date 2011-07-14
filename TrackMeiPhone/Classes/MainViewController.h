//
//  MainViewController.h
//  TrackMeiPhone
//
//  Created by Tobias Carlander on 09/09/2010.
//  Copyright (c) 2010 WFP. All rights reserved.
//

#import "FlipsideViewController.h"

#import <CoreData/CoreData.h>

@interface MainViewController : UIViewController <FlipsideViewControllerDelegate> {

    NSManagedObjectContext *managedObjectContext;
}


- (IBAction)showInfo:(id)sender;

@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;

@end
