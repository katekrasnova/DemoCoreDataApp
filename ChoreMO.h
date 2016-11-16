//
//  ChoreMO.h
//  CoreData
//
//  Created by Екатерина Краснова on 14.01.16.
//  Copyright © 2016 Kate Krasnova. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class ChoreLogMO;

NS_ASSUME_NONNULL_BEGIN

@interface ChoreMO : NSManagedObject

- (NSString *)description;

// Insert code here to declare functionality of your managed object subclass

@end

NS_ASSUME_NONNULL_END

#import "ChoreMO+CoreDataProperties.h"
