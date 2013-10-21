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
#### searchBarCancelButtonClicked:
```objective-c
[aSearchBar setSearchBarCancelButtonClickedBlock:^(UISearchBar *searchBar) {
        // do your stuff here
    }];
```
### LICENSE

Copyright (C) 2013 Developed by Håkon Bogen

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE
