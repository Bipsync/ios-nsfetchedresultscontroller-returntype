//
//  DetailViewController.h
//  nsfetchedresultscontroller-returntype
//
//  Created by Craig Marvelley on 13/07/2015.
//  Copyright © 2015 Bipsync. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

