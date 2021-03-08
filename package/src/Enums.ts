export enum ManipulationModes {
  None = 0,
  TranslateX = 1,
  TranslateY = 2,
  TranslateRailsX = 4,
  TranslateRailsY = 8,
  Rotate = 16,
  Scale = 32,
  TranslateInertia = 64,
  RotateInertia = 128,
  ScaleInertia = 256,
  All = 65535,
  System = 65536,
}

export enum Visibility {
  Visible = 0,
  Collapsed = 1,
}

export enum ElementCompositeMode {
  Inherit = 0,
  SourceOver = 1,
  MinBlend = 2,
}

export enum ElementHighContrastAdjustment {
  None = 0,
  Application = -2147483648,
  Auto = -1,
}

export enum XYFocusNavigationStrategy {
  Auto = 0,
  Projection = 1,
  NavigationDirectionDistance = 2,
  RectilinearDistance = 3,
}

export enum XYFocusKeyboardNavigationMode {
  Auto = 0,
  Enabled = 1,
  Disabled = 2,
}

export enum KeyboardNavigationMode {
  Local = 0,
  Cycle = 1,
  Once = 2,
}

export enum KeyTipPlacementMode {
  Auto = 0,
  Bottom = 1,
  Top = 2,
  Left = 3,
  Right = 4,
  Center = 5,
  Hidden = 6,
}

export enum KeyboardAcceleratorPlacementMode {
  Auto = 0,
  Hidden = 1,
}

export enum VerticalAlignment {
  Top = 0,
  Center = 1,
  Bottom = 2,
  Stretch = 3,
}

export enum HorizontalAlignment {
  Left = 0,
  Center = 1,
  Right = 2,
  Stretch = 3,
}

export enum FlowDirection {
  LeftToRight = 0,
  RightToLeft = 1,
}

export enum ElementTheme {
  Default = 0,
  Light = 1,
  Dark = 2,
}

export enum FontStyle {
  Normal = 0,
  Oblique = 1,
  Italic = 2,
}

export enum FontStretch {
  Undefined = 0,
  UltraCondensed = 1,
  ExtraCondensed = 2,
  Condensed = 3,
  SemiCondensed = 4,
  Normal = 5,
  SemiExpanded = 6,
  Expanded = 7,
  ExtraExpanded = 8,
  UltraExpanded = 9,
}

export enum RequiresPointer {
  Never = 0,
  WhenEngaged = 1,
  WhenFocused = 2,
}

export enum ElementSoundMode {
  Default = 0,
  FocusOnly = 1,
  Off = 2,
}

export enum BackgroundSizing {
  InnerBorderEdge = 0,
  OuterBorderEdge = 1,
}

export enum AppBarClosedDisplayMode {
  Compact = 0,
  Minimal = 1,
  Hidden = 2,
}

export enum LightDismissOverlayMode {
  Auto = 0,
  On = 1,
  Off = 2,
}

export enum ClickMode {
  Release = 0,
  Press = 1,
  Hover = 2,
}

export enum CommandBarLabelPosition {
  Default = 0,
  Collapsed = 1,
}

export enum DayOfWeek {
  Sunday = 0,
  Monday = 1,
  Tuesday = 2,
  Wednesday = 3,
  Thursday = 4,
  Friday = 5,
  Saturday = 6,
}

export enum CalendarViewDisplayMode {
  Month = 0,
  Year = 1,
  Decade = 2,
}

export enum CalendarViewSelectionMode {
  None = 0,
  Single = 1,
  Multiple = 2,
}

export enum Stretch {
  None = 0,
  Fill = 1,
  Uniform = 2,
  UniformToFill = 3,
}

export enum ColorSpectrumShape {
  Box = 0,
  Ring = 1,
}

export enum ColorSpectrumComponents {
  HueValue = 0,
  ValueHue = 1,
  HueSaturation = 2,
  SaturationHue = 3,
  SaturationValue = 4,
  ValueSaturation = 5,
}

export enum ComboBoxSelectionChangedTrigger {
  Committed = 0,
  Always = 1,
}

export enum CommandBarOverflowButtonVisibility {
  Auto = 0,
  Visible = 1,
  Collapsed = 2,
}

export enum CommandBarDefaultLabelPosition {
  Bottom = 0,
  Right = 1,
  Collapsed = 2,
}

export enum FlyoutPlacementMode {
  Top = 0,
  Bottom = 1,
  Left = 2,
  Right = 3,
  Full = 4,
  TopEdgeAlignedLeft = 5,
  TopEdgeAlignedRight = 6,
  BottomEdgeAlignedLeft = 7,
  BottomEdgeAlignedRight = 8,
  LeftEdgeAlignedTop = 9,
  LeftEdgeAlignedBottom = 10,
  RightEdgeAlignedTop = 11,
  RightEdgeAlignedBottom = 12,
  Auto = 13,
}

