//
//  AppDelegate.h
//  CoreData
//
//  Created by Екатерина Краснова on 11.01.16.
//  Copyright © 2016 Kate Krasnova. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import "ChoreMO.h"
#import "ChoreLogMO.h"
#import "PersonMO.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

-(ChoreMO *)createChoreMO;
-(PersonMO *)createPersonMO;
-(ChoreLogMO *)createChoreLogMO;

@end

