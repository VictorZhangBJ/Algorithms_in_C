//
//  ViewController.m
//  LinkedList
//
//  Created by mini4s215 on 12/22/15.
//  Copyright © 2015 victor. All rights reserved.
//

#import "ViewController.h"
#import "LinkedList.h"
@implementation ViewController
{
    LinkList *head;
}

- (void)viewDidLoad {
    [super viewDidLoad];


    // Do any additional setup after loading the view.
}
- (IBAction)createLinkList:(id)sender {
    NSLog(@"创建链表");
    self.textView.textColor = [NSColor blackColor];
    [self.textView.textStorage appendAttributedString:[[NSAttributedString alloc] initWithString:@"创建链表\n"]];
    head =(LinkList *)malloc(sizeof(LinkList *));
    create_list_head(head, 5);
}

- (IBAction)showList:(id)sender {
    NSLog(@"遍历链表");
    int count = show_list(head);
    printf("链表元素个数 = %d\n",count);
}
- (IBAction)insertNode:(id)sender {
    int index = self.insertTF.intValue;
    NSLog(@"插入元素 位置 index  = %d",index);
    insert_node(index, head);
}

- (IBAction)deleteNode:(id)sender {
    int index = self.deleteTF.intValue;
    delete_node(index, head);
}

- (void)setRepresentedObject:(id)representedObject {
    [super setRepresentedObject:representedObject];

    // Update the view, if already loaded.
}

@end
