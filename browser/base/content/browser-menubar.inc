# -*- Mode: Java; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*-
# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

       <menubar id="main-menubar">
          <script src="chrome://browser/content/browser-menubar.js" />
            <menu id="file-menu" data-l10n-id="menu-file">
              <menupopup id="menu_FilePopup">
                <menuitem id="menu_newNavigatorTab"
                          command="cmd_newNavigatorTab"
                          key="key_newNavigatorTab" data-l10n-id="menu-file-new-tab"/>
                <menu id="menu_newUserContext"
                      hidden="true" data-l10n-id="menu-file-new-container-tab">
                  <menupopup id="menu_newUserContextPopup" />
                </menu>
                <menuitem id="menu_newNavigator"
                          key="key_newNavigator"
                          command="cmd_newNavigator" data-l10n-id="menu-file-new-window"/>
                <menuitem id="menu_newPrivateWindow"
                          command="Tools:PrivateBrowsing"
                          key="key_privatebrowsing" data-l10n-id="menu-file-new-private-window"/>
                <menuitem id="menu_openLocation"
                          hidden="true"
                          command="Browser:OpenLocation"
                          key="focusURLBar" data-l10n-id="menu-file-open-location"/>
                <menuitem id="menu_openFile"
                          command="Browser:OpenFile"
                          key="openFileKb" data-l10n-id="menu-file-open-file"/>
                <menuitem id="menu_close"
                          class="show-only-for-keyboard"
                          key="key_close"
                          command="cmd_close" data-l10n-id="menu-file-close-tab" data-l10n-args='{"tabCount": 1}'/>
                <menuitem id="menu_closeWindow"
                          class="show-only-for-keyboard"
                          hidden="true"
                          command="cmd_closeWindow"
                          key="key_closeWindow" data-l10n-id="menu-file-close-window"/>
                <menuseparator/>
                <menuitem id="menu_savePage"
                          key="key_savePage"
                          command="Browser:SavePage" data-l10n-id="menu-file-save-page"/>
#if !defined(XP_MACOSX) || defined(MOZ_PROXY_BYPASS_PROTECTION)
                <menuitem id="menu_sendLink"
                          command="Browser:SendLink" data-l10n-id="menu-file-email-link"/>
#endif
                <menuseparator/>
#if !defined(MOZ_WIDGET_GTK)
                <menuitem id="menu_printSetup"
                          command="cmd_pageSetup" data-l10n-id="menu-file-print-setup" hidden="true"/>
#endif
                <menuitem id="menu_print"
                          key="printKb"
                          command="cmd_print" data-l10n-id="menu-file-print"/>
                <menuseparator/>
                <menuitem id="menu_importFromAnotherBrowser"
                          command="cmd_file_importFromAnotherBrowser" data-l10n-id="menu-file-import-from-another-browser"/>
                <menuseparator/>
                <menuitem id="goOfflineMenuitem"
                          type="checkbox"
                          command="cmd_toggleOfflineStatus" data-l10n-id="menu-file-go-offline"/>
                <menuitem id="menu_FileQuitItem"
#ifdef XP_MACOSX
                          data-l10n-id="menu-quit-mac"
#else
                          data-l10n-id="menu-quit"
#endif
                          key="key_quitApplication"
                          command="cmd_quitApplication"/>
              </menupopup>
            </menu>

            <menu id="edit-menu" data-l10n-id="menu-edit">
              <menupopup id="menu_EditPopup">
                <menuitem id="menu_undo"
                          key="key_undo"
                          command="cmd_undo" data-l10n-id="text-action-undo"/>
                <menuitem id="menu_redo"
                          key="key_redo"
                          command="cmd_redo" data-l10n-id="text-action-redo"/>
                <menuseparator/>
                <menuitem id="menu_cut"
                          key="key_cut"
                          command="cmd_cut" data-l10n-id="text-action-cut"/>
                <menuitem id="menu_copy"
                          key="key_copy"
                          command="cmd_copy" data-l10n-id="text-action-copy"/>
                <menuitem id="menu_paste"
                          key="key_paste"
                          command="cmd_paste" data-l10n-id="text-action-paste"/>
                <menuitem id="menu_delete"
                          key="key_delete"
                          command="cmd_delete" data-l10n-id="text-action-delete"/>
                <menuseparator/>
                <menuitem id="menu_selectAll"
                          key="key_selectAll"
                          command="cmd_selectAll" data-l10n-id="text-action-select-all"/>
                <menuseparator/>
                <menuitem id="menu_find"
                          key="key_find"
                          command="cmd_find" data-l10n-id="menu-edit-find-in-page"/>
                <menuitem id="menu_findAgain"
                          class="show-only-for-keyboard"
                          key="key_findAgain"
                          command="cmd_findAgain" data-l10n-id="menu-edit-find-again"/>
                <menuseparator hidden="true" id="textfieldDirection-separator"/>
                <menuitem id="textfieldDirection-swap"
                          command="cmd_switchTextDirection"
                          key="key_switchTextDirection"
                          hidden="true" data-l10n-id="menu-edit-bidi-switch-text-direction"/>
