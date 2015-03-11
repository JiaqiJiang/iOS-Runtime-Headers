/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class NSMutableArray, UIWebBrowserView, UIWebPaginationInfo;

@interface QLSpreadsheetPrintPageRenderer : QLWebViewPrintPageHelper {
    unsigned long long _currentPageIndex;
    unsigned long long _currentURLIndex;
    UIWebPaginationInfo *_paginationInfo;
    UIWebBrowserView *_printView;
    long long _totalPagesPrinted;
    NSMutableArray *_urls;
    bool_frameLoaded;
    bool_printingDone;
}

- (id)_documentURLs;
- (bool)_loadNextURL;
- (bool)_loadURLAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithWebBrowserView:(id)arg1 request:(id)arg2 documentType:(id)arg3;
- (long long)numberOfPages;
- (id)pdfDataForPageAtIndex:(long long)arg1 printingDone:(bool*)arg2;
- (void)prepareForDrawingPages:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;

@end