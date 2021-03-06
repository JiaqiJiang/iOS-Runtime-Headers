/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPPageMaster : TSPObject <TPMasterDrawableProvider, TSKDocumentObject, TSKModel, TSPCopying, TSWPHeaderFooterProvider> {
    TPDocumentRoot *_documentRoot;
    TSWPStorage *_headerFooters;
    NSMutableArray *_masterDrawables;
    TPSection *_section;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSArray *masterDrawables;
@property (nonatomic) TPSection *section;
@property (readonly) Class superclass;

- (void)addMasterDrawable:(id)arg1 atIndex:(unsigned int)arg2 insertContext:(id)arg3 suppressDOLC:(BOOL)arg4;
- (void)addMasterDrawables:(id)arg1 atIndex:(unsigned int)arg2 insertContext:(id)arg3 suppressDOLC:(BOOL)arg4;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (float)bodyWidth;
- (id)childEnumerator;
- (BOOL)containsModelObject:(id)arg1;
- (id)copyWithContext:(id)arg1;
- (unsigned int)countOfMasterDrawables;
- (void)dealloc;
- (id)description;
- (id)documentRoot;
- (float)footerHeight;
- (id)headerFooter:(int)arg1 fragmentAtIndex:(int)arg2;
- (id)headerFooterFragmentEnumerator;
- (int)headerFooterTypeForModel:(id)arg1;
- (int)headerFragmentIndexForModel:(id)arg1;
- (float)headerHeight;
- (void)i_addMasterDrawable:(id)arg1;
- (void)i_copyHeadersAndFootersFrom:(id)arg1 dolcContext:(id)arg2;
- (void)i_createHeadersFooters:(int)arg1 stylesheet:(id)arg2 paragraphStyle:(id)arg3 context:(id)arg4 mayAlreadyExist:(BOOL)arg5;
- (void)i_ensureHeaderFooterStoragesExistWithStylesheet:(id)arg1 paragraphStyle:(id)arg2 context:(id)arg3;
- (void)i_importHeaderFooter:(id)arg1 headerType:(int)arg2 dolcContext:(id)arg3 splitHeaders:(BOOL)arg4;
- (void)i_setDocumentRoot:(id)arg1;
- (void)i_setHeaderFooter:(int)arg1 storage:(id)arg2 fragmentIndex:(int)arg3;
- (void)i_splitHeaderFooter:(id)arg1 storages:(id*)arg2 dolcContext:(id)arg3 bodyWidth:(float)arg4;
- (unsigned int)indexOfMasterDrawable:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithSection:(id)arg1;
- (BOOL)isHeaderFooterEmpty:(int)arg1;
- (BOOL)isHeaderFooterEmpty:(int)arg1 fragmentAtIndex:(int)arg2;
- (id)masterDrawables;
- (id)masterDrawablesSortedByZOrder:(id)arg1;
- (float)pHeightOfHeaderFooter:(int)arg1;
- (void)p_filterParagraphStylesOnHeaderFooterStorage:(id)arg1 stylesheet:(id)arg2;
- (id)p_headerAndFooterStorages;
- (int)p_headerFragmentIndexForTabIndex:(unsigned int)arg1 paragraphStyle:(id)arg2 bodyWidth:(float)arg3;
- (BOOL)p_isInDocument;
- (void)p_makeHeadersFootersPerformSelector:(SEL)arg1 documentRoot:(id)arg2;
- (void)p_makeHeadersFootersPerformSelector:(SEL)arg1 documentRoot:(id)arg2 context:(id)arg3;
- (void)p_makeHeadersFootersPerformSelector:(SEL)arg1 withStylesheet:(id)arg2 withMapper:(id)arg3;
- (void)p_makeMasterDrawablesPerformSelector:(SEL)arg1 documentRoot:(id)arg2;
- (void)p_makeMasterDrawablesPerformSelector:(SEL)arg1 documentRoot:(id)arg2 context:(id)arg3;
- (void)p_makeMasterDrawablesPerformSelector:(SEL)arg1 withStylesheet:(id)arg2 withMapper:(id)arg3;
- (void)p_splitHeaderFooterByTabs:(id)arg1 storages:(id*)arg2 dolcContext:(id)arg3 bodyWidth:(float)arg4;
- (void)removeMasterDrawable:(id)arg1 suppressDOLC:(BOOL)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)section;
- (void)setParentStorage:(id)arg1;
- (void)setSection:(id)arg1;
- (id)topLevelParentInfoForInfo:(id)arg1;
- (BOOL)usesSingleHeaderFooter;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;

@end