#ifdef XP_UNIX
#ifndef XP_MACOSX
                <menuseparator/>
                <menuitem id="menu_preferences"
                          data-l10n-id="menu-settings"
                          />
#endif
#endif
              </menupopup>
            </menu>

            <menu id="view-menu" data-l10n-id="menu-view">
              <menupopup id="menu_viewPopup">
                <menu id="viewToolbarsMenu" data-l10n-id="menu-view-toolbars-menu">
                  <menupopup id="view-menu-popup">
                    <menuseparator/>
                    <menuitem id="menu_customizeToolbars"
                              command="cmd_CustomizeToolbars" data-l10n-id="menu-view-customize-toolbar2"/>
                  </menupopup>
                </menu>
                <menu id="viewSidebarMenuMenu" data-l10n-id="menu-view-sidebar">
                  <menupopup id="viewSidebarMenu"/>
                </menu>
                <menuseparator/>
                <menu id="viewFullZoomMenu" data-l10n-id="menu-view-full-zoom">
                  <menupopup>
                    <menuitem id="menu_zoomEnlarge"
                              key="key_fullZoomEnlarge"
                              command="cmd_fullZoomEnlarge" data-l10n-id="menu-view-full-zoom-enlarge"/>
                    <menuitem id="menu_zoomReduce"
                              key="key_fullZoomReduce"
                              command="cmd_fullZoomReduce" data-l10n-id="menu-view-full-zoom-reduce"/>
                    <menuseparator/>
                    <menuitem id="menu_zoomReset"
                              key="key_fullZoomReset"
                              command="cmd_fullZoomReset" data-l10n-id="menu-view-full-zoom-actual-size"/>
                    <menuseparator/>
                    <menuitem id="toggle_zoom"
                              type="checkbox"
                              command="cmd_fullZoomToggle"
                              checked="false" data-l10n-id="menu-view-full-zoom-toggle"/>
                  </menupopup>
                </menu>
                <menu id="pageStyleMenu" data-l10n-id="menu-view-page-style-menu">
                  <menupopup id="pageStyleMenuPopup">
                    <menuitem id="menu_pageStyleNoStyle"
                              type="radio" data-l10n-id="menu-view-page-style-no-style"/>
                    <menuitem id="menu_pageStylePersistentOnly"
                              type="radio"
                              checked="true" data-l10n-id="menu-view-page-basic-style"/>
                    <menuseparator/>
                  </menupopup>
                </menu>
                <menuitem id="repair-text-encoding"
                          disabled="true"
                          data-l10n-id="menu-view-repair-text-encoding"/>
                <menuseparator/>
#ifdef XP_MACOSX
                <menuitem id="enterFullScreenItem"
                          key="key_enterFullScreen"
                          data-l10n-id="menu-view-enter-full-screen">
                  <observes element="View:FullScreen" attribute="oncommand"/>
                </menuitem>
                <menuitem id="exitFullScreenItem"
                          key="key_exitFullScreen"
                          hidden="true" data-l10n-id="menu-view-exit-full-screen">
                  <observes element="View:FullScreen" attribute="oncommand"/>
                </menuitem>
#else
                <menuitem id="fullScreenItem"
                          key="key_enterFullScreen"
                          type="checkbox"
                          command="View:FullScreen"
                          observes="View:FullScreen"
                          data-l10n-id="menu-view-full-screen"/>
