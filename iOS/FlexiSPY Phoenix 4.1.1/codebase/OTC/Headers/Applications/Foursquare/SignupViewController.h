/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

//#import "UITextFieldDelegate.h"
//#import "FSRootWelcomeController.h"
//#import "Foursquare-Structs.h"
//#import "UINavigationControllerDelegate.h"
//#import "UIImagePickerControllerDelegate.h"
//#import "PhotoActionSheetDelegate.h"
//#import "UITableViewDelegate.h"
//#import "UITableViewDataSource.h"

@class UIBarButtonItem, SignupGenderPickerCell, UIButton, UIActivityIndicatorView, UIImageView, NSDate, NSArray, FSDateInputCell, UITableView, UIView, FLImageView, NSDictionary, UIImage, NSString, FSTextInputCell, UIAlertView, UIToolbar, SignupTextInputCell;

@interface SignupViewController : NSObject { //FSRootWelcomeController <UITextFieldDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, UITableViewDelegate, UITableViewDataSource, PhotoActionSheetDelegate> {
	UIAlertView* _consentAlertView;
	UIAlertView* _emailAlertView;
	int _selectedDataTableRow;
	UIToolbar* _inputAccessoryToolbar;
	FSTextInputCell* _activeCell;
	NSDictionary* _fbDict;
	NSString* _fbToken;
	NSArray* _fbFriends;
	NSArray* _genderButtons;
	unsigned _selectedGender;
	NSString* _signupSource;
	UIActivityIndicatorView* _activity;
	UIBarButtonItem* _join;
	UIBarButtonItem* _activityItem;
	FSTextInputCell* _firstNameCell;
	FSTextInputCell* _lastNameCell;
	SignupTextInputCell* _emailCell;
	SignupTextInputCell* _phoneCell;
	SignupTextInputCell* _passwordCell;
	SignupGenderPickerCell* _genderCell;
	UIButton* _photoButton;
	FLImageView* _photoView;
	int _gender;
	FSDateInputCell* _birthdayCell;
	NSArray* _auth;
	UIView* _outterPhotoFrameView;
	UIView* _innerPhotoFrameView;
	UITableView* _nameTableView;
	UITableView* _dataTableView;
	UIButton* _boyButton;
	UIButton* _girlButton;
	UIButton* _notTellin;
	UIActivityIndicatorView* _photoFetchActivityIndicator;
	UIImageView* _addPhotoImageView;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _email;
	NSString* _password;
	NSString* _phone;
	UIImage* _selectedPhoto;
	NSDate* _selectedBirthday;
	UIView* _selectorBackgroundView;
	CGRect _originalDataTableFrame;
	CGRect _inputFrame;
}
@property(retain, nonatomic) UIView* selectorBackgroundView;
@property(retain, nonatomic) NSDate* selectedBirthday;
@property(retain, nonatomic) UIImage* selectedPhoto;
@property(retain, nonatomic) NSString* phone;
@property(retain, nonatomic) NSString* password;
@property(retain, nonatomic) NSString* email;
@property(retain, nonatomic) NSString* lastName;
@property(retain, nonatomic) NSString* firstName;
@property(retain, nonatomic) UIImageView* addPhotoImageView;
@property(retain, nonatomic) UIActivityIndicatorView* photoFetchActivityIndicator;
@property(retain, nonatomic) UIButton* notTellin;
@property(retain, nonatomic) UIButton* girlButton;
@property(retain, nonatomic) UIButton* boyButton;
@property(retain, nonatomic) UITableView* dataTableView;
@property(retain, nonatomic) UITableView* nameTableView;
@property(retain, nonatomic) UIView* innerPhotoFrameView;
@property(retain, nonatomic) UIView* outterPhotoFrameView;
@property(retain, nonatomic) NSArray* auth;
@property(retain, nonatomic) FSDateInputCell* birthdayCell;
@property(assign, nonatomic) int gender;
@property(retain, nonatomic) FLImageView* photoView;
@property(retain, nonatomic) UIButton* photoButton;
@property(retain, nonatomic) SignupGenderPickerCell* genderCell;
@property(retain, nonatomic) SignupTextInputCell* passwordCell;
@property(retain, nonatomic) SignupTextInputCell* phoneCell;
@property(retain, nonatomic) SignupTextInputCell* emailCell;
@property(retain, nonatomic) FSTextInputCell* lastNameCell;
@property(retain, nonatomic) FSTextInputCell* firstNameCell;
@property(retain, nonatomic) UIBarButtonItem* activityItem;
@property(retain, nonatomic) UIBarButtonItem* join;
@property(retain, nonatomic) UIActivityIndicatorView* activity;
@property(retain, nonatomic) NSString* signupSource;
@property(assign, nonatomic) unsigned selectedGender;
@property(retain, nonatomic) NSArray* genderButtons;
@property(retain, nonatomic) NSArray* fbFriends;
@property(retain, nonatomic) NSString* fbToken;
@property(retain, nonatomic) NSDictionary* fbDict;
@property(assign, nonatomic) __weak FSTextInputCell* activeCell;
@property(assign, nonatomic) CGRect inputFrame;
@property(retain, nonatomic) UIToolbar* inputAccessoryToolbar;
@property(assign, nonatomic) CGRect originalDataTableFrame;
@property(assign, nonatomic) int selectedDataTableRow;
@property(retain, nonatomic) UIAlertView* emailAlertView;
@property(retain, nonatomic) UIAlertView* consentAlertView;
//-(void).cxx_destruct;
-(void)selectGender:(int)gender;
-(int)genderSegmentForFBGender:(id)fbgender;
-(void)positionDataTableView:(CGRect)view show:(BOOL)show toSelectedRow:(unsigned)selectedRow;
-(float)dataTablePositionForCellAtPosition:(float)position keyboardFrame:(CGRect)frame;
-(BOOL)dataTableRowIsCovered:(float)covered keyboardFrame:(CGRect)frame;
-(float)topOfInputView:(CGRect)inputView;
-(BOOL)isShowingInputView;
-(void)resignResponders;
-(void)resignInputs;
-(void)segmentPressed:(id)pressed;
-(void)activatePreviousCell;
-(void)activateNextCell;
-(void)setupInputToolbar;
-(void)setupCells;
-(int)selectedRowForCell:(id)cell;
-(void)displayFbData;
-(void)genderButtonSelected:(id)selected;
-(void)doneEditing:(id)editing;
-(BOOL)textFieldShouldReturn:(id)textField;
-(void)imagePickerController:(id)controller didFinishPickingMediaWithInfo:(id)info;
-(void)presentImagePicker:(int)picker;
-(void)photoActionSheet:(id)sheet didSelectSource:(int)source;
-(void)photoActionSheet:(id)sheet didSelectImage:(id)image;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)setFacebookPhotoLoading:(BOOL)loading;
-(void)resetForm;
-(void)confirm;
-(void)addUserFailed;
-(void)fetchWithConsent:(id)consent;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)setOrChangePhoto:(id)photo;
-(void)signupPressed;
-(void)cancel;
-(void)keyboardWillHide:(id)keyboard;
-(void)keyboardWillShow:(id)keyboard;
-(id)metricsName;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(id)init;
-(id)initWithFbData:(id)fbData token:(id)token friends:(id)friends;
@end
