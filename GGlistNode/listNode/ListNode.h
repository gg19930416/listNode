//
//  ListNode.h
//  GGlistNode
//
//  Created by 郭刚 on 2019/2/22.
//  Copyright © 2019 郭刚. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ListNode : NSObject


/**
 添加节点

 @param p 节点指针
 @param value 节点值
 @return 头结点, 其中头结点 value 为 0
 */
+ (ListNode *)addNode:(ListNode *)p andValue:(id)value;

/**
 遍历单链表

 @param head 头结点
 @param block 处理block
 */
+ (void)traveraslList:(ListNode *)head resultBlock:(void(^)(NSInteger i))block;

/**
 单链表逆置

 @param head head 头结点
 */
+ (void)reeverseList:(ListNode *)head;

/**
 全链表反转
 */
+ (ListNode *)reverse:(ListNode *)node;
@end

NS_ASSUME_NONNULL_END