export enum FlyoutShowMode {
  Auto = 0,
  Standard = 1,
  Transient = 2,
  TransientWithDismissOnPointerMoveAway = 3,
}

export enum ContentDialogButton {
  None = 0,
  Primary = 1,
  Secondary = 2,
  Close = 3,
}

export enum TextLineBounds {
  Full = 0,
  TrimToCapHeight = 1,
  TrimToBaseline = 2,
  Tight = 3,
}

export enum OpticalMarginAlignment {
  None = 0,
  TrimSideBearings = 1,
}

export enum TextWrapping {
  NoWrap = 1,
  Wrap = 2,
  WrapWholeWords = 3,
}

export enum LineStackingStrategy {
  MaxHeight = 0,
  BlockLineHeight = 1,
  BaselineToBaseline = 2,
}

export enum Orientation {
  Vertical = 0,
  Horizontal = 1,
}

export enum ListViewSelectionMode {
  None = 0,
  Single = 1,
  Multiple = 2,
  Extended = 3,
}

export enum IncrementalLoadingTrigger {
  None = 0,
  Edge = 1,
}

export enum ListViewReorderMode {
  Disabled = 0,
  Enabled = 1,
}

export enum HandwritingPanelPlacementAlignment {
  Auto = 0,
  TopLeft = 1,
  TopRight = 2,
  BottomLeft = 3,
  BottomRight = 4,
}

export enum InkToolbarInitialControls {
  All = 0,
  None = 1,
  PensOnly = 2,
  AllExceptPens = 3,
}

export enum InkToolbarButtonFlyoutPlacement {
  Auto = 0,
  Top = 1,
  Bottom = 2,
  Left = 3,
  Right = 4,
}

export enum InkToolbarFlyoutItemKind {
  Simple = 0,
  Radio = 1,
  Check = 2,
  RadioCheck = 3,
}

export enum InkToolbarStencilKind {
  Ruler = 0,
  Protractor = 1,
}

export enum GroupHeaderPlacement {
  Top = 0,
  Left = 1,
}

export enum SelectionMode {
  Single = 0,
  Multiple = 1,
  Extended = 2,
}

export enum ListPickerFlyoutSelectionMode {
  Single = 0,
  Multiple = 1,
}

export enum MapWatermarkMode {
  Automatic = 0,
  On = 1,
}

export enum MapColorScheme {
  Light = 0,
  Dark = 1,
}

export enum MapInteractionMode {
  Auto = 0,
  Disabled = 1,
  GestureOnly = 2,
  PointerAndKeyboard = 2,
  ControlOnly = 3,
  GestureAndControl = 4,
  PointerKeyboardAndControl = 4,
  PointerOnly = 5,
}

export enum MapPanInteractionMode {
  Auto = 0,
  Disabled = 1,
}

export enum MapProjection {
  WebMercator = 0,
  Globe = 1,
}

export enum Stereo3DVideoRenderMode {
  Mono = 0,
  Stereo = 1,
}

export enum Stereo3DVideoPackingMode {
  None = 0,
  SideBySide = 1,
  TopBottom = 2,
}

export enum AudioDeviceType {
  Console = 0,
  Multimedia = 1,
  Communications = 2,
}

export enum AudioCategory {
  Other = 0,
  ForegroundOnlyMedia = 1,
  BackgroundCapableMedia = 2,
  Communications = 3,
  Alerts = 4,
  SoundEffects = 5,
  GameEffects = 6,
  GameMedia = 7,
  GameChat = 8,
  Speech = 9,
  Movie = 10,
  Media = 11,
}

export enum FastPlayFallbackBehaviour {
  Skip = 0,
  Hide = 1,
  Disable = 2,
}

export enum NavigationViewBackButtonVisible {
  Collapsed = 0,
  Visible = 1,
  Auto = 2,
}

export enum NavigationViewShoulderNavigationEnabled {
  WhenSelectionFollowsFocus = 0,
  Always = 1,
  Never = 2,
}

export enum NavigationViewSelectionFollowsFocus {
  Disabled = 0,
  Enabled = 1,
}

export enum NavigationViewPaneDisplayMode {
  Auto = 0,
  Left = 1,
  Top = 2,
  LeftCompact = 3,
  LeftMinimal = 4,
}

export enum NavigationViewOverflowLabelMode {
  MoreLabel = 0,
  NoLabel = 1,
}

export enum ParallaxSourceOffsetKind {
  Absolute = 0,
  Relative = 1,
}

export enum TextReadingOrder {
  Default = 0,
  UseFlowDirection = 0,
  DetectFromContent = 1,
}

export enum PasswordRevealMode {
  Peek = 0,
  Hidden = 1,
  Visible = 2,
}

