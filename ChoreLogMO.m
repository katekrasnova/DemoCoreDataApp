//
//  ChoreLogMO.m
//  CoreData
//
//  Created by Екатерина Краснова on 14.01.16.
//  Copyright © 2016 Kate Krasnova. All rights reserved.
//

#import "ChoreLogMO.h"
#import "ChoreMO.h"
#import "PersonMO.h"

@implementation ChoreLogMO

- (NSString *) description {
    return [NSString stringWithFormat:@"(%@) (%@) (%@)", self.chore_done.chore_name, self.person_who_did_it.person_name, self.when];
}

@end
