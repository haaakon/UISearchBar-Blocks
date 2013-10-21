//
//  UISearchBar+Blocks.h
//  UISearchBarBlocks
//
//  Created by Håkon Bogen on 20.10.13.
//  Copyright (c) 2013 Håkon Bogen. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UISearchBar (Blocks)

@property (copy, nonatomic) BOOL (^searchBarShouldBeginEditingBlock)(UISearchBar *searchbar);
@property (copy, nonatomic) void (^searchBarTextDidBeginEditingBlock)(UISearchBar *searchBar);
@property (copy, nonatomic) BOOL (^searchBarShouldEndEditingBlock)(UISearchBar *searchBar);
@property (copy, nonatomic) void (^searchBarTextDidEndEditingBlock)(UISearchBar *searchBar);
@property (copy, nonatomic) void (^searchBarTextDidChangeBlock)(UISearchBar *searchBar, NSString *searchText);
@property (copy, nonatomic) BOOL (^searchBarShouldChangeTextInRangeBlock)(UISearchBar *searchBar, NSRange range, NSString *replacementText);
@property (copy, nonatomic) void (^searchBarSearchButtonClickedBlock)(UISearchBar *searchBar);
@property (copy, nonatomic) void (^searchBarBookmarkButtonClickedBlock)(UISearchBar *searchBar);
@property (copy, nonatomic) void (^searchBarCancelButtonClickedBlock)(UISearchBar *searchBar);
@property (copy, nonatomic) void (^searchBarResultsListButtonClickedBlock)(UISearchBar *searchBar);
@property (copy, nonatomic) void (^searchBarSelectedScopeButtonIndexDidChangeBlock)(UISearchBar *searchBar, NSInteger selectedScope);

- (void)setSearchBarShouldBeginEditingBlock:(BOOL (^)(UISearchBar *searchBar))searchBarShouldBeginEditingBlock;
- (void)setSearchBarTextDidBeginEditingBlock:(void (^)(UISearchBar *searchBar))searchBarTextDidBeginEditingBlock;
- (void)setSearchBarShouldEndEditingBlock:(BOOL (^)(UISearchBar *searchBar))searchBarShouldEndEditingBlock;
- (void)setSearchBarTextDidEndEditingBlock:(void (^)(UISearchBar *searchBar))searchBarTextDidEndEditingBlock;
- (void)setSearchBarTextDidChangeBlock:(void (^)(UISearchBar *searchBar, NSString *text))searchBarTextDidChangeBlock;
- (void)setSearchBarShouldChangeTextInRangeBlock:(BOOL (^)(UISearchBar *searchBar, NSRange range, NSString *text))searchBarShouldChangeTextInRangeBlock;
- (void)setSearchBarSearchButtonClickedBlock:(void (^)(UISearchBar *searchBar))searchBarSearchButtonClickedBlock;
- (void)setSearchBarBookmarkButtonClickedBlock:(void (^)(UISearchBar *searchBar))searchBarBookmarkButtonClickedBlock;
- (void)setSearchBarCancelButtonClickedBlock:(void (^)(UISearchBar *searchBar))searchBarCancelButtonClickedBlock;
- (void)setSearchBarResultsListButtonClickedBlock:(void (^)(UISearchBar *searchBar))searchBarResultsListButtonClickedBlock;
- (void)setSearchBarSelectedScopeButtonIndexDidChangeBlock:(void (^)(UISearchBar *searchBar, NSInteger index))searchBarSelectedScopeButtonIndexDidChangeBlock;

@end