export enum PivotHeaderFocusVisualPlacement {
  ItemHeaders = 0,
  SelectedItemHeader = 1,
}

export enum TickPlacement {
  None = 0,
  TopLeft = 1,
  BottomRight = 2,
  Outside = 3,
  Inline = 4,
}

export enum SliderSnapsTo {
  StepValues = 0,
  Ticks = 1,
}

export enum ColorPickerHsvChannel {
  Hue = 0,
  Saturation = 1,
  Value = 2,
  Alpha = 3,
}

export enum ListViewItemPresenterCheckMode {
  Inline = 0,
  Overlay = 1,
}

export enum ScrollingIndicatorMode {
  None = 0,
  TouchIndicator = 1,
  MouseIndicator = 2,
}

export enum RefreshPullDirection {
  LeftToRight = 0,
  TopToBottom = 1,
  RightToLeft = 2,
  BottomToTop = 3,
}

export enum RefreshVisualizerOrientation {
  Auto = 0,
  Normal = 1,
  Rotate90DegreesCounterclockwise = 2,
  Rotate270DegreesCounterclockwise = 3,
}

export enum TextAlignment {
  Center = 0,
  Left = 1,
  Start = 1,
  Right = 2,
  End = 2,
  Justify = 3,
  DetectFromContent = 4,
}

export enum CandidateWindowAlignment {
  Default = 0,
  BottomEdge = 1,
}

export enum RichEditClipboardFormat {
  AllFormats = 0,
  PlainText = 1,
}

export enum DisabledFormattingAccelerators {
  None = 0,
  Bold = 1,
  Italic = 2,
  Underline = 4,
  All = -1,
}

export enum CharacterCasing {
  Normal = 0,
  Lower = 1,
  Upper = 2,
}

export enum TextTrimming {
  None = 0,
  CharacterEllipsis = 1,
  WordEllipsis = 2,
  Clip = 3,
}

export enum TextDecorations {
  None = 0,
  Underline = 1,
  Strikethrough = 2,
}

export enum SnapPointsType {
  None = 0,
  Optional = 1,
  Mandatory = 2,
  OptionalSingle = 3,
  MandatorySingle = 4,
}

export enum SnapPointsAlignment {
  Near = 0,
  Center = 1,
  Far = 2,
}

export enum ScrollMode {
  Disabled = 0,
  Enabled = 1,
  Auto = 2,
}

export enum ScrollBarVisibility {
  Disabled = 0,
  Auto = 1,
  Hidden = 2,
  Visible = 3,
}

export enum ZoomMode {
  Disabled = 0,
  Enabled = 1,
}

export enum SplitViewPanePlacement {
  Left = 0,
  Right = 1,
}

export enum SplitViewDisplayMode {
  Overlay = 0,
  Inline = 1,
  CompactOverlay = 2,
  CompactInline = 3,
}

