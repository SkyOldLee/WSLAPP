//
//  wslCustomTableViewCell.h
//  壁纸
//
//  Created by 王双龙 on 15/10/10.
//  Copyright (c) 2015年 WSL. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface wslCustomTableViewCell : UITableViewCell<UICollectionViewDataSource,UICollectionViewDelegate>

//@property(nonatomic,strong) NSMutableArray *
@property(nonatomic,strong) NSMutableArray * picturesArray;
@property(nonatomic,strong) NSMutableArray * picIdArr;


-(void)reloadData;

@end
