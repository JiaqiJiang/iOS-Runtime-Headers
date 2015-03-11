/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@class NSString, RecommendationActionController;

@interface StepByStepUIViewController_Create_Config : StepByStepUIViewController <TableViewManagerDelegate, UIPopoverControllerDelegate> {
    NSString *_basePassword;
    NSString *_basePasswordVerify;
    NSString *_diskPassword;
    NSString *_diskPasswordVerify;
    NSString *_personalizedBaseName;
    NSString *_wifiName;
    NSString *_wifiPassword;
    NSString *_wifiPasswordVerify;
    RecommendationActionController *actionController;
    boolhasDisk;
    booluseDifferentDiskPassword;
    booluseSinglePassword;
}

@property(retain) RecommendationActionController * actionController;
@property(copy) NSString * basePassword;
@property(copy) NSString * basePasswordVerify;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(copy) NSString * diskPassword;
@property(copy) NSString * diskPasswordVerify;
@property bool hasDisk;
@property(readonly) unsigned long long hash;
@property(copy) NSString * personalizedBaseName;
@property(readonly) Class superclass;
@property bool useDifferentDiskPassword;
@property bool useSinglePassword;
@property(copy) NSString * wifiName;
@property(copy) NSString * wifiPassword;
@property(copy) NSString * wifiPasswordVerify;

- (id)actionController;
- (void)addDiskPasswordSection;
- (id)basePassword;
- (id)basePasswordVerify;
- (id)diskPassword;
- (id)diskPasswordVerify;
- (bool)hasDisk;
- (id)personalizedBaseName;
- (void)setActionController:(id)arg1;
- (void)setBasePassword:(id)arg1;
- (void)setBasePasswordVerify:(id)arg1;
- (void)setDiskPassword:(id)arg1;
- (void)setDiskPasswordVerify:(id)arg1;
- (void)setHasDisk:(bool)arg1;
- (void)setPersonalizedBaseName:(id)arg1;
- (void)setUseDifferentDiskPassword:(bool)arg1;
- (void)setUseSinglePassword:(bool)arg1;
- (void)setWifiName:(id)arg1;
- (void)setWifiPassword:(id)arg1;
- (void)setWifiPasswordVerify:(id)arg1;
- (void)setupInitialTableHeaderConfiguration;
- (void)setupTable;
- (bool)shouldChangeTextField:(id)arg1 atIndexPath:(id)arg2 forTextIndex:(unsigned long long)arg3 toString:(id)arg4;
- (void)switchTouchedInCellAtIndexPath:(id)arg1 forSwitchIndex:(unsigned long long)arg2 isOn:(bool)arg3;
- (void)textFieldDidChangeAtIndexPath:(id)arg1;
- (void)touchInCellAtIndexPath:(id)arg1;
- (void)updateSinglePasswordSwitchExplanation:(bool)arg1;
- (void)updateTable;
- (void)updateTableForMultiplePasswords;
- (void)updateTableForSinglePassword;
- (bool)useDifferentDiskPassword;
- (bool)useSinglePassword;
- (bool)validateAndSetValues;
- (void)validateAndUpdateNextButton;
- (void)viewWillAppear:(bool)arg1;
- (id)wifiName;
- (id)wifiPassword;
- (id)wifiPasswordVerify;

@end