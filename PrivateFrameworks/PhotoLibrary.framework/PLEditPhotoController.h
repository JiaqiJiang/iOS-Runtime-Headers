/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CAMEffectSelectionViewController, CIContext, CIFilter, EAGLContext, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSTimer, NSUndoManager, PLEditOverlayTextView, PLImageAdjustmentView, PLManagedAsset, PLProgressHUD, UIActionSheet, UIAlertView, UIImage, UINavigationBar, UIPopoverController, UIScrollView, UIToolbar, UIView;

@interface PLEditPhotoController : UIViewController <PLImageAdjustmentViewDelegate, UIScrollViewDelegate, UIActionSheetDelegate, UIAlertViewDelegate, UIPopoverControllerDelegate, CAMEffectSelectionViewControllerDelegate> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    unsigned int _didInitializeNavigationItem : 1;
    unsigned int _toolbarWasHidden : 1;
    unsigned int _isUserAction : 1;
    unsigned int _isCroppingImage : 1;
    unsigned int _didTapForRedEyeCorrection : 1;
    unsigned int _didEverTapForRedEyeCorrection : 1;
    unsigned int _isCanceling : 1;
    unsigned int _isOrderedOut : 1;
    unsigned int _autoAdjustmentEnabled : 1;
    unsigned int _preloadingEnhancementFilters : 1;
    unsigned int _applyingAutoEnhance : 1;
    unsigned int _modal : 1;
    unsigned int _isUsingProxyImage : 1;
    unsigned int _shouldPublishToPhotoStreams : 1;
    unsigned int _needsFilteredFullSizeImage : 1;
    unsigned int _preloadedEffectFilters : 1;
    unsigned int _stopPreloadEffectFilters : 1;
    long long __viewAnimationEnabledCount;
    id _actionCompletionBlock;
    UIActionSheet *_actionSheet;
    UIImage *_adjustedImage;
    UIAlertView *_alertView;
    NSArray *_autoAdjustmentFilters;
    NSArray *_autoRedEyeCorrections;
    CIFilter *_autoRedEyeFilter;
    NSObject<OS_dispatch_queue> *_cachedImageQueue;
    NSDictionary *_cachedMetadata;
    CIContext *_ciContextFullSize;
    CIContext *_ciContextMainThread;
    CIContext *_ciContextThumbnails;
    int _currentMode;
    id _didEndZoomingBlock;
    id _editCompletionBlock;
    PLImageAdjustmentView *_editView;
    PLManagedAsset *_editedPhoto;
    NSArray *_effectFilters;
    NSObject<OS_dispatch_queue> *_effectQueueFullSize;
    NSObject<OS_dispatch_queue> *_effectQueueThumbnails;
    CAMEffectSelectionViewController *_effectSelectionViewController;
    } _enhanceCalcRect;
    EAGLContext *_glesContextFullSize;
    EAGLContext *_glesContextThumbnails;
    NSDictionary *_initialAdjustmentState;
    int _initialOrientation;
    UIImage *_largeThumbnailImage;
    NSTimer *_messageTimer;
    PLEditOverlayTextView *_messageView;
    NSMutableArray *_navBarItems;
    UINavigationBar *_navigationBar;
    unsigned long long _nextPreloadEffectFilterIndex;
    } _normalizedCropRect;
    NSArray *_originalItems;
    PLManagedAsset *_pendingPhoto;
    UIPopoverController *_popover;
    NSDictionary *_previousAdjustmentState;
    NSUndoManager *_previousUndoManager;
    unsigned int _redEyeCycleCount;
    CIFilter *_redEyeFilter;
    double _rotationAngle;
    PLProgressHUD *_savingHUD;
    UIImage *_scaledCachedImage;
    UIScrollView *_scrollView;
    UIImage *_smallThumbnailImage;
    double _straightenAngle;
    NSMutableDictionary *_thumbnailCache;
    NSDictionary *_thumbnailCacheAdjustmentState;
    UIToolbar *_toolbar;
    NSUndoManager *_undoManager;
    UIView *_zoomView;
    bool__toolbarHidden;
    bool_savesAdjustmentsToCameraRoll;
    bool_supportsEffects;
}

