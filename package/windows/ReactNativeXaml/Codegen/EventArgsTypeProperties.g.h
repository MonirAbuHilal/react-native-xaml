




#pragma once
#include "pch.h"
#include "XamlMetadata.h"
#include "Crc32Str.h"

/*************************************************************
THIS FILE WAS AUTOMATICALLY GENERATED, DO NOT MODIFY MANUALLY
**************************************************************/


#include <winrt/Windows.UI.Xaml.h>

#include <winrt/Windows.UI.Xaml.Controls.h>

#include <winrt/Windows.UI.Xaml.Controls.Maps.h>

#include <winrt/Windows.UI.Xaml.Controls.Primitives.h>

#include <winrt/Windows.UI.Xaml.Input.h>

#include <winrt/Windows.UI.Xaml.Navigation.h>

#include <winrt/Windows.UI.Xaml.Documents.h>

#include <winrt/Windows.UI.Xaml.Media.h>


struct EventArgsProperty {
	const char* const name;
	
	using isType_t = bool (*) (const winrt::Windows::Foundation::IInspectable& ea);
	const isType_t isType;

	using getter_t = winrt::Windows::Foundation::IInspectable (*) (const winrt::Windows::Foundation::IInspectable& ea);
	const getter_t getter;
};

const EventArgsProperty eventArgsProperties[] = {

    { "acceptedOperation", IsType<winrt::Windows::UI::Xaml::DragEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::DragEventArgs>(); return winrt::box_value(static_cast<uint32_t>(ea.AcceptedOperation())); } },

    { "action", IsType<winrt::Windows::UI::Xaml::Controls::DynamicOverflowItemsChangingEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::DynamicOverflowItemsChangingEventArgs>(); return winrt::box_value(static_cast<uint32_t>(ea.Action())); } },

    { "addedDates", IsType<winrt::Windows::UI::Xaml::Controls::CalendarViewSelectedDatesChangedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::CalendarViewSelectedDatesChangedEventArgs>(); return winrt::box_value(ea.AddedDates()); } },

    { "addedItems", IsType<winrt::Windows::UI::Xaml::Controls::ItemsPickedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::ItemsPickedEventArgs>(); return winrt::box_value(ea.AddedItems()); } },

    { "addedItems", IsType<winrt::Windows::UI::Xaml::Controls::SelectionChangedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::SelectionChangedEventArgs>(); return winrt::box_value(ea.AddedItems()); } },

    { "addedSections", IsType<winrt::Windows::UI::Xaml::Controls::SectionsInViewChangedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::SectionsInViewChangedEventArgs>(); return winrt::box_value(ea.AddedSections()); } },

    { "allowedOperations", IsType<winrt::Windows::UI::Xaml::DragEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::DragEventArgs>(); return winrt::box_value(static_cast<uint32_t>(ea.AllowedOperations())); } },

    { "allowedOperations", IsType<winrt::Windows::UI::Xaml::DragStartingEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::DragStartingEventArgs>(); return winrt::box_value(static_cast<uint32_t>(ea.AllowedOperations())); } },

    { "anchor", IsType<winrt::Windows::UI::Xaml::Controls::AnchorRequestedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::AnchorRequestedEventArgs>(); return winrt::box_value(ea.Anchor()); } },

    { "anchorCandidates", IsType<winrt::Windows::UI::Xaml::Controls::AnchorRequestedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::AnchorRequestedEventArgs>(); return winrt::box_value(ea.AnchorCandidates()); } },

    { "animationDesired", IsType<winrt::Windows::UI::Xaml::BringIntoViewRequestedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::BringIntoViewRequestedEventArgs>(); return winrt::box_value(ea.AnimationDesired()); } },

    { "bounds", IsType<winrt::Windows::UI::Xaml::Controls::CandidateWindowBoundsChangedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::CandidateWindowBoundsChangedEventArgs>(); return winrt::box_value(ea.Bounds()); } },

    { "bringIntoViewDistanceX", IsType<winrt::Windows::UI::Xaml::EffectiveViewportChangedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::EffectiveViewportChangedEventArgs>(); return winrt::box_value(ea.BringIntoViewDistanceX()); } },

    { "bringIntoViewDistanceY", IsType<winrt::Windows::UI::Xaml::EffectiveViewportChangedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::EffectiveViewportChangedEventArgs>(); return winrt::box_value(ea.BringIntoViewDistanceY()); } },

    { "callingUri", IsType<winrt::Windows::UI::Xaml::Controls::NotifyEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::NotifyEventArgs>(); return winrt::box_value(ea.CallingUri()); } },

    { "camera", IsType<winrt::Windows::UI::Xaml::Controls::Maps::MapActualCameraChangedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::Maps::MapActualCameraChangedEventArgs>(); return winrt::box_value(ea.Camera()); } },

    { "camera", IsType<winrt::Windows::UI::Xaml::Controls::Maps::MapActualCameraChangingEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::Maps::MapActualCameraChangingEventArgs>(); return winrt::box_value(ea.Camera()); } },

    { "camera", IsType<winrt::Windows::UI::Xaml::Controls::Maps::MapTargetCameraChangedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::Maps::MapTargetCameraChangedEventArgs>(); return winrt::box_value(ea.Camera()); } },

    { "cancel", IsType<winrt::Windows::UI::Xaml::Controls::CleanUpVirtualizedItemEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::CleanUpVirtualizedItemEventArgs>(); return winrt::box_value(ea.Cancel()); } },

    { "cancel", IsType<winrt::Windows::UI::Xaml::Controls::ContentDialogButtonClickEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::ContentDialogButtonClickEventArgs>(); return winrt::box_value(ea.Cancel()); } },

    { "cancel", IsType<winrt::Windows::UI::Xaml::Controls::ContentDialogClosingEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::ContentDialogClosingEventArgs>(); return winrt::box_value(ea.Cancel()); } },

    { "cancel", IsType<winrt::Windows::UI::Xaml::Controls::DragItemsStartingEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::DragItemsStartingEventArgs>(); return winrt::box_value(ea.Cancel()); } },

    { "cancel", IsType<winrt::Windows::UI::Xaml::DragStartingEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::DragStartingEventArgs>(); return winrt::box_value(ea.Cancel()); } },

    { "cancel", IsType<winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBaseClosingEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBaseClosingEventArgs>(); return winrt::box_value(ea.Cancel()); } },

    { "cancel", IsType<winrt::Windows::UI::Xaml::Input::GettingFocusEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::GettingFocusEventArgs>(); return winrt::box_value(ea.Cancel()); } },

    { "cancel", IsType<winrt::Windows::UI::Xaml::Input::LosingFocusEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::LosingFocusEventArgs>(); return winrt::box_value(ea.Cancel()); } },

    { "cancel", IsType<winrt::Windows::UI::Xaml::Navigation::NavigatingCancelEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Navigation::NavigatingCancelEventArgs>(); return winrt::box_value(ea.Cancel()); } },

    { "cancel", IsType<winrt::Windows::UI::Xaml::Controls::NavigationViewPaneClosingEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::NavigationViewPaneClosingEventArgs>(); return winrt::box_value(ea.Cancel()); } },

    { "cancel", IsType<winrt::Windows::UI::Xaml::Controls::RichEditBoxSelectionChangingEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::RichEditBoxSelectionChangingEventArgs>(); return winrt::box_value(ea.Cancel()); } },

    { "cancel", IsType<winrt::Windows::UI::Xaml::Controls::SplitViewPaneClosingEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::SplitViewPaneClosingEventArgs>(); return winrt::box_value(ea.Cancel()); } },

    { "cancel", IsType<winrt::Windows::UI::Xaml::Controls::TextBoxBeforeTextChangingEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::TextBoxBeforeTextChangingEventArgs>(); return winrt::box_value(ea.Cancel()); } },

    { "cancel", IsType<winrt::Windows::UI::Xaml::Controls::TextBoxSelectionChangingEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::TextBoxSelectionChangingEventArgs>(); return winrt::box_value(ea.Cancel()); } },

    { "cancel", IsType<winrt::Windows::UI::Xaml::Controls::TreeViewDragItemsStartingEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::TreeViewDragItemsStartingEventArgs>(); return winrt::box_value(ea.Cancel()); } },

    { "cancel", IsType<winrt::Windows::UI::Xaml::Controls::WebViewNavigationStartingEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::WebViewNavigationStartingEventArgs>(); return winrt::box_value(ea.Cancel()); } },

    { "canceled", IsType<winrt::Windows::UI::Xaml::Controls::Primitives::DragCompletedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::Primitives::DragCompletedEventArgs>(); return winrt::box_value(ea.Canceled()); } },

    { "changeKind", IsType<winrt::Windows::UI::Xaml::Controls::ContentLinkChangedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::ContentLinkChangedEventArgs>(); return winrt::box_value(static_cast<uint32_t>(ea.ChangeKind())); } },

    { "changeReason", IsType<winrt::Windows::UI::Xaml::Controls::Maps::MapActualCameraChangedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::Maps::MapActualCameraChangedEventArgs>(); return winrt::box_value(static_cast<uint32_t>(ea.ChangeReason())); } },

    { "changeReason", IsType<winrt::Windows::UI::Xaml::Controls::Maps::MapActualCameraChangingEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::Maps::MapActualCameraChangingEventArgs>(); return winrt::box_value(static_cast<uint32_t>(ea.ChangeReason())); } },

    { "changeReason", IsType<winrt::Windows::UI::Xaml::Controls::Maps::MapTargetCameraChangedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::Maps::MapTargetCameraChangedEventArgs>(); return winrt::box_value(static_cast<uint32_t>(ea.ChangeReason())); } },

    { "character", IsType<winrt::Windows::UI::Xaml::Input::CharacterReceivedRoutedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::CharacterReceivedRoutedEventArgs>(); return winrt::box_value(ea.Character()); } },

    { "chosenSuggestion", IsType<winrt::Windows::UI::Xaml::Controls::AutoSuggestBoxQuerySubmittedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::AutoSuggestBoxQuerySubmittedEventArgs>(); return winrt::box_value(ea.ChosenSuggestion()); } },

    { "clickedItem", IsType<winrt::Windows::UI::Xaml::Controls::ItemClickEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::ItemClickEventArgs>(); return winrt::box_value(ea.ClickedItem()); } },

    { "container", IsType<winrt::Windows::UI::Xaml::Input::ManipulationCompletedRoutedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::ManipulationCompletedRoutedEventArgs>(); return winrt::box_value(ea.Container()); } },

    { "container", IsType<winrt::Windows::UI::Xaml::Input::ManipulationDeltaRoutedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::ManipulationDeltaRoutedEventArgs>(); return winrt::box_value(ea.Container()); } },

    { "container", IsType<winrt::Windows::UI::Xaml::Input::ManipulationInertiaStartingRoutedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::ManipulationInertiaStartingRoutedEventArgs>(); return winrt::box_value(ea.Container()); } },

    { "container", IsType<winrt::Windows::UI::Xaml::Input::ManipulationStartedRoutedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::ManipulationStartedRoutedEventArgs>(); return winrt::box_value(ea.Container()); } },

    { "container", IsType<winrt::Windows::UI::Xaml::Input::ManipulationStartingRoutedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::ManipulationStartingRoutedEventArgs>(); return winrt::box_value(ea.Container()); } },

    { "content", IsType<winrt::Windows::UI::Xaml::Navigation::NavigationEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Navigation::NavigationEventArgs>(); return winrt::box_value(ea.Content()); } },

    { "contentLinkInfo", IsType<winrt::Windows::UI::Xaml::Controls::ContentLinkChangedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::ContentLinkChangedEventArgs>(); return winrt::box_value(ea.ContentLinkInfo()); } },

    { "contentLinkInfo", IsType<winrt::Windows::UI::Xaml::Documents::ContentLinkInvokedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Documents::ContentLinkInvokedEventArgs>(); return winrt::box_value(ea.ContentLinkInfo()); } },

    { "correlationId", IsType<winrt::Windows::UI::Xaml::Input::GettingFocusEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::GettingFocusEventArgs>(); return winrt::box_value(ea.CorrelationId()); } },

    { "correlationId", IsType<winrt::Windows::UI::Xaml::Input::LosingFocusEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::LosingFocusEventArgs>(); return winrt::box_value(ea.CorrelationId()); } },

    { "cumulative", IsType<winrt::Windows::UI::Xaml::Input::ManipulationCompletedRoutedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::ManipulationCompletedRoutedEventArgs>(); return winrt::box_value(ea.Cumulative()); } },

    { "cumulative", IsType<winrt::Windows::UI::Xaml::Input::ManipulationDeltaRoutedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::ManipulationDeltaRoutedEventArgs>(); return winrt::box_value(ea.Cumulative()); } },

    { "cumulative", IsType<winrt::Windows::UI::Xaml::Input::ManipulationInertiaStartingRoutedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::ManipulationInertiaStartingRoutedEventArgs>(); return winrt::box_value(ea.Cumulative()); } },

    { "cumulative", IsType<winrt::Windows::UI::Xaml::Input::ManipulationStartedRoutedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::ManipulationStartedRoutedEventArgs>(); return winrt::box_value(ea.Cumulative()); } },

    { "cursorLeft", IsType<winrt::Windows::UI::Xaml::Controls::ContextMenuEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::ContextMenuEventArgs>(); return winrt::box_value(ea.CursorLeft()); } },

    { "cursorTop", IsType<winrt::Windows::UI::Xaml::Controls::ContextMenuEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::ContextMenuEventArgs>(); return winrt::box_value(ea.CursorTop()); } },

    { "data", IsType<winrt::Windows::UI::Xaml::DragEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::DragEventArgs>(); return winrt::box_value(ea.Data()); } },

    { "data", IsType<winrt::Windows::UI::Xaml::Controls::DragItemsStartingEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::DragItemsStartingEventArgs>(); return winrt::box_value(ea.Data()); } },

    { "data", IsType<winrt::Windows::UI::Xaml::DragStartingEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::DragStartingEventArgs>(); return winrt::box_value(ea.Data()); } },

    { "data", IsType<winrt::Windows::UI::Xaml::Controls::TreeViewDragItemsStartingEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::TreeViewDragItemsStartingEventArgs>(); return winrt::box_value(ea.Data()); } },

    { "dataView", IsType<winrt::Windows::UI::Xaml::DragEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::DragEventArgs>(); return winrt::box_value(ea.DataView()); } },

    { "delta", IsType<winrt::Windows::UI::Xaml::Input::ManipulationDeltaRoutedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::ManipulationDeltaRoutedEventArgs>(); return winrt::box_value(ea.Delta()); } },

    { "delta", IsType<winrt::Windows::UI::Xaml::Input::ManipulationInertiaStartingRoutedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::ManipulationInertiaStartingRoutedEventArgs>(); return winrt::box_value(ea.Delta()); } },

    { "destinationItem", IsType<winrt::Windows::UI::Xaml::Controls::SemanticZoomViewChangedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::SemanticZoomViewChangedEventArgs>(); return winrt::box_value(ea.DestinationItem()); } },

    { "deviceId", IsType<winrt::Windows::UI::Xaml::Input::KeyRoutedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::KeyRoutedEventArgs>(); return winrt::box_value(ea.DeviceId()); } },

    { "direction", IsType<winrt::Windows::UI::Xaml::Input::GettingFocusEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::GettingFocusEventArgs>(); return winrt::box_value(static_cast<uint32_t>(ea.Direction())); } },

    { "direction", IsType<winrt::Windows::UI::Xaml::Input::LosingFocusEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::LosingFocusEventArgs>(); return winrt::box_value(static_cast<uint32_t>(ea.Direction())); } },

    { "direction", IsType<winrt::Windows::UI::Xaml::Input::NoFocusCandidateFoundEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::NoFocusCandidateFoundEventArgs>(); return winrt::box_value(static_cast<uint32_t>(ea.Direction())); } },

    { "displayMode", IsType<winrt::Windows::UI::Xaml::Controls::NavigationViewDisplayModeChangedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::NavigationViewDisplayModeChangedEventArgs>(); return winrt::box_value(static_cast<uint32_t>(ea.DisplayMode())); } },

    { "dragUI", IsType<winrt::Windows::UI::Xaml::DragStartingEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::DragStartingEventArgs>(); return winrt::box_value(ea.DragUI()); } },

    { "dragUIOverride", IsType<winrt::Windows::UI::Xaml::DragEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::DragEventArgs>(); return winrt::box_value(ea.DragUIOverride()); } },

    { "dropResult", IsType<winrt::Windows::UI::Xaml::Controls::DragItemsCompletedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::DragItemsCompletedEventArgs>(); return winrt::box_value(static_cast<uint32_t>(ea.DropResult())); } },

    { "dropResult", IsType<winrt::Windows::UI::Xaml::DropCompletedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::DropCompletedEventArgs>(); return winrt::box_value(static_cast<uint32_t>(ea.DropResult())); } },

    { "dropResult", IsType<winrt::Windows::UI::Xaml::Controls::TreeViewDragItemsCompletedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::TreeViewDragItemsCompletedEventArgs>(); return winrt::box_value(static_cast<uint32_t>(ea.DropResult())); } },

    { "effectiveViewport", IsType<winrt::Windows::UI::Xaml::EffectiveViewportChangedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::EffectiveViewportChangedEventArgs>(); return winrt::box_value(ea.EffectiveViewport()); } },

    { "errorMessage", IsType<winrt::Windows::UI::Xaml::ExceptionRoutedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::ExceptionRoutedEventArgs>(); return winrt::box_value(ea.ErrorMessage()); } },

    { "exception", IsType<winrt::Windows::UI::Xaml::Navigation::NavigationFailedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Navigation::NavigationFailedEventArgs>(); return winrt::box_value(ea.Exception()); } },

    { "executionTime", IsType<winrt::Windows::UI::Xaml::Controls::WebViewLongRunningScriptDetectedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::WebViewLongRunningScriptDetectedEventArgs>(); return winrt::box_value(ea.ExecutionTime()); } },

    { "expansionBehavior", IsType<winrt::Windows::UI::Xaml::Input::ManipulationInertiaStartingRoutedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::ManipulationInertiaStartingRoutedEventArgs>(); return winrt::box_value(ea.ExpansionBehavior()); } },

    { "extendedError", IsType<winrt::Windows::UI::Xaml::Media::PartialMediaFailureDetectedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Media::PartialMediaFailureDetectedEventArgs>(); return winrt::box_value(ea.ExtendedError()); } },

    { "focusState", IsType<winrt::Windows::UI::Xaml::Input::GettingFocusEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::GettingFocusEventArgs>(); return winrt::box_value(static_cast<uint32_t>(ea.FocusState())); } },

    { "focusState", IsType<winrt::Windows::UI::Xaml::Input::LosingFocusEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::LosingFocusEventArgs>(); return winrt::box_value(static_cast<uint32_t>(ea.FocusState())); } },

    { "group", IsType<winrt::Windows::UI::Xaml::Controls::ChoosingGroupHeaderContainerEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::ChoosingGroupHeaderContainerEventArgs>(); return winrt::box_value(ea.Group()); } },

    { "groupHeaderContainer", IsType<winrt::Windows::UI::Xaml::Controls::ChoosingGroupHeaderContainerEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::ChoosingGroupHeaderContainerEventArgs>(); return winrt::box_value(ea.GroupHeaderContainer()); } },

    { "groupIndex", IsType<winrt::Windows::UI::Xaml::Controls::ChoosingGroupHeaderContainerEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::ChoosingGroupHeaderContainerEventArgs>(); return winrt::box_value(ea.GroupIndex()); } },

    { "handled", IsType<winrt::Windows::UI::Xaml::Input::AccessKeyInvokedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::AccessKeyInvokedEventArgs>(); return winrt::box_value(ea.Handled()); } },

    { "handled", IsType<winrt::Windows::UI::Xaml::Controls::BackClickEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::BackClickEventArgs>(); return winrt::box_value(ea.Handled()); } },

    { "handled", IsType<winrt::Windows::UI::Xaml::BringIntoViewRequestedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::BringIntoViewRequestedEventArgs>(); return winrt::box_value(ea.Handled()); } },

    { "handled", IsType<winrt::Windows::UI::Xaml::Input::CharacterReceivedRoutedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::CharacterReceivedRoutedEventArgs>(); return winrt::box_value(ea.Handled()); } },

    { "handled", IsType<winrt::Windows::UI::Xaml::Controls::ComboBoxTextSubmittedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::ComboBoxTextSubmittedEventArgs>(); return winrt::box_value(ea.Handled()); } },

    { "handled", IsType<winrt::Windows::UI::Xaml::Controls::ContainerContentChangingEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::ContainerContentChangingEventArgs>(); return winrt::box_value(ea.Handled()); } },

    { "handled", IsType<winrt::Windows::UI::Xaml::Documents::ContentLinkInvokedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Documents::ContentLinkInvokedEventArgs>(); return winrt::box_value(ea.Handled()); } },

    { "handled", IsType<winrt::Windows::UI::Xaml::Controls::ContextMenuEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::ContextMenuEventArgs>(); return winrt::box_value(ea.Handled()); } },

    { "handled", IsType<winrt::Windows::UI::Xaml::Input::ContextRequestedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::ContextRequestedEventArgs>(); return winrt::box_value(ea.Handled()); } },

    { "handled", IsType<winrt::Windows::UI::Xaml::DataContextChangedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::DataContextChangedEventArgs>(); return winrt::box_value(ea.Handled()); } },

    { "handled", IsType<winrt::Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs>(); return winrt::box_value(ea.Handled()); } },

    { "handled", IsType<winrt::Windows::UI::Xaml::DragEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::DragEventArgs>(); return winrt::box_value(ea.Handled()); } },

    { "handled", IsType<winrt::Windows::UI::Xaml::Controls::FocusEngagedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::FocusEngagedEventArgs>(); return winrt::box_value(ea.Handled()); } },

    { "handled", IsType<winrt::Windows::UI::Xaml::Input::GettingFocusEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::GettingFocusEventArgs>(); return winrt::box_value(ea.Handled()); } },

    { "handled", IsType<winrt::Windows::UI::Xaml::Input::HoldingRoutedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::HoldingRoutedEventArgs>(); return winrt::box_value(ea.Handled()); } },

    { "handled", IsType<winrt::Windows::UI::Xaml::Input::KeyRoutedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::KeyRoutedEventArgs>(); return winrt::box_value(ea.Handled()); } },

    { "handled", IsType<winrt::Windows::UI::Xaml::Input::LosingFocusEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::LosingFocusEventArgs>(); return winrt::box_value(ea.Handled()); } },

    { "handled", IsType<winrt::Windows::UI::Xaml::Input::ManipulationCompletedRoutedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::ManipulationCompletedRoutedEventArgs>(); return winrt::box_value(ea.Handled()); } },

    { "handled", IsType<winrt::Windows::UI::Xaml::Input::ManipulationDeltaRoutedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::ManipulationDeltaRoutedEventArgs>(); return winrt::box_value(ea.Handled()); } },

    { "handled", IsType<winrt::Windows::UI::Xaml::Input::ManipulationInertiaStartingRoutedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::ManipulationInertiaStartingRoutedEventArgs>(); return winrt::box_value(ea.Handled()); } },

    { "handled", IsType<winrt::Windows::UI::Xaml::Input::ManipulationStartedRoutedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::ManipulationStartedRoutedEventArgs>(); return winrt::box_value(ea.Handled()); } },

    { "handled", IsType<winrt::Windows::UI::Xaml::Input::ManipulationStartingRoutedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::ManipulationStartingRoutedEventArgs>(); return winrt::box_value(ea.Handled()); } },

    { "handled", IsType<winrt::Windows::UI::Xaml::Navigation::NavigationFailedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Navigation::NavigationFailedEventArgs>(); return winrt::box_value(ea.Handled()); } },

    { "handled", IsType<winrt::Windows::UI::Xaml::Input::NoFocusCandidateFoundEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::NoFocusCandidateFoundEventArgs>(); return winrt::box_value(ea.Handled()); } },

    { "handled", IsType<winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs>(); return winrt::box_value(ea.Handled()); } },

    { "handled", IsType<winrt::Windows::UI::Xaml::Input::ProcessKeyboardAcceleratorEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::ProcessKeyboardAcceleratorEventArgs>(); return winrt::box_value(ea.Handled()); } },

    { "handled", IsType<winrt::Windows::UI::Xaml::Input::RightTappedRoutedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::RightTappedRoutedEventArgs>(); return winrt::box_value(ea.Handled()); } },

    { "handled", IsType<winrt::Windows::UI::Xaml::Input::TappedRoutedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::TappedRoutedEventArgs>(); return winrt::box_value(ea.Handled()); } },

    { "handled", IsType<winrt::Windows::UI::Xaml::Controls::TextControlCopyingToClipboardEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::TextControlCopyingToClipboardEventArgs>(); return winrt::box_value(ea.Handled()); } },

    { "handled", IsType<winrt::Windows::UI::Xaml::Controls::TextControlCuttingToClipboardEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::TextControlCuttingToClipboardEventArgs>(); return winrt::box_value(ea.Handled()); } },

    { "handled", IsType<winrt::Windows::UI::Xaml::Controls::TextControlPasteEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::TextControlPasteEventArgs>(); return winrt::box_value(ea.Handled()); } },

    { "handled", IsType<winrt::Windows::UI::Xaml::Controls::TreeViewItemInvokedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::TreeViewItemInvokedEventArgs>(); return winrt::box_value(ea.Handled()); } },

    { "handled", IsType<winrt::Windows::UI::Xaml::Controls::WebViewNewWindowRequestedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::WebViewNewWindowRequestedEventArgs>(); return winrt::box_value(ea.Handled()); } },

    { "handled", IsType<winrt::Windows::UI::Xaml::Controls::WebViewUnsupportedUriSchemeIdentifiedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::WebViewUnsupportedUriSchemeIdentifiedEventArgs>(); return winrt::box_value(ea.Handled()); } },

    { "holdingState", IsType<winrt::Windows::UI::Xaml::Input::HoldingRoutedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::HoldingRoutedEventArgs>(); return winrt::box_value(static_cast<uint32_t>(ea.HoldingState())); } },

    { "horizontalAlignmentRatio", IsType<winrt::Windows::UI::Xaml::BringIntoViewRequestedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::BringIntoViewRequestedEventArgs>(); return winrt::box_value(ea.HorizontalAlignmentRatio()); } },

    { "horizontalChange", IsType<winrt::Windows::UI::Xaml::Controls::Primitives::DragCompletedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::Primitives::DragCompletedEventArgs>(); return winrt::box_value(ea.HorizontalChange()); } },

    { "horizontalChange", IsType<winrt::Windows::UI::Xaml::Controls::Primitives::DragDeltaEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::Primitives::DragDeltaEventArgs>(); return winrt::box_value(ea.HorizontalChange()); } },

    { "horizontalOffset", IsType<winrt::Windows::UI::Xaml::BringIntoViewRequestedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::BringIntoViewRequestedEventArgs>(); return winrt::box_value(ea.HorizontalOffset()); } },

    { "horizontalOffset", IsType<winrt::Windows::UI::Xaml::Controls::Primitives::DragStartedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::Primitives::DragStartedEventArgs>(); return winrt::box_value(ea.HorizontalOffset()); } },

    { "inputDevice", IsType<winrt::Windows::UI::Xaml::Input::GettingFocusEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::GettingFocusEventArgs>(); return winrt::box_value(static_cast<uint32_t>(ea.InputDevice())); } },

    { "inputDevice", IsType<winrt::Windows::UI::Xaml::Input::LosingFocusEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::LosingFocusEventArgs>(); return winrt::box_value(static_cast<uint32_t>(ea.InputDevice())); } },

    { "inputDevice", IsType<winrt::Windows::UI::Xaml::Input::NoFocusCandidateFoundEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::NoFocusCandidateFoundEventArgs>(); return winrt::box_value(static_cast<uint32_t>(ea.InputDevice())); } },

    { "inRecycleQueue", IsType<winrt::Windows::UI::Xaml::Controls::CalendarViewDayItemChangingEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::CalendarViewDayItemChangingEventArgs>(); return winrt::box_value(ea.InRecycleQueue()); } },

    { "inRecycleQueue", IsType<winrt::Windows::UI::Xaml::Controls::ContainerContentChangingEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::ContainerContentChangingEventArgs>(); return winrt::box_value(ea.InRecycleQueue()); } },

    { "invokedItem", IsType<winrt::Windows::UI::Xaml::Controls::NavigationViewItemInvokedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::NavigationViewItemInvokedEventArgs>(); return winrt::box_value(ea.InvokedItem()); } },

    { "invokedItem", IsType<winrt::Windows::UI::Xaml::Controls::TreeViewItemInvokedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::TreeViewItemInvokedEventArgs>(); return winrt::box_value(ea.InvokedItem()); } },

    { "invokedItemContainer", IsType<winrt::Windows::UI::Xaml::Controls::NavigationViewItemInvokedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::NavigationViewItemInvokedEventArgs>(); return winrt::box_value(ea.InvokedItemContainer()); } },

    { "isContainerPrepared", IsType<winrt::Windows::UI::Xaml::Controls::ChoosingItemContainerEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::ChoosingItemContainerEventArgs>(); return winrt::box_value(ea.IsContainerPrepared()); } },

    { "isContentChanging", IsType<winrt::Windows::UI::Xaml::Controls::PasswordBoxPasswordChangingEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::PasswordBoxPasswordChangingEventArgs>(); return winrt::box_value(ea.IsContentChanging()); } },

    { "isContentChanging", IsType<winrt::Windows::UI::Xaml::Controls::RichEditBoxTextChangingEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::RichEditBoxTextChangingEventArgs>(); return winrt::box_value(ea.IsContentChanging()); } },

    { "isContentChanging", IsType<winrt::Windows::UI::Xaml::Controls::TextBoxTextChangingEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::TextBoxTextChangingEventArgs>(); return winrt::box_value(ea.IsContentChanging()); } },

    { "isGenerated", IsType<winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs>(); return winrt::box_value(ea.IsGenerated()); } },

    { "isInertial", IsType<winrt::Windows::UI::Xaml::Input::ManipulationCompletedRoutedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::ManipulationCompletedRoutedEventArgs>(); return winrt::box_value(ea.IsInertial()); } },

    { "isInertial", IsType<winrt::Windows::UI::Xaml::Input::ManipulationDeltaRoutedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::ManipulationDeltaRoutedEventArgs>(); return winrt::box_value(ea.IsInertial()); } },

    { "isSettingsInvoked", IsType<winrt::Windows::UI::Xaml::Controls::NavigationViewItemInvokedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::NavigationViewItemInvokedEventArgs>(); return winrt::box_value(ea.IsSettingsInvoked()); } },

    { "isSettingsSelected", IsType<winrt::Windows::UI::Xaml::Controls::NavigationViewSelectionChangedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::NavigationViewSelectionChangedEventArgs>(); return winrt::box_value(ea.IsSettingsSelected()); } },

    { "isSourceZoomedInView", IsType<winrt::Windows::UI::Xaml::Controls::SemanticZoomViewChangedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::SemanticZoomViewChangedEventArgs>(); return winrt::box_value(ea.IsSourceZoomedInView()); } },

    { "isSuccess", IsType<winrt::Windows::UI::Xaml::Controls::WebViewNavigationCompletedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::WebViewNavigationCompletedEventArgs>(); return winrt::box_value(ea.IsSuccess()); } },

    { "item", IsType<winrt::Windows::UI::Xaml::Controls::CalendarViewDayItemChangingEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::CalendarViewDayItemChangingEventArgs>(); return winrt::box_value(ea.Item()); } },

    { "item", IsType<winrt::Windows::UI::Xaml::Controls::ChoosingItemContainerEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::ChoosingItemContainerEventArgs>(); return winrt::box_value(ea.Item()); } },

    { "item", IsType<winrt::Windows::UI::Xaml::Controls::ContainerContentChangingEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::ContainerContentChangingEventArgs>(); return winrt::box_value(ea.Item()); } },

    { "item", IsType<winrt::Windows::UI::Xaml::Controls::PivotItemEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::PivotItemEventArgs>(); return winrt::box_value(ea.Item()); } },

    { "item", IsType<winrt::Windows::UI::Xaml::Controls::TreeViewCollapsedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::TreeViewCollapsedEventArgs>(); return winrt::box_value(ea.Item()); } },

    { "item", IsType<winrt::Windows::UI::Xaml::Controls::TreeViewExpandingEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::TreeViewExpandingEventArgs>(); return winrt::box_value(ea.Item()); } },

    { "itemContainer", IsType<winrt::Windows::UI::Xaml::Controls::ChoosingItemContainerEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::ChoosingItemContainerEventArgs>(); return winrt::box_value(ea.ItemContainer()); } },

    { "itemContainer", IsType<winrt::Windows::UI::Xaml::Controls::ContainerContentChangingEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::ContainerContentChangingEventArgs>(); return winrt::box_value(ea.ItemContainer()); } },

    { "itemIndex", IsType<winrt::Windows::UI::Xaml::Controls::ChoosingItemContainerEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::ChoosingItemContainerEventArgs>(); return winrt::box_value(ea.ItemIndex()); } },

    { "itemIndex", IsType<winrt::Windows::UI::Xaml::Controls::ContainerContentChangingEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::ContainerContentChangingEventArgs>(); return winrt::box_value(ea.ItemIndex()); } },

    { "items", IsType<winrt::Windows::UI::Xaml::Controls::DragItemsCompletedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::DragItemsCompletedEventArgs>(); return winrt::box_value(ea.Items()); } },

    { "items", IsType<winrt::Windows::UI::Xaml::Controls::DragItemsStartingEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::DragItemsStartingEventArgs>(); return winrt::box_value(ea.Items()); } },

    { "items", IsType<winrt::Windows::UI::Xaml::Controls::TreeViewDragItemsCompletedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::TreeViewDragItemsCompletedEventArgs>(); return winrt::box_value(ea.Items()); } },

    { "items", IsType<winrt::Windows::UI::Xaml::Controls::TreeViewDragItemsStartingEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::TreeViewDragItemsStartingEventArgs>(); return winrt::box_value(ea.Items()); } },

    { "key", IsType<winrt::Windows::UI::Xaml::Input::KeyRoutedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::KeyRoutedEventArgs>(); return winrt::box_value(static_cast<uint32_t>(ea.Key())); } },

    { "key", IsType<winrt::Windows::UI::Xaml::Input::ProcessKeyboardAcceleratorEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::ProcessKeyboardAcceleratorEventArgs>(); return winrt::box_value(static_cast<uint32_t>(ea.Key())); } },

    { "keyModifiers", IsType<winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs>(); return winrt::box_value(static_cast<uint32_t>(ea.KeyModifiers())); } },

    { "keyModifiers", IsType<winrt::Windows::UI::Xaml::Controls::SearchBoxQuerySubmittedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::SearchBoxQuerySubmittedEventArgs>(); return winrt::box_value(static_cast<uint32_t>(ea.KeyModifiers())); } },

    { "keyModifiers", IsType<winrt::Windows::UI::Xaml::Controls::SearchBoxResultSuggestionChosenEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::SearchBoxResultSuggestionChosenEventArgs>(); return winrt::box_value(static_cast<uint32_t>(ea.KeyModifiers())); } },

    { "keyStatus", IsType<winrt::Windows::UI::Xaml::Input::CharacterReceivedRoutedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::CharacterReceivedRoutedEventArgs>(); return winrt::box_value(ea.KeyStatus()); } },

    { "keyStatus", IsType<winrt::Windows::UI::Xaml::Input::KeyRoutedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::KeyRoutedEventArgs>(); return winrt::box_value(ea.KeyStatus()); } },

    { "language", IsType<winrt::Windows::UI::Xaml::Controls::SearchBoxQueryChangedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::SearchBoxQueryChangedEventArgs>(); return winrt::box_value(ea.Language()); } },

    { "language", IsType<winrt::Windows::UI::Xaml::Controls::SearchBoxQuerySubmittedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::SearchBoxQuerySubmittedEventArgs>(); return winrt::box_value(ea.Language()); } },

    { "language", IsType<winrt::Windows::UI::Xaml::Controls::SearchBoxSuggestionsRequestedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::SearchBoxSuggestionsRequestedEventArgs>(); return winrt::box_value(ea.Language()); } },

    { "length", IsType<winrt::Windows::UI::Xaml::Controls::TextCompositionChangedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::TextCompositionChangedEventArgs>(); return winrt::box_value(ea.Length()); } },

    { "length", IsType<winrt::Windows::UI::Xaml::Controls::TextCompositionEndedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::TextCompositionEndedEventArgs>(); return winrt::box_value(ea.Length()); } },

    { "length", IsType<winrt::Windows::UI::Xaml::Controls::TextCompositionStartedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::TextCompositionStartedEventArgs>(); return winrt::box_value(ea.Length()); } },

    { "linguisticDetails", IsType<winrt::Windows::UI::Xaml::Controls::SearchBoxQueryChangedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::SearchBoxQueryChangedEventArgs>(); return winrt::box_value(ea.LinguisticDetails()); } },

    { "linguisticDetails", IsType<winrt::Windows::UI::Xaml::Controls::SearchBoxQuerySubmittedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::SearchBoxQuerySubmittedEventArgs>(); return winrt::box_value(ea.LinguisticDetails()); } },

    { "linguisticDetails", IsType<winrt::Windows::UI::Xaml::Controls::SearchBoxSuggestionsRequestedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::SearchBoxSuggestionsRequestedEventArgs>(); return winrt::box_value(ea.LinguisticDetails()); } },

    { "location", IsType<winrt::Windows::UI::Xaml::Controls::Maps::MapContextRequestedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::Maps::MapContextRequestedEventArgs>(); return winrt::box_value(ea.Location()); } },

    { "location", IsType<winrt::Windows::UI::Xaml::Controls::Maps::MapElementClickEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::Maps::MapElementClickEventArgs>(); return winrt::box_value(ea.Location()); } },

    { "location", IsType<winrt::Windows::UI::Xaml::Controls::Maps::MapElementPointerEnteredEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::Maps::MapElementPointerEnteredEventArgs>(); return winrt::box_value(ea.Location()); } },

    { "location", IsType<winrt::Windows::UI::Xaml::Controls::Maps::MapElementPointerExitedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::Maps::MapElementPointerExitedEventArgs>(); return winrt::box_value(ea.Location()); } },

    { "location", IsType<winrt::Windows::UI::Xaml::Controls::Maps::MapInputEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::Maps::MapInputEventArgs>(); return winrt::box_value(ea.Location()); } },

    { "location", IsType<winrt::Windows::UI::Xaml::Controls::Maps::MapRightTappedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::Maps::MapRightTappedEventArgs>(); return winrt::box_value(ea.Location()); } },

    { "mapElement", IsType<winrt::Windows::UI::Xaml::Controls::Maps::MapElementPointerEnteredEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::Maps::MapElementPointerEnteredEventArgs>(); return winrt::box_value(ea.MapElement()); } },

    { "mapElement", IsType<winrt::Windows::UI::Xaml::Controls::Maps::MapElementPointerExitedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::Maps::MapElementPointerExitedEventArgs>(); return winrt::box_value(ea.MapElement()); } },

    { "mapElements", IsType<winrt::Windows::UI::Xaml::Controls::Maps::MapContextRequestedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::Maps::MapContextRequestedEventArgs>(); return winrt::box_value(ea.MapElements()); } },

    { "mapElements", IsType<winrt::Windows::UI::Xaml::Controls::Maps::MapElementClickEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::Maps::MapElementClickEventArgs>(); return winrt::box_value(ea.MapElements()); } },

    { "marker", IsType<winrt::Windows::UI::Xaml::Media::TimelineMarkerRoutedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Media::TimelineMarkerRoutedEventArgs>(); return winrt::box_value(ea.Marker()); } },

    { "maxViewport", IsType<winrt::Windows::UI::Xaml::EffectiveViewportChangedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::EffectiveViewportChangedEventArgs>(); return winrt::box_value(ea.MaxViewport()); } },

    { "mediaType", IsType<winrt::Windows::UI::Xaml::Controls::WebViewUnviewableContentIdentifiedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::WebViewUnviewableContentIdentifiedEventArgs>(); return winrt::box_value(ea.MediaType()); } },

    { "mode", IsType<winrt::Windows::UI::Xaml::Input::ManipulationStartingRoutedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::ManipulationStartingRoutedEventArgs>(); return winrt::box_value(static_cast<uint32_t>(ea.Mode())); } },

    { "modifiers", IsType<winrt::Windows::UI::Xaml::DragEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::DragEventArgs>(); return winrt::box_value(static_cast<uint32_t>(ea.Modifiers())); } },

    { "modifiers", IsType<winrt::Windows::UI::Xaml::Input::ProcessKeyboardAcceleratorEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::ProcessKeyboardAcceleratorEventArgs>(); return winrt::box_value(static_cast<uint32_t>(ea.Modifiers())); } },

    { "navigationMode", IsType<winrt::Windows::UI::Xaml::Navigation::NavigatingCancelEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Navigation::NavigatingCancelEventArgs>(); return winrt::box_value(static_cast<uint32_t>(ea.NavigationMode())); } },

    { "navigationMode", IsType<winrt::Windows::UI::Xaml::Navigation::NavigationEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Navigation::NavigationEventArgs>(); return winrt::box_value(static_cast<uint32_t>(ea.NavigationMode())); } },

    { "navigationTransitionInfo", IsType<winrt::Windows::UI::Xaml::Navigation::NavigatingCancelEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Navigation::NavigatingCancelEventArgs>(); return winrt::box_value(ea.NavigationTransitionInfo()); } },

    { "navigationTransitionInfo", IsType<winrt::Windows::UI::Xaml::Navigation::NavigationEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Navigation::NavigationEventArgs>(); return winrt::box_value(ea.NavigationTransitionInfo()); } },

    { "newColor", IsType<winrt::Windows::UI::Xaml::Controls::ColorChangedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::ColorChangedEventArgs>(); return winrt::box_value(ea.NewColor()); } },

    { "newDate", IsType<winrt::Windows::UI::Xaml::Controls::CalendarDatePickerDateChangedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::CalendarDatePickerDateChangedEventArgs>(); return winrt::box_value(ea.NewDate()); } },

    { "newDate", IsType<winrt::Windows::UI::Xaml::Controls::DatePickedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::DatePickedEventArgs>(); return winrt::box_value(ea.NewDate()); } },

    { "newDate", IsType<winrt::Windows::UI::Xaml::Controls::DatePickerSelectedValueChangedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::DatePickerSelectedValueChangedEventArgs>(); return winrt::box_value(ea.NewDate()); } },

    { "newFocusedElement", IsType<winrt::Windows::UI::Xaml::Input::GettingFocusEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::GettingFocusEventArgs>(); return winrt::box_value(ea.NewFocusedElement()); } },

    { "newFocusedElement", IsType<winrt::Windows::UI::Xaml::Input::LosingFocusEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::LosingFocusEventArgs>(); return winrt::box_value(ea.NewFocusedElement()); } },

    { "newSize", IsType<winrt::Windows::UI::Xaml::SizeChangedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::SizeChangedEventArgs>(); return winrt::box_value(ea.NewSize()); } },

    { "newState", IsType<winrt::Windows::UI::Xaml::Controls::RefreshStateChangedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::RefreshStateChangedEventArgs>(); return winrt::box_value(static_cast<uint32_t>(ea.NewState())); } },

    { "newText", IsType<winrt::Windows::UI::Xaml::Controls::TextBoxBeforeTextChangingEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::TextBoxBeforeTextChangingEventArgs>(); return winrt::box_value(ea.NewText()); } },

    { "newTime", IsType<winrt::Windows::UI::Xaml::Controls::TimePickedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::TimePickedEventArgs>(); return winrt::box_value(ea.NewTime()); } },

    { "newTime", IsType<winrt::Windows::UI::Xaml::Controls::TimePickerSelectedValueChangedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::TimePickerSelectedValueChangedEventArgs>(); return winrt::box_value(ea.NewTime()); } },

    { "newValue", IsType<winrt::Windows::UI::Xaml::DataContextChangedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::DataContextChangedEventArgs>(); return winrt::box_value(ea.NewValue()); } },

    { "newValue", IsType<winrt::Windows::UI::Xaml::DependencyPropertyChangedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::DependencyPropertyChangedEventArgs>(); return winrt::box_value(ea.NewValue()); } },

    { "newValue", IsType<winrt::Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventArgs>(); return winrt::box_value(ea.NewValue()); } },

    { "newValue", IsType<winrt::Windows::UI::Xaml::Controls::Primitives::ScrollEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::Primitives::ScrollEventArgs>(); return winrt::box_value(ea.NewValue()); } },

    { "node", IsType<winrt::Windows::UI::Xaml::Controls::TreeViewCollapsedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::TreeViewCollapsedEventArgs>(); return winrt::box_value(ea.Node()); } },

    { "node", IsType<winrt::Windows::UI::Xaml::Controls::TreeViewExpandingEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::TreeViewExpandingEventArgs>(); return winrt::box_value(ea.Node()); } },

    { "oldColor", IsType<winrt::Windows::UI::Xaml::Controls::ColorChangedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::ColorChangedEventArgs>(); return winrt::box_value(ea.OldColor()); } },

    { "oldDate", IsType<winrt::Windows::UI::Xaml::Controls::CalendarDatePickerDateChangedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::CalendarDatePickerDateChangedEventArgs>(); return winrt::box_value(ea.OldDate()); } },

    { "oldDate", IsType<winrt::Windows::UI::Xaml::Controls::DatePickedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::DatePickedEventArgs>(); return winrt::box_value(ea.OldDate()); } },

    { "oldDate", IsType<winrt::Windows::UI::Xaml::Controls::DatePickerSelectedValueChangedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::DatePickerSelectedValueChangedEventArgs>(); return winrt::box_value(ea.OldDate()); } },

    { "oldFocusedElement", IsType<winrt::Windows::UI::Xaml::Input::GettingFocusEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::GettingFocusEventArgs>(); return winrt::box_value(ea.OldFocusedElement()); } },

    { "oldFocusedElement", IsType<winrt::Windows::UI::Xaml::Input::LosingFocusEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::LosingFocusEventArgs>(); return winrt::box_value(ea.OldFocusedElement()); } },

    { "oldState", IsType<winrt::Windows::UI::Xaml::Controls::RefreshStateChangedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::RefreshStateChangedEventArgs>(); return winrt::box_value(static_cast<uint32_t>(ea.OldState())); } },

    { "oldTime", IsType<winrt::Windows::UI::Xaml::Controls::TimePickedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::TimePickedEventArgs>(); return winrt::box_value(ea.OldTime()); } },

    { "oldTime", IsType<winrt::Windows::UI::Xaml::Controls::TimePickerSelectedValueChangedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::TimePickerSelectedValueChangedEventArgs>(); return winrt::box_value(ea.OldTime()); } },

    { "oldValue", IsType<winrt::Windows::UI::Xaml::DependencyPropertyChangedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::DependencyPropertyChangedEventArgs>(); return winrt::box_value(ea.OldValue()); } },

    { "oldValue", IsType<winrt::Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventArgs>(); return winrt::box_value(ea.OldValue()); } },

    { "originalKey", IsType<winrt::Windows::UI::Xaml::Input::KeyRoutedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::KeyRoutedEventArgs>(); return winrt::box_value(static_cast<uint32_t>(ea.OriginalKey())); } },

    { "originalSource", IsType<winrt::Windows::UI::Xaml::RoutedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::RoutedEventArgs>(); return winrt::box_value(ea.OriginalSource()); } },

    { "parameter", IsType<winrt::Windows::UI::Xaml::Navigation::NavigatingCancelEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Navigation::NavigatingCancelEventArgs>(); return winrt::box_value(ea.Parameter()); } },

    { "parameter", IsType<winrt::Windows::UI::Xaml::Navigation::NavigationEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Navigation::NavigationEventArgs>(); return winrt::box_value(ea.Parameter()); } },

    { "permissionRequest", IsType<winrt::Windows::UI::Xaml::Controls::WebViewPermissionRequestedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::WebViewPermissionRequestedEventArgs>(); return winrt::box_value(ea.PermissionRequest()); } },

    { "phase", IsType<winrt::Windows::UI::Xaml::Controls::CalendarViewDayItemChangingEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::CalendarViewDayItemChangingEventArgs>(); return winrt::box_value(ea.Phase()); } },

    { "phase", IsType<winrt::Windows::UI::Xaml::Controls::ContainerContentChangingEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::ContainerContentChangingEventArgs>(); return winrt::box_value(ea.Phase()); } },

    { "pivot", IsType<winrt::Windows::UI::Xaml::Input::ManipulationStartingRoutedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::ManipulationStartingRoutedEventArgs>(); return winrt::box_value(ea.Pivot()); } },

    { "pointer", IsType<winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::PointerRoutedEventArgs>(); return winrt::box_value(ea.Pointer()); } },

    { "pointerDeviceType", IsType<winrt::Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs>(); return winrt::box_value(static_cast<uint32_t>(ea.PointerDeviceType())); } },

    { "pointerDeviceType", IsType<winrt::Windows::UI::Xaml::Input::HoldingRoutedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::HoldingRoutedEventArgs>(); return winrt::box_value(static_cast<uint32_t>(ea.PointerDeviceType())); } },

    { "pointerDeviceType", IsType<winrt::Windows::UI::Xaml::Input::ManipulationCompletedRoutedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::ManipulationCompletedRoutedEventArgs>(); return winrt::box_value(static_cast<uint32_t>(ea.PointerDeviceType())); } },

    { "pointerDeviceType", IsType<winrt::Windows::UI::Xaml::Input::ManipulationDeltaRoutedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::ManipulationDeltaRoutedEventArgs>(); return winrt::box_value(static_cast<uint32_t>(ea.PointerDeviceType())); } },

    { "pointerDeviceType", IsType<winrt::Windows::UI::Xaml::Input::ManipulationInertiaStartingRoutedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::ManipulationInertiaStartingRoutedEventArgs>(); return winrt::box_value(static_cast<uint32_t>(ea.PointerDeviceType())); } },

    { "pointerDeviceType", IsType<winrt::Windows::UI::Xaml::Input::ManipulationStartedRoutedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::ManipulationStartedRoutedEventArgs>(); return winrt::box_value(static_cast<uint32_t>(ea.PointerDeviceType())); } },

    { "pointerDeviceType", IsType<winrt::Windows::UI::Xaml::Input::RightTappedRoutedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::RightTappedRoutedEventArgs>(); return winrt::box_value(static_cast<uint32_t>(ea.PointerDeviceType())); } },

    { "pointerDeviceType", IsType<winrt::Windows::UI::Xaml::Input::TappedRoutedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::TappedRoutedEventArgs>(); return winrt::box_value(static_cast<uint32_t>(ea.PointerDeviceType())); } },

    { "position", IsType<winrt::Windows::UI::Xaml::Input::ManipulationCompletedRoutedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::ManipulationCompletedRoutedEventArgs>(); return winrt::box_value(ea.Position()); } },

    { "position", IsType<winrt::Windows::UI::Xaml::Input::ManipulationDeltaRoutedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::ManipulationDeltaRoutedEventArgs>(); return winrt::box_value(ea.Position()); } },

    { "position", IsType<winrt::Windows::UI::Xaml::Input::ManipulationStartedRoutedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::ManipulationStartedRoutedEventArgs>(); return winrt::box_value(ea.Position()); } },

    { "position", IsType<winrt::Windows::UI::Xaml::Controls::Maps::MapContextRequestedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::Maps::MapContextRequestedEventArgs>(); return winrt::box_value(ea.Position()); } },

    { "position", IsType<winrt::Windows::UI::Xaml::Controls::Maps::MapElementClickEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::Maps::MapElementClickEventArgs>(); return winrt::box_value(ea.Position()); } },

    { "position", IsType<winrt::Windows::UI::Xaml::Controls::Maps::MapElementPointerEnteredEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::Maps::MapElementPointerEnteredEventArgs>(); return winrt::box_value(ea.Position()); } },

    { "position", IsType<winrt::Windows::UI::Xaml::Controls::Maps::MapElementPointerExitedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::Maps::MapElementPointerExitedEventArgs>(); return winrt::box_value(ea.Position()); } },

    { "position", IsType<winrt::Windows::UI::Xaml::Controls::Maps::MapInputEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::Maps::MapInputEventArgs>(); return winrt::box_value(ea.Position()); } },

    { "position", IsType<winrt::Windows::UI::Xaml::Controls::Maps::MapRightTappedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::Maps::MapRightTappedEventArgs>(); return winrt::box_value(ea.Position()); } },

    { "pressedKeys", IsType<winrt::Windows::UI::Xaml::Input::AccessKeyDisplayRequestedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::AccessKeyDisplayRequestedEventArgs>(); return winrt::box_value(ea.PressedKeys()); } },

    { "previousSize", IsType<winrt::Windows::UI::Xaml::SizeChangedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::SizeChangedEventArgs>(); return winrt::box_value(ea.PreviousSize()); } },

    { "property", IsType<winrt::Windows::UI::Xaml::DependencyPropertyChangedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::DependencyPropertyChangedEventArgs>(); return winrt::box_value(ea.Property()); } },

    { "queryText", IsType<winrt::Windows::UI::Xaml::Controls::AutoSuggestBoxQuerySubmittedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::AutoSuggestBoxQuerySubmittedEventArgs>(); return winrt::box_value(ea.QueryText()); } },

    { "queryText", IsType<winrt::Windows::UI::Xaml::Controls::SearchBoxQueryChangedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::SearchBoxQueryChangedEventArgs>(); return winrt::box_value(ea.QueryText()); } },

    { "queryText", IsType<winrt::Windows::UI::Xaml::Controls::SearchBoxQuerySubmittedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::SearchBoxQuerySubmittedEventArgs>(); return winrt::box_value(ea.QueryText()); } },

    { "queryText", IsType<winrt::Windows::UI::Xaml::Controls::SearchBoxSuggestionsRequestedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::SearchBoxSuggestionsRequestedEventArgs>(); return winrt::box_value(ea.QueryText()); } },

    { "reason", IsType<winrt::Windows::UI::Xaml::Controls::AutoSuggestBoxTextChangedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::AutoSuggestBoxTextChangedEventArgs>(); return winrt::box_value(static_cast<uint32_t>(ea.Reason())); } },

    { "recommendedNavigationTransitionInfo", IsType<winrt::Windows::UI::Xaml::Controls::NavigationViewItemInvokedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::NavigationViewItemInvokedEventArgs>(); return winrt::box_value(ea.RecommendedNavigationTransitionInfo()); } },

    { "recommendedNavigationTransitionInfo", IsType<winrt::Windows::UI::Xaml::Controls::NavigationViewSelectionChangedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::NavigationViewSelectionChangedEventArgs>(); return winrt::box_value(ea.RecommendedNavigationTransitionInfo()); } },

    { "referrer", IsType<winrt::Windows::UI::Xaml::Controls::WebViewNewWindowRequestedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::WebViewNewWindowRequestedEventArgs>(); return winrt::box_value(ea.Referrer()); } },

    { "referrer", IsType<winrt::Windows::UI::Xaml::Controls::WebViewUnviewableContentIdentifiedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::WebViewUnviewableContentIdentifiedEventArgs>(); return winrt::box_value(ea.Referrer()); } },

    { "removedDates", IsType<winrt::Windows::UI::Xaml::Controls::CalendarViewSelectedDatesChangedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::CalendarViewSelectedDatesChangedEventArgs>(); return winrt::box_value(ea.RemovedDates()); } },

    { "removedItems", IsType<winrt::Windows::UI::Xaml::Controls::ItemsPickedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::ItemsPickedEventArgs>(); return winrt::box_value(ea.RemovedItems()); } },

    { "removedItems", IsType<winrt::Windows::UI::Xaml::Controls::SelectionChangedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::SelectionChangedEventArgs>(); return winrt::box_value(ea.RemovedItems()); } },

    { "removedSections", IsType<winrt::Windows::UI::Xaml::Controls::SectionsInViewChangedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::SectionsInViewChangedEventArgs>(); return winrt::box_value(ea.RemovedSections()); } },

    { "request", IsType<winrt::Windows::UI::Xaml::Controls::SearchBoxSuggestionsRequestedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::SearchBoxSuggestionsRequestedEventArgs>(); return winrt::box_value(ea.Request()); } },

    { "request", IsType<winrt::Windows::UI::Xaml::Controls::WebViewWebResourceRequestedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::WebViewWebResourceRequestedEventArgs>(); return winrt::box_value(ea.Request()); } },

    { "response", IsType<winrt::Windows::UI::Xaml::Controls::WebViewWebResourceRequestedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::WebViewWebResourceRequestedEventArgs>(); return winrt::box_value(ea.Response()); } },

    { "result", IsType<winrt::Windows::UI::Xaml::Controls::ContentDialogClosedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::ContentDialogClosedEventArgs>(); return winrt::box_value(static_cast<uint32_t>(ea.Result())); } },

    { "result", IsType<winrt::Windows::UI::Xaml::Controls::ContentDialogClosingEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::ContentDialogClosingEventArgs>(); return winrt::box_value(static_cast<uint32_t>(ea.Result())); } },

    { "rotationBehavior", IsType<winrt::Windows::UI::Xaml::Input::ManipulationInertiaStartingRoutedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::ManipulationInertiaStartingRoutedEventArgs>(); return winrt::box_value(ea.RotationBehavior()); } },

    { "scrollEventType", IsType<winrt::Windows::UI::Xaml::Controls::Primitives::ScrollEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::Primitives::ScrollEventArgs>(); return winrt::box_value(static_cast<uint32_t>(ea.ScrollEventType())); } },

    { "section", IsType<winrt::Windows::UI::Xaml::Controls::HubSectionHeaderClickEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::HubSectionHeaderClickEventArgs>(); return winrt::box_value(ea.Section()); } },

    { "selectedItem", IsType<winrt::Windows::UI::Xaml::Controls::AutoSuggestBoxSuggestionChosenEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::AutoSuggestBoxSuggestionChosenEventArgs>(); return winrt::box_value(ea.SelectedItem()); } },

    { "selectedItem", IsType<winrt::Windows::UI::Xaml::Controls::NavigationViewSelectionChangedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::NavigationViewSelectionChangedEventArgs>(); return winrt::box_value(ea.SelectedItem()); } },

    { "selectedItemContainer", IsType<winrt::Windows::UI::Xaml::Controls::NavigationViewSelectionChangedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::NavigationViewSelectionChangedEventArgs>(); return winrt::box_value(ea.SelectedItemContainer()); } },

    { "selectionLength", IsType<winrt::Windows::UI::Xaml::Controls::RichEditBoxSelectionChangingEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::RichEditBoxSelectionChangingEventArgs>(); return winrt::box_value(ea.SelectionLength()); } },

    { "selectionLength", IsType<winrt::Windows::UI::Xaml::Controls::TextBoxSelectionChangingEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::TextBoxSelectionChangingEventArgs>(); return winrt::box_value(ea.SelectionLength()); } },

    { "selectionStart", IsType<winrt::Windows::UI::Xaml::Controls::RichEditBoxSelectionChangingEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::RichEditBoxSelectionChangingEventArgs>(); return winrt::box_value(ea.SelectionStart()); } },

    { "selectionStart", IsType<winrt::Windows::UI::Xaml::Controls::TextBoxSelectionChangingEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::TextBoxSelectionChangingEventArgs>(); return winrt::box_value(ea.SelectionStart()); } },

    { "sourceItem", IsType<winrt::Windows::UI::Xaml::Controls::SemanticZoomViewChangedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::SemanticZoomViewChangedEventArgs>(); return winrt::box_value(ea.SourceItem()); } },

    { "sourcePageType", IsType<winrt::Windows::UI::Xaml::Navigation::NavigatingCancelEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Navigation::NavigatingCancelEventArgs>(); return winrt::box_value(ea.SourcePageType()); } },

    { "sourcePageType", IsType<winrt::Windows::UI::Xaml::Navigation::NavigationEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Navigation::NavigationEventArgs>(); return winrt::box_value(ea.SourcePageType()); } },

    { "sourcePageType", IsType<winrt::Windows::UI::Xaml::Navigation::NavigationFailedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Navigation::NavigationFailedEventArgs>(); return winrt::box_value(ea.SourcePageType()); } },

    { "startIndex", IsType<winrt::Windows::UI::Xaml::Controls::TextCompositionChangedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::TextCompositionChangedEventArgs>(); return winrt::box_value(ea.StartIndex()); } },

    { "startIndex", IsType<winrt::Windows::UI::Xaml::Controls::TextCompositionEndedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::TextCompositionEndedEventArgs>(); return winrt::box_value(ea.StartIndex()); } },

    { "startIndex", IsType<winrt::Windows::UI::Xaml::Controls::TextCompositionStartedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::TextCompositionStartedEventArgs>(); return winrt::box_value(ea.StartIndex()); } },

    { "stencilButton", IsType<winrt::Windows::UI::Xaml::Controls::InkToolbarIsStencilButtonCheckedChangedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::InkToolbarIsStencilButtonCheckedChangedEventArgs>(); return winrt::box_value(ea.StencilButton()); } },

    { "stencilKind", IsType<winrt::Windows::UI::Xaml::Controls::InkToolbarIsStencilButtonCheckedChangedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::InkToolbarIsStencilButtonCheckedChangedEventArgs>(); return winrt::box_value(static_cast<uint32_t>(ea.StencilKind())); } },

    { "stopPageScriptExecution", IsType<winrt::Windows::UI::Xaml::Controls::WebViewLongRunningScriptDetectedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::WebViewLongRunningScriptDetectedEventArgs>(); return winrt::box_value(ea.StopPageScriptExecution()); } },

    { "streamKind", IsType<winrt::Windows::UI::Xaml::Media::PartialMediaFailureDetectedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Media::PartialMediaFailureDetectedEventArgs>(); return winrt::box_value(static_cast<uint32_t>(ea.StreamKind())); } },

    { "tag", IsType<winrt::Windows::UI::Xaml::Controls::SearchBoxResultSuggestionChosenEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::SearchBoxResultSuggestionChosenEventArgs>(); return winrt::box_value(ea.Tag()); } },

    { "targetElement", IsType<winrt::Windows::UI::Xaml::BringIntoViewRequestedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::BringIntoViewRequestedEventArgs>(); return winrt::box_value(ea.TargetElement()); } },

    { "targetRect", IsType<winrt::Windows::UI::Xaml::BringIntoViewRequestedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::BringIntoViewRequestedEventArgs>(); return winrt::box_value(ea.TargetRect()); } },

    { "text", IsType<winrt::Windows::UI::Xaml::Controls::ComboBoxTextSubmittedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::ComboBoxTextSubmittedEventArgs>(); return winrt::box_value(ea.Text()); } },

    { "textRange", IsType<winrt::Windows::UI::Xaml::Controls::ContentLinkChangedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::ContentLinkChangedEventArgs>(); return winrt::box_value(ea.TextRange()); } },

    { "translationBehavior", IsType<winrt::Windows::UI::Xaml::Input::ManipulationInertiaStartingRoutedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::ManipulationInertiaStartingRoutedEventArgs>(); return winrt::box_value(ea.TranslationBehavior()); } },

    { "uiElement", IsType<winrt::Windows::UI::Xaml::Controls::CleanUpVirtualizedItemEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::CleanUpVirtualizedItemEventArgs>(); return winrt::box_value(ea.UIElement()); } },

    { "uri", IsType<winrt::Windows::UI::Xaml::Navigation::NavigationEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Navigation::NavigationEventArgs>(); return winrt::box_value(ea.Uri()); } },

    { "uri", IsType<winrt::Windows::UI::Xaml::Controls::WebViewContentLoadingEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::WebViewContentLoadingEventArgs>(); return winrt::box_value(ea.Uri()); } },

    { "uri", IsType<winrt::Windows::UI::Xaml::Controls::WebViewDOMContentLoadedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::WebViewDOMContentLoadedEventArgs>(); return winrt::box_value(ea.Uri()); } },

    { "uri", IsType<winrt::Windows::UI::Xaml::Controls::WebViewNavigationCompletedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::WebViewNavigationCompletedEventArgs>(); return winrt::box_value(ea.Uri()); } },

    { "uri", IsType<winrt::Windows::UI::Xaml::Controls::WebViewNavigationFailedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::WebViewNavigationFailedEventArgs>(); return winrt::box_value(ea.Uri()); } },

    { "uri", IsType<winrt::Windows::UI::Xaml::Controls::WebViewNavigationStartingEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::WebViewNavigationStartingEventArgs>(); return winrt::box_value(ea.Uri()); } },

    { "uri", IsType<winrt::Windows::UI::Xaml::Controls::WebViewNewWindowRequestedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::WebViewNewWindowRequestedEventArgs>(); return winrt::box_value(ea.Uri()); } },

    { "uri", IsType<winrt::Windows::UI::Xaml::Controls::WebViewUnsupportedUriSchemeIdentifiedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::WebViewUnsupportedUriSchemeIdentifiedEventArgs>(); return winrt::box_value(ea.Uri()); } },

    { "uri", IsType<winrt::Windows::UI::Xaml::Controls::WebViewUnviewableContentIdentifiedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::WebViewUnviewableContentIdentifiedEventArgs>(); return winrt::box_value(ea.Uri()); } },

    { "value", IsType<winrt::Windows::UI::Xaml::Controls::CleanUpVirtualizedItemEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::CleanUpVirtualizedItemEventArgs>(); return winrt::box_value(ea.Value()); } },

    { "value", IsType<winrt::Windows::UI::Xaml::Controls::NotifyEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::NotifyEventArgs>(); return winrt::box_value(ea.Value()); } },

    { "velocities", IsType<winrt::Windows::UI::Xaml::Input::ManipulationCompletedRoutedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::ManipulationCompletedRoutedEventArgs>(); return winrt::box_value(ea.Velocities()); } },

    { "velocities", IsType<winrt::Windows::UI::Xaml::Input::ManipulationDeltaRoutedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::ManipulationDeltaRoutedEventArgs>(); return winrt::box_value(ea.Velocities()); } },

    { "velocities", IsType<winrt::Windows::UI::Xaml::Input::ManipulationInertiaStartingRoutedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Input::ManipulationInertiaStartingRoutedEventArgs>(); return winrt::box_value(ea.Velocities()); } },

    { "verticalAlignmentRatio", IsType<winrt::Windows::UI::Xaml::BringIntoViewRequestedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::BringIntoViewRequestedEventArgs>(); return winrt::box_value(ea.VerticalAlignmentRatio()); } },

    { "verticalChange", IsType<winrt::Windows::UI::Xaml::Controls::Primitives::DragCompletedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::Primitives::DragCompletedEventArgs>(); return winrt::box_value(ea.VerticalChange()); } },

    { "verticalChange", IsType<winrt::Windows::UI::Xaml::Controls::Primitives::DragDeltaEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::Primitives::DragDeltaEventArgs>(); return winrt::box_value(ea.VerticalChange()); } },

    { "verticalOffset", IsType<winrt::Windows::UI::Xaml::BringIntoViewRequestedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::BringIntoViewRequestedEventArgs>(); return winrt::box_value(ea.VerticalOffset()); } },

    { "verticalOffset", IsType<winrt::Windows::UI::Xaml::Controls::Primitives::DragStartedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::Primitives::DragStartedEventArgs>(); return winrt::box_value(ea.VerticalOffset()); } },

    { "webErrorStatus", IsType<winrt::Windows::UI::Xaml::Controls::WebViewNavigationCompletedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::WebViewNavigationCompletedEventArgs>(); return winrt::box_value(static_cast<uint32_t>(ea.WebErrorStatus())); } },

    { "webErrorStatus", IsType<winrt::Windows::UI::Xaml::Controls::WebViewNavigationFailedEventArgs>, [](const winrt::Windows::Foundation::IInspectable& obj) { auto ea = obj.as<winrt::Windows::UI::Xaml::Controls::WebViewNavigationFailedEventArgs>(); return winrt::box_value(static_cast<uint32_t>(ea.WebErrorStatus())); } },

};