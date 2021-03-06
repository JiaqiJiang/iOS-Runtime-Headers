/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKCOIdPlacementRemoveOperation : TSKCOIdPlacementBaseOperation <TSKCOObjectCountConstraint> {
    int mObjectCount;
    int mObjectCounterSpace;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isNoop;
@property (nonatomic, readonly) int objectCount;
@property (nonatomic, readonly) int objectCounterSpace;
@property (readonly) Class superclass;

- (id)description;
- (id)initWithIdAddress:(id)arg1 fromIndex:(int)arg2;
- (id)initWithIdAddress:(id)arg1 fromIndex:(int)arg2 objectCount:(int)arg3 objectCounterSpace:(int)arg4;
- (id)initWithIdAddress:(id)arg1 fromIndex:(int)arg2 toIndex:(int)arg3 dominating:(BOOL)arg4 noop:(BOOL)arg5;
- (id)initWithIdAddress:(id)arg1 fromIndex:(int)arg2 toIndex:(int)arg3 dominating:(BOOL)arg4 noop:(BOOL)arg5 objectCount:(int)arg6 objectCounterSpace:(int)arg7;
- (id)initWithUnarchiver:(id)arg1 message:(const struct Operation { int (**x1)(); struct ExtensionSet { struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true> > { unsigned long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_2_1_1; } x2; struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_3_1_1; } x3; unsigned int x4[1]; int x5; bool x6; }*)arg2;
- (int)objectCount;
- (int)objectCounterSpace;
- (id)operationWithNewFromIndex:(int)arg1 toIndex:(int)arg2 dominating:(BOOL)arg3;
- (id)operationWithNewNoop:(BOOL)arg1;
- (id)operationWithNewObjectCount:(int)arg1;
- (id)p_transformAdd:(id)arg1 isHigherPriority:(BOOL)arg2;
- (id)p_transformObjectCount:(id)arg1;
- (id)p_transformPlacement:(id)arg1 isHigherPriority:(BOOL)arg2;
- (id)p_transformRearrange:(id)arg1 isHigherPriority:(BOOL)arg2;
- (id)p_transformRearrangeOrPlacementOperation:(id)arg1 isHigherPriority:(BOOL)arg2;
- (id)p_transformRemove:(id)arg1 isHigherPriority:(BOOL)arg2;
- (void)saveToArchiver:(id)arg1 message:(struct Operation { int (**x1)(); struct ExtensionSet { struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true> > { unsigned long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_2_1_1; } x2; struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_3_1_1; } x3; unsigned int x4[1]; int x5; bool x6; }*)arg2;
- (id)transformReplaceRangeOperation:(id)arg1 isHigherPriority:(BOOL)arg2;
- (id)transformUpdateIdOperation:(id)arg1 isHigherPriority:(BOOL)arg2;
- (id)transformUpdateRangeOperation:(id)arg1 isHigherPriority:(BOOL)arg2;

@end