@property(setter=_setToolbarHidden:) bool _toolbarHidden;
@property(setter=_setViewAnimationEnabledCount:) long long _viewAnimationEnabledCount;
@property(copy) id actionCompletionBlock;
@property bool autoAdjustmentEnabled;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain) PLManagedAsset * editedPhoto;
@property(readonly) unsigned long long hash;
@property(retain) UINavigationBar * navigationBar;
@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } normalizedCropRect;
@property(readonly) PLManagedAsset * pendingPhoto;
@property double rotationAngle;
@property(readonly) UIScrollView * scrollView;
@property(readonly) double straightenAngle;
@property(readonly) Class superclass;
@property(retain) UIToolbar * toolbar;

+ (void)initialize;

- (void)_addRedEyeCorrections:(id)arg1 fromFilter:(id)arg2 isUserAction:(bool)arg3;
- (bool)_adjustmentState:(id)arg1 isEqualTo:(id)arg2;
- (id)_adjustmentState;
- (void)_autoAdjustImage;
- (id)_autoAdjustmentFilters;
- (id)_buttonWithTag:(long long)arg1;
- (id)_calculateAutoFiltersWithFeatures:(int)arg1 includeGeometry:(bool)arg2;
- (void)_cleanupFilters;
- (void)_computeFullSizeFilteredImage;
- (void)_computeFullSizeFilteredImageWithAdjustmentState:(id)arg1;
- (id)_constrainActionSheet;
- (id)_cropAndStraightenFiltersForImageSize:(struct CGSize { double x1; double x2; })arg1 forceSquareCrop:(bool)arg2 forceUseGeometry:(bool)arg3;
- (id)_cropAndStraightenToolbarItems;
- (id)_croppedStraightenedImage;
- (id)_currentNonGeometryFiltersWithEffectFilters:(id)arg1;
- (bool)_currentStateIsEqualToAdjustmentState:(id)arg1;
- (id)_currentToolbarItems;
- (void)_dismissEffectSelection;
- (bool)_dismissPopoverViews;
- (void)_dismissProgressAlertIfNeeded;
- (void)_dismissSavingHUD;
- (void)_displayAllRedEyeCorrections;
- (void)_displayAutoAdjustmentMessage;
- (void)_displayRedEyeCorrections:(id)arg1;
- (struct CGSize { double x1; double x2; })_editedImageFullSize;
- (void)_fetchSmallThumbnailForEffectFilter:(id)arg1 completionBlock:(id)arg2;
- (bool)_isZoomedToScale:(double)arg1;
- (id)_largeThumbnailImage;
- (void)_layoutToolbar;
- (void)_loadFiltersFromDatabase;
- (id)_masterImagePath;
- (id)_newButtonItemWithIcon:(id)arg1 title:(id)arg2 target:(id)arg3 action:(SEL)arg4 tag:(long long)arg5;
- (id)_newCIImageFromUIImage:(id)arg1;
- (id)_newImageFromImage:(id)arg1 filters:(id)arg2 orientation:(int)arg3 ciContext:(id)arg4;
- (id)_originalState;
- (void)_popModalState;
- (void)_preloadEffectFilters;
- (void)_preloadEnhancementFilters;
- (void)_preloadNextEffectFilter;
- (void)_presentEffectSelection;
- (void)_presentSavingHUD;
- (void)_pushModalState;
- (void)_pushNewUndoManager;
- (id)_redEyeLabel;
- (void)_removeRedEyeCorrections:(id)arg1;
- (id)_rightButtonForMode:(int)arg1 enableDone:(bool)arg2 enableSave:(bool)arg3;
- (void)_rotatePhotoByAngle:(double)arg1;
- (void)_saveAdjustmentsToCopy;
- (void)_saveAdjustmentsToOriginal;
- (void)_saveFiltersToAsset:(id)arg1;
- (void)_saveXMPPropertiesToPhoto:(id)arg1;
- (id)_scaledCachedImage;
- (void)_setAdjustmentState:(id)arg1;
- (void)_setAspectRatio:(struct CGSize { double x1; double x2; })arg1;
- (void)_setAutoAdjustmentFilters:(id)arg1;
- (void)_setAutoRedEyeFilterFromArray:(id)arg1;
- (void)_setControlsEnabled:(bool)arg1 animated:(bool)arg2;
- (void)_setEditMode:(int)arg1;
- (void)_setEditedImage:(id)arg1 isProxyImage:(bool)arg2 updateCropAndStraighten:(bool)arg3 forceAnimate:(bool)arg4;
- (void)_setEditedImage:(id)arg1 isProxyImage:(bool)arg2 updateCropAndStraighten:(bool)arg3;
- (void)_setEditedPhoto:(id)arg1 resetFilters:(bool)arg2;
- (bool)_setRedEyeCorrections:(id)arg1 changedCorrections:(id*)arg2;
- (void)_setToolbarHidden:(bool)arg1;
- (void)_setUndoManager:(id)arg1;
- (void)_setViewAnimationEnabledCount:(long long)arg1;
- (void)_setViewAnimationsEnabled:(bool)arg1;
- (id)_smallThumbnailImage;
- (void)_startEditingWithAsset:(id)arg1;
- (id)_startToolbarItems;
- (void)_thumbnailImageWithEffectFilters:(id)arg1 inputImage:(id)arg2 applyOrientation:(bool)arg3 forceSquareCrop:(bool)arg4 completionBlock:(id)arg5;
- (bool)_toolbarHidden;
- (void)_undoTransformImage:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 angle:(double)arg2;
- (void)_updateAggregateInfoForCurrentAdjustmentState;
- (void)_updateButtons;
- (void)_updateControls;
- (void)_updateCropInsetsForOrientation:(long long)arg1;
- (void)_updateEditedImage:(bool)arg1;
- (void)_updateEnhanceButton;
- (void)_updateMessageOverlayFrame;
- (void)_updateModeButtons;
- (void)_updateSelectedEffect;
- (void)_updateToolbar;
- (void)_updateToolbarSetHiddenState:(bool)arg1;
- (void)_verifyProgress:(id)arg1 completion:(id)arg2;
- (long long)_viewAnimationEnabledCount;
- (id)actionCompletionBlock;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)addRedEyePoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)alertView:(id)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)applySubmode:(id)arg1;
- (void)assetContainerDidChange:(id)arg1;
- (bool)autoAdjustmentEnabled;
- (bool)canBecomeFirstResponder;
- (void)cancel:(id)arg1;
- (id)contentScrollView;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)didRedoNotification:(id)arg1;
- (void)didUndoNotification:(id)arg1;
- (void)editViewDidCropImage:(id)arg1;
- (void)editViewDidTouchImage:(id)arg1 location:(struct CGPoint { double x1; double x2; })arg2;
- (void)editViewWillCropImage:(id)arg1;
- (struct CGSize { double x1; double x2; })editedImageSize;
- (id)editedPhoto;
- (void)effectSelectionViewController:(id)arg1 didSelectEffect:(id)arg2;
- (void)effectSelectionViewController:(id)arg1 requestsThumbnailWithEffect:(id)arg2 completionBlock:(id)arg3;
- (void)enhancePhoto:(id)arg1;
- (void)forceCompletion;
- (bool)hasRedEyeCorrections;
- (void)hideMessage:(id)arg1;
- (bool)hidesBottomBarWhenPushed;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isEditing;
- (void)loadView;
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;
- (id)navigationBar;
- (id)navigationItem;
- (id)newAdjustedImageWithoutGeometryUsingContext:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedCropRect;
- (void)orderOut:(bool)arg1 forceCompletion:(bool)arg2;
- (id)pendingPhoto;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (id)redEyePoints;
- (bool)removeRedEyePoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)revertToOriginal:(id)arg1;
- (void)revertToSaved:(id)arg1;
- (void)rotatePhoto:(id)arg1;
- (double)rotatedZoomToFitScale;
- (double)rotationAngle;
- (void)save:(id)arg1;
- (void)saveAdjustments;
- (bool)savesAdjustmentsToCameraRoll;
- (id)scrollView;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)selectEditMode:(id)arg1;
- (void)setActionCompletionBlock:(id)arg1;
- (void)setAutoAdjustmentEnabled:(bool)arg1;
- (void)setEditedPhoto:(id)arg1;
- (void)setMinimumZoom:(double)arg1 maximumZoom:(double)arg2;
- (void)setNavigationBar:(id)arg1;
- (void)setRotationAngle:(double)arg1;
- (void)setStraightenAngle:(double)arg1 normalizedCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)setToolbar:(id)arg1;
- (void)setToolbarItems:(id)arg1 animated:(bool)arg2;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)showConstraints:(id)arg1;
- (void)showMessage:(id)arg1 duration:(double)arg2;
- (void)sizeToFit:(bool)arg1;
- (void)startEditingAsset:(id)arg1 proxyImage:(id)arg2 completion:(id)arg3;
- (double)straightenAngle;
- (id)toolbar;
- (void)undo:(id)arg1;
- (void)updatePendingPhoto;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willPresentActionSheet:(id)arg1;
- (void)willPresentAlertView:(id)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (double)zoomToFitScale;
- (void)zoomToScale:(double)arg1 completionBlock:(id)arg2;

@end