export enum Symbol {
  Previous = 57600,
  Next = 57601,
  Play = 57602,
  Pause = 57603,
  Edit = 57604,
  Save = 57605,
  Clear = 57606,
  Delete = 57607,
  Remove = 57608,
  Add = 57609,
  Cancel = 57610,
  Accept = 57611,
  More = 57612,
  Redo = 57613,
  Undo = 57614,
  Home = 57615,
  Up = 57616,
  Forward = 57617,
  Back = 57618,
  Favorite = 57619,
  Camera = 57620,
  Setting = 57621,
  Video = 57622,
  Sync = 57623,
  Download = 57624,
  Mail = 57625,
  Find = 57626,
  Help = 57627,
  Upload = 57628,
  Emoji = 57629,
  TwoPage = 57630,
  LeaveChat = 57631,
  MailForward = 57632,
  Clock = 57633,
  Send = 57634,
  Crop = 57635,
  RotateCamera = 57636,
  People = 57637,
  OpenPane = 57638,
  ClosePane = 57639,
  World = 57640,
  Flag = 57641,
  PreviewLink = 57642,
  Globe = 57643,
  Trim = 57644,
  AttachCamera = 57645,
  ZoomIn = 57646,
  Bookmarks = 57647,
  Document = 57648,
  ProtectedDocument = 57649,
  Page = 57650,
  Bullets = 57651,
  Comment = 57652,
  MailFilled = 57653,
  ContactInfo = 57654,
  HangUp = 57655,
  ViewAll = 57656,
  MapPin = 57657,
  Phone = 57658,
  VideoChat = 57659,
  Switch = 57660,
  Contact = 57661,
  Rename = 57662,
  Pin = 57665,
  MusicInfo = 57666,
  Go = 57667,
  Keyboard = 57668,
  DockLeft = 57669,
  DockRight = 57670,
  DockBottom = 57671,
  Remote = 57672,
  Refresh = 57673,
  Rotate = 57674,
  Shuffle = 57675,
  List = 57676,
  Shop = 57677,
  SelectAll = 57678,
  Orientation = 57679,
  Import = 57680,
  ImportAll = 57681,
  BrowsePhotos = 57685,
  WebCam = 57686,
  Pictures = 57688,
  SaveLocal = 57689,
  Caption = 57690,
  Stop = 57691,
  ShowResults = 57692,
  Volume = 57693,
  Repair = 57694,
  Message = 57695,
  Page2 = 57696,
  CalendarDay = 57697,
  CalendarWeek = 57698,
  Calendar = 57699,
  Character = 57700,
  MailReplyAll = 57701,
  Read = 57702,
  Link = 57703,
  Account = 57704,
  ShowBcc = 57705,
  HideBcc = 57706,
  Cut = 57707,
  Attach = 57708,
  Paste = 57709,
  Filter = 57710,
  Copy = 57711,
  Emoji2 = 57712,
  Important = 57713,
  MailReply = 57714,
  SlideShow = 57715,
  Sort = 57716,
  Manage = 57720,
  AllApps = 57721,
  DisconnectDrive = 57722,
  MapDrive = 57723,
  NewWindow = 57724,
  OpenWith = 57725,
  ContactPresence = 57729,
  Priority = 57730,
  GoToToday = 57732,
  Font = 57733,
  FontColor = 57734,
  Contact2 = 57735,
  Folder = 57736,
  Audio = 57737,
  Placeholder = 57738,
  View = 57739,
  SetLockScreen = 57740,
  SetTile = 57741,
  ClosedCaption = 57744,
  StopSlideShow = 57745,
  Permissions = 57746,
  Highlight = 57747,
  DisableUpdates = 57748,
  UnFavorite = 57749,
  UnPin = 57750,
  OpenLocal = 57751,
  Mute = 57752,
  Italic = 57753,
  Underline = 57754,
  Bold = 57755,
  MoveToFolder = 57756,
  LikeDislike = 57757,
  Dislike = 57758,
  Like = 57759,
  AlignRight = 57760,
  AlignCenter = 57761,
  AlignLeft = 57762,
  Zoom = 57763,
  ZoomOut = 57764,
  OpenFile = 57765,
  OtherUser = 57766,
  Admin = 57767,
  Street = 57795,
  Map = 57796,
  ClearSelection = 57797,
  FontDecrease = 57798,
  FontIncrease = 57799,
  FontSize = 57800,
  CellPhone = 57801,
  ReShare = 57802,
  Tag = 57803,
  RepeatOne = 57804,
  RepeatAll = 57805,
  OutlineStar = 57806,
  SolidStar = 57807,
  Calculator = 57808,
  Directions = 57809,
  Target = 57810,
  Library = 57811,
  PhoneBook = 57812,
  Memo = 57813,
  Microphone = 57814,
  PostUpdate = 57815,
  BackToWindow = 57816,
  FullScreen = 57817,
  NewFolder = 57818,
  CalendarReply = 57819,
  UnSyncFolder = 57821,
  ReportHacked = 57822,
  SyncFolder = 57823,
  BlockContact = 57824,
  SwitchApps = 57825,
  AddFriend = 57826,
  TouchPointer = 57827,
  GoToStart = 57828,
  ZeroBars = 57829,
  OneBar = 57830,
  TwoBars = 57831,
  ThreeBars = 57832,
  FourBars = 57833,
  Scan = 58004,
  Preview = 58005,
  GlobalNavigationButton = 59136,
  Share = 59181,
  Print = 59209,
  XboxOneConsole = 59792,
}

export enum PlacementMode {
  Bottom = 2,
  Left = 9,
  Mouse = 7,
  Right = 4,
  Top = 10,
}

export enum TreeViewSelectionMode {
  None = 0,
  Single = 1,
  Multiple = 2,
}

export enum TwoPaneViewWideModeConfiguration {
  SinglePane = 0,
  LeftRight = 1,
  RightLeft = 2,
}

export enum TwoPaneViewTallModeConfiguration {
  SinglePane = 0,
  TopBottom = 1,
  BottomTop = 2,
}

export enum TwoPaneViewPriority {
  Pane1 = 0,
  Pane2 = 1,
}

export enum StretchDirection {
  UpOnly = 0,
  DownOnly = 1,
  Both = 2,
}

export enum StyleSimulations {
  None = 0,
  BoldSimulation = 1,
  ItalicSimulation = 2,
  BoldItalicSimulation = 3,
}

export enum PenLineCap {
  Flat = 0,
  Square = 1,
  Round = 2,
  Triangle = 3,
}

export enum PenLineJoin {
  Miter = 0,
  Bevel = 1,
  Round = 2,
}

export enum FillRule {
  EvenOdd = 0,
  Nonzero = 1,
}