#endif
                <menuitem id="menu_readerModeItem"
                          command="View:ReaderView"
                          key="key_toggleReaderMode"
                          data-l10n-id="menu-view-enter-readerview"
                          hidden="true"/>
                <menuitem id="menu_showAllTabs"
                          hidden="true"
                          command="Browser:ShowAllTabs"
                          key="key_showAllTabs" data-l10n-id="menu-view-show-all-tabs"/>
                <menuseparator hidden="true" id="documentDirection-separator"/>
                <menuitem id="documentDirection-swap"
                          hidden="true"
                          data-l10n-id="menu-view-bidi-switch-page-direction"/>
              </menupopup>
            </menu>

            <menu id="history-menu" data-l10n-id="menu-history">
              <menupopup id="historyMenuPopup"
#ifndef XP_MACOSX
                         placespopup="true"
                         is="places-popup"
#endif
                         needsgutter="always"
                         tooltip="bhTooltip"
                         popupsinherittooltip="true">
                <menuitem id="menu_showAllHistory"
                          key="showAllHistoryKb"
                          command="Browser:ShowAllHistory" data-l10n-id="menu-history-show-all-history"/>
                <menuitem id="sanitizeItem"
                          key="key_sanitize"
                          command="Tools:Sanitize" data-l10n-id="menu-history-clear-recent-history"/>
                <menuseparator id="sanitizeSeparator"/>
                <menuitem id="sync-tabs-menuitem"
                          hidden="true" data-l10n-id="menu-history-synced-tabs"/>
                <menuitem id="historyRestoreLastSession"
                          command="Browser:RestoreLastSession" data-l10n-id="menu-history-restore-last-session"/>
                <menuitem id="hiddenTabsMenu"
                          hidden="true" data-l10n-id="menu-history-hidden-tabs"/>
                <menuitem id="menu_searchHistory"
                          command="History:SearchHistory"
                          data-l10n-id="menu-history-search"/>
                <menu id="historyUndoMenu"
                      disabled="true" data-l10n-id="menu-history-undo-menu">
                  <menupopup id="historyUndoPopup"
#ifndef XP_MACOSX
                             placespopup="true"
                             is="places-popup"
#endif
                  />
                </menu>
                <menu id="historyUndoWindowMenu"
                      disabled="true" data-l10n-id="menu-history-undo-window-menu">
                  <menupopup id="historyUndoWindowPopup"
#ifndef XP_MACOSX
                             placespopup="true"
                             is="places-popup"
#endif
                  >
#ifdef HIDDEN_WINDOW
# This entry is never visible. It's here to make the cmd-shift-n
# shortcut work in the hidden window when the last window is closed.
# If the menu is actually opened, we'll clear this out and replace
# it with a "real" entry.
# See bug 492320 for the nasty details.
                    <menuitem id="hiddenUndoCloseWindow"
                              key="key_undoCloseWindow"/>
#endif
                  </menupopup>
                </menu>
                <menuseparator id="startHistorySeparator"
                               class="hide-if-empty-places-result"/>
              </menupopup>
            </menu>

  <menu id="bookmarksMenu"
        data-l10n-id="menu-bookmarks-menu">
    <menupopup id="bookmarksMenuPopup"
#ifndef XP_MACOSX
               placespopup="true"
               is="places-popup"
#endif
               needsgutter="always"
               context="placesContext"
               openInTabs="children"
               tooltip="bhTooltip" popupsinherittooltip="true">
      <menuitem id="bookmarksShowAll"
                command="Browser:ShowAllBookmarks"
                key="manBookmarkKb"
                data-l10n-id="menu-bookmarks-manage"/>
      <menuseparator id="organizeBookmarksSeparator"/>
      <menuitem id="menu_bookmarkThisPage"
                command="Browser:AddBookmarkAs"
                key="addBookmarkAsKb"
                data-l10n-id="menu-bookmark-tab"/>
      <menuitem id="menu_searchBookmarks"
                command="Browser:SearchBookmarks"
                data-l10n-id="menu-bookmarks-search"/>
      <menuitem id="menu_bookmarkAllTabs"
                class="show-only-for-keyboard"
                command="Browser:BookmarkAllTabs"
                key="bookmarkAllTabsKb"
                data-l10n-id="menu-bookmarks-all-tabs"/>
      <menuseparator id="bookmarksToolbarSeparator"/>
      <menu id="bookmarksToolbarFolderMenu"
            class="menu-iconic bookmark-item"
            container="true"
            data-l10n-id="menu-bookmarks-toolbar">
        <menupopup id="bookmarksToolbarFolderPopup"
