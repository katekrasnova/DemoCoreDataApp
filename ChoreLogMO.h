//
//  ChoreLogMO.h
//  CoreData
//
//  Created by Екатерина Краснова on 14.01.16.
//  Copyright © 2016 Kate Krasnova. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class ChoreMO, PersonMO;

NS_ASSUME_NONNULL_BEGIN

@interface ChoreLogMO : NSManagedObject

- (NSString *) description;

@end

NS_ASSUME_NONNULL_END

#import "ChoreLogMO+CoreDataProperties.h"
