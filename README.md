UISearchbar with blocks
=======================
Adds blocks to all UISearchbar delegate methods with a simple and easy to use category, no subclassing. Also allows the use of delegate methods if no block is set.



USAGE
=====

#### searchBarShouldBeginEditing:
```objective-c
#import <UISearchBar+Blocks.h>
UISearchBar aSearchBar;
[aSearchBar setSearchBarShouldBeginEditingBlock:^BOOL(UISearchBar *searchBar) {
    // do your stuff here
    return YES;
}];
    
```

####  searchBar:selectedScopeButtonIndexDidChange:
```objective-c
[aSearchBar setSearchBarShouldBeginEditingBlock:^BOOL(UISearchBar *searchBar) {
    // do your stuff here
    return YES;
}];
    
```