#ifndef XP_MACOSX
                   placespopup="true"
                   is="places-popup"
#endif
                   context="placesContext"/>
      </menu>
      <menu id="menu_unsortedBookmarks"
            class="menu-iconic bookmark-item"
            container="true"
            data-l10n-id="menu-bookmarks-other">
        <menupopup id="otherBookmarksFolderPopup"
#ifndef XP_MACOSX
                   placespopup="true"
                   is="places-popup"
#endif
                   context="placesContext"/>
      </menu>
      <menu id="menu_mobileBookmarks"
            class="menu-iconic bookmark-item"
            hidden="true"
            container="true"
            data-l10n-id="menu-bookmarks-mobile">
        <menupopup id="mobileBookmarksFolderPopup"
#ifndef XP_MACOSX
                   placespopup="true"
                   is="places-popup"
#endif
                   context="placesContext"/>
      </menu>
      <menuseparator id="bookmarksMenuItemsSeparator"/>
      <!-- Bookmarks menu items -->
    </menupopup>
  </menu>

  <menu id="profiles-menu" data-l10n-id="menu-profiles" hidden="true">
    <menupopup id="menu_ProfilesPopup">
    </menupopup>
  </menu>

            <menu id="tools-menu" data-l10n-id="menu-tools">
              <menupopup id="menu_ToolsPopup">
              <menuitem id="menu_openDownloads"
                        key="key_openDownloads"
                        command="Tools:Downloads" data-l10n-id="menu-tools-downloads"/>
              <menuitem id="menu_openAddons"
                        key="key_openAddons"
                        command="Tools:Addons" data-l10n-id="menu-tools-extensions-and-themes"/>

              <!-- only one of sync-setup, sync-enable, sync-unverifieditem, sync-syncnowitem or sync-reauthitem will be showing at once -->
              <menuitem id="sync-setup"
                        class="sync-ui-item"
                        hidden="true"
                        data-l10n-id="menu-tools-fxa-sign-in2"/>
              <menuitem id="sync-enable"
                        class="sync-ui-item"
                        hidden="true"
                        data-l10n-id="menu-tools-turn-on-sync2"/>
              <menuitem id="sync-unverifieditem"
                        class="sync-ui-item"
                        hidden="true"
                        data-l10n-id="menu-tools-fxa-sign-in2"/>
              <menuitem id="sync-syncnowitem"
                        class="sync-ui-item"
                        hidden="true"
                        data-l10n-id="menu-tools-sync-now"/>
              <menuitem id="sync-reauthitem"
                        class="sync-ui-item"
                        hidden="true"
                        data-l10n-id="menu-tools-fxa-re-auth"/>

              <menuitem id="menu_openFirefoxView"
                        data-l10n-id="menu-tools-firefox-view"/>
              <menuseparator id="devToolsSeparator"/>
              <menu id="browserToolsMenu" data-l10n-id="menu-tools-browser-tools">
                <menupopup id="menuWebDeveloperPopup">
                  <menuitem id="menu_taskManager"
                            key="key_aboutProcesses"
                            command="View:AboutProcesses"
                            data-l10n-id="menu-tools-task-manager"/>
                  <menuitem id="menu_pageSource"
                            key="key_viewSource"
                            command="View:PageSource" data-l10n-id="menu-tools-page-source"/>
                </menupopup>
              </menu>
              <menuitem id="menu_pageInfo"
                        key="key_viewInfo"
                        command="View:PageInfo" data-l10n-id="menu-tools-page-info"/>
#ifndef XP_UNIX
              <menuseparator id="prefSep"/>
              <menuitem id="menu_preferences"
                        data-l10n-id="menu-settings"/>
#endif
#ifdef MOZ_DEBUG
              <menuitem id="menu_layout_debugger"
                        data-l10n-id="menu-tools-layout-debugger"/>
