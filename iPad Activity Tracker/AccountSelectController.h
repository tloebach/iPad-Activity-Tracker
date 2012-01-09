//
//  AccountSelectController.h
//  Activity Tracker
//
//  Created by David Van Puyvelde on 28/06/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "zkSObject.h"

@interface AccountSelectController : UITableViewController {
    NSMutableArray *accounts;
    UISearchBar *searchBar;
    ZKSObject *selectedaccount;
}

@property (nonatomic, retain) IBOutlet UISearchBar *searchBar;
@property (nonatomic, retain) NSMutableArray *accounts;
@property (nonatomic, retain) ZKSObject *selectedaccount;

@end
