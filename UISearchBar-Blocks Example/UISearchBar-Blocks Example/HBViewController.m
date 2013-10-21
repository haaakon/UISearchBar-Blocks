//
//  HBViewController.m
//  UISearchBar-Blocks Example
//
//  Created by Håkon Bogen on 21.10.13.
//  Copyright (c) 2013 Håkon Bogen. All rights reserved.
//

#import "HBViewController.h"
#import "UISearchBar+Blocks.h"

@interface HBViewController ()

@end

@implementation HBViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    [self.searchBar setSearchBarShouldBeginEditingBlock:^BOOL(UISearchBar *searchBar) {
        // do your stuff here
        return YES;
    }];
    
    [self.searchBar setSearchBarSelectedScopeButtonIndexDidChangeBlock:^(UISearchBar *searchBar, NSInteger index) {
        // do your stuff here
    }];
    
    [self.searchBar setSearchBarCancelButtonClickedBlock:^(UISearchBar *searchBar) {
        // do your stuff here
    }];
}


@end