#endif
#ifdef XP_MACOSX
<!-- nsMenuBarX hides these and uses them to build the Application menu. -->
              <menuitem id="menu_preferences"
                        data-l10n-id="menu-application-preferences"
                        key="key_preferencesCmdMac"/>
              <menuitem id="menu_mac_services" data-l10n-id="menu-application-services"/>
              <menuitem id="menu_mac_hide_app" data-l10n-id="menu-application-hide-this" key="key_hideThisAppCmdMac"/>
              <menuitem id="menu_mac_hide_others" data-l10n-id="menu-application-hide-other" key="key_hideOtherAppsCmdMac"/>
              <menuitem id="menu_mac_show_all" data-l10n-id="menu-application-show-all"/>
              <menuitem id="menu_mac_touch_bar" data-l10n-id="menu-application-touch-bar"/>
#endif
              </menupopup>
            </menu>
#ifdef XP_MACOSX
<!-- Do not dynamically modify the Window menu and be careful when making static changes to it.
     macOS adds extra functionality to this menu, such as a list of windows, which can break when
     modifying this menu. See bug 1642138 and bug 1807697 for example. -->
            <menu id="windowMenu"
                   data-l10n-id="menu-window-menu">
                <menupopup id="windowPopup">
                    <menuseparator/>
                    <menuitem command="cmd_minimizeWindow" key="key_minimizeWindow" data-l10n-id="window-minimize-command" />
                    <menuitem command="zoomWindow"/>
                    <!-- decomment when "BringAllToFront" is implemented
                        <menuseparator/>
                        <menuitem disabled="true" data-l10n-id="menu-window-bring-all-to-front"/> -->
                    <menuseparator id="sep-window-list"/>
                </menupopup>
            </menu>
#endif
            <menu id="helpMenu" data-l10n-id="menu-help">
              <menupopup id="menu_HelpPopup">
<!-- Note: Items under here are cloned to the AppMenu Help submenu. The cloned items
     have their strings defined by appmenu-data-l10n-id. -->
                <menuitem id="menu_openHelp"
                          data-l10n-id="menu-get-help"
                          appmenu-data-l10n-id="appmenu-get-help"
                          />
                <menuitem id="help_reportBrokenSite"
                          command="cmd_reportBrokenSite"
                          data-l10n-id="menu-report-broken-site"
                          disabled="true"
                          appmenu-data-l10n-id="appmenuitem-report-broken-site"/>
                <menuitem id="feedbackPage"
                          data-l10n-id="menu-help-share-ideas"
                          appmenu-data-l10n-id="appmenu-help-share-ideas"/>
                <menuitem id="helpSafeMode"
                          data-l10n-id="menu-help-enter-troubleshoot-mode2"
                          appmenu-data-l10n-id="appmenu-help-enter-troubleshoot-mode2"/>
                <menuitem id="troubleShooting"
                          data-l10n-id="menu-help-more-troubleshooting-info"
                          appmenu-data-l10n-id="appmenu-help-more-troubleshooting-info"/>
                <menuitem id="menu_HelpPopup_reportPhishingtoolmenu"
                          disabled="true"
                          hidden="true"
                          data-l10n-id="menu-help-report-deceptive-site"
                          appmenu-data-l10n-id="appmenu-help-report-deceptive-site"/>
                <menuitem id="menu_HelpPopup_reportPhishingErrortoolmenu"
                          disabled="true"
                          data-l10n-id="menu-help-not-deceptive"
                          appmenu-data-l10n-id="appmenu-help-not-deceptive"
                          hidden="true"/>
                <menuitem id="helpSwitchDevice"
                          data-l10n-id="menu-help-switch-device"
                          appmenu-data-l10n-id="appmenu-help-switch-device"/>
                <menuseparator id="aboutSeparator"/>
                <menuitem id="aboutName"
                          data-l10n-id="menu-about"
                          appmenu-data-l10n-id="appmenu-about"/>
                <menuseparator id="helpPolicySeparator"
                          hidden="true"/>
                <menuitem id="helpPolicySupport"
                          hidden="true"/>
              </menupopup>
          </menu>
        </menubar>
