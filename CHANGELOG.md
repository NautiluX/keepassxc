# Changelog

## 2.5.0 (2019-07-05)

### Added

- Group sorting feature [#3282](https://github.com/keepassxreboot/keepassxc/issues/3282)
- CLI: Add 'flatten' option to the 'ls' command [#3276](https://github.com/keepassxreboot/keepassxc/issues/3276)
- CLI: Add password generation options to `Add` and `Edit` commands [#3275](https://github.com/keepassxreboot/keepassxc/issues/3275)
- CLI: Add CSV export to the 'export' command [#3277]
- CLI: Add `-y --yubikey` option for YubiKey [#3416](https://github.com/keepassxreboot/keepassxc/issues/3416)
- Add 'Monospaced font' option to the Notes field [#3321](https://github.com/keepassxreboot/keepassxc/issues/3321)
- CLI: Add group commands (mv, mkdir and rmdir) [#3313].

### Changed

- CLI: The password length option `-l` for the CLI commands
  `Add` and `Edit` is now `-L` [#3275](https://github.com/keepassxreboot/keepassxc/issues/3275)
- CLI: the `-u` shorthand for the `--upper` password generation option has been renamed `-U` [#3275](https://github.com/keepassxreboot/keepassxc/issues/3275)
- CLI: Renamed command `extract` -> `export`. [#3277]
- Rework the Entry Preview panel [#3306](https://github.com/keepassxreboot/keepassxc/issues/3306)
- Move notes to General tab on Group Preview Panel [#3336](https://github.com/keepassxreboot/keepassxc/issues/3336)
- Drop to background when copy feature [#3253](https://github.com/keepassxreboot/keepassxc/issues/3253)

### Fixed

- Fix password generator issues with special characters [#3303](https://github.com/keepassxreboot/keepassxc/issues/3303)

## 2.4.3 (2019-06-12)

### Added

- Add documentation for keyboard shortcuts to source code distribution [#3215](https://github.com/keepassxreboot/keepassxc/issues/3215)

### Fixed

- Fix library loading issues in the Snap and macOS releases [#3247](https://github.com/keepassxreboot/keepassxc/issues/3247)
- Fix various keyboard navigation issues [#3248](https://github.com/keepassxreboot/keepassxc/issues/3248)
- Fix main window toggling regression when clicking the tray icon on KDE [#3258](https://github.com/keepassxreboot/keepassxc/issues/3258)

## 2.4.2 (2019-05-31)

- Improve resilience against memory attacks - overwrite memory before free [#3020](https://github.com/keepassxreboot/keepassxc/issues/3020)
- Prevent infinite save loop when location is unavailable [#3026](https://github.com/keepassxreboot/keepassxc/issues/3026)
- Attempt to fix quitting application when shutdown or logout issued [#3199](https://github.com/keepassxreboot/keepassxc/issues/3199)
- Support merging database custom data [#3002](https://github.com/keepassxreboot/keepassxc/issues/3002)
- Fix opening URL's with non-http schemes [#3153](https://github.com/keepassxreboot/keepassxc/issues/3153)
- Fix data loss due to not reading all database attachments if duplicates exist [#3180](https://github.com/keepassxreboot/keepassxc/issues/3180)
- Fix entry context menu disabling when using keyboard navigation [#3199](https://github.com/keepassxreboot/keepassxc/issues/3199)
- Fix behaviors when canceling an entry edit [#3199](https://github.com/keepassxreboot/keepassxc/issues/3199)
- Fix processing of tray icon click and doubleclick [#3112](https://github.com/keepassxreboot/keepassxc/issues/3112)
- Update group in preview widget when focused [#3199](https://github.com/keepassxreboot/keepassxc/issues/3199)
- Prefer DuckDuckGo service over direct icon download (increases resolution) [#2996](https://github.com/keepassxreboot/keepassxc/issues/2996)
- Remove apply button in application settings [#3019](https://github.com/keepassxreboot/keepassxc/issues/3019)
- Use winqtdeploy on Windows to correct deployment issues [#3025](https://github.com/keepassxreboot/keepassxc/issues/3025)
- Don't mark entry edit as modified when attribute selection changes [#3041](https://github.com/keepassxreboot/keepassxc/issues/3041)
- Use console code page CP_UTF8 on Windows if supported [#3050](https://github.com/keepassxreboot/keepassxc/issues/3050)
- Snap: Fix locking database with session lock [#3046](https://github.com/keepassxreboot/keepassxc/issues/3046)
- Snap: Fix theming across Linux distributions [#3057](https://github.com/keepassxreboot/keepassxc/issues/3057)
- Snap: Use SNAP_USER_COMMON and SNAP_USER_DATA directories [#3131](https://github.com/keepassxreboot/keepassxc/issues/3131)
- KeeShare: Automatically enable WITH_XC_KEESHARE_SECURE if quazip is found [#3088](https://github.com/keepassxreboot/keepassxc/issues/3088)
- macOS: Fix toolbar text when in dark mode [#2998](https://github.com/keepassxreboot/keepassxc/issues/2998)
- macOS: Lock database on switching user [#3097](https://github.com/keepassxreboot/keepassxc/issues/3097)
- macOS: Fix global Auto-Type when the database is locked [#3138](https://github.com/keepassxreboot/keepassxc/issues/3138)
- Browser: Close popups when database is locked [#3093](https://github.com/keepassxreboot/keepassxc/issues/3093)
- Browser: Add tests [#3016](https://github.com/keepassxreboot/keepassxc/issues/3016)
- Browser: Don't create default group if custom group is enabled [#3127](https://github.com/keepassxreboot/keepassxc/issues/3127)

## 2.4.1 (2019-04-12)

- Fix database deletion when using unsafe saves to a different file system [#2889](https://github.com/keepassxreboot/keepassxc/issues/2889)
- Fix opening databases with legacy key files that contain '/' [#2872](https://github.com/keepassxreboot/keepassxc/issues/2872)
- Fix opening database files from the command line [#2919](https://github.com/keepassxreboot/keepassxc/issues/2919)
- Fix crash when editing master key [#2836](https://github.com/keepassxreboot/keepassxc/issues/2836)
- Fix multiple issues with apply button behavior [#2947](https://github.com/keepassxreboot/keepassxc/issues/2947)
- Fix issues on application startup (tab order, --pw-stdin, etc.) [#2830](https://github.com/keepassxreboot/keepassxc/issues/2830)
- Fix building without WITH_XC_KEESHARE
- Fix reference entry coloring on macOS dark mode [#2984](https://github.com/keepassxreboot/keepassxc/issues/2984)
- Hide window when performing entry auto-type on macOS [#2969](https://github.com/keepassxreboot/keepassxc/issues/2969)
- Improve UX of update checker; reduce checks to every 7 days [#2968](https://github.com/keepassxreboot/keepassxc/issues/2968)
- KeeShare improvements [[#2946](https://github.com/keepassxreboot/keepassxc/issues/2946), [#2978](https://github.com/keepassxreboot/keepassxc/issues/2978), [#2824](https://github.com/keepassxreboot/keepassxc/issues/2824)]
- Re-enable Ctrl+C to copy password from search box [#2947](https://github.com/keepassxreboot/keepassxc/issues/2947)
- Add KeePassXC-Browser integration for Brave browser [#2933](https://github.com/keepassxreboot/keepassxc/issues/2933)
- SSH Agent: Re-Add keys on database unlock [#2982](https://github.com/keepassxreboot/keepassxc/issues/2982)
- SSH Agent: Only remove keys on app exit if they are removed on lock [#2985](https://github.com/keepassxreboot/keepassxc/issues/2985)
- CLI: Add --no-password option [#2708](https://github.com/keepassxreboot/keepassxc/issues/2708)
- CLI: Improve database extraction to XML [#2698](https://github.com/keepassxreboot/keepassxc/issues/2698)
- CLI: Don't call mandb on build [#2774](https://github.com/keepassxreboot/keepassxc/issues/2774)
- CLI: Add debug info [#2714](https://github.com/keepassxreboot/keepassxc/issues/2714)
- Improve support for Snap theming [#2832](https://github.com/keepassxreboot/keepassxc/issues/2832)
- Add support for building on Haiku OS [#2859](https://github.com/keepassxreboot/keepassxc/issues/2859)
- Ctrl+PgDn now goes to the next tab and Ctrl+PgUp to the previous
- Fix compiling on GCC 5 / Xenial [#2990](https://github.com/keepassxreboot/keepassxc/issues/2990)
- Add .gitrev output to tarball for third-party builds [#2970](https://github.com/keepassxreboot/keepassxc/issues/2970)
- Add WITH_XC_UPDATECHECK compile flag to toggle the update checker [#2968](https://github.com/keepassxreboot/keepassxc/issues/2968)

## 2.4.0 (2019-03-19)

- New Database Wizard [#1952](https://github.com/keepassxreboot/keepassxc/issues/1952)
- Advanced Search [#1797](https://github.com/keepassxreboot/keepassxc/issues/1797)
- Automatic update checker [#2648](https://github.com/keepassxreboot/keepassxc/issues/2648)
- KeeShare database synchronization [[#2109](https://github.com/keepassxreboot/keepassxc/issues/2109), [#1992](https://github.com/keepassxreboot/keepassxc/issues/1992), [#2738](https://github.com/keepassxreboot/keepassxc/issues/2738), [#2742](https://github.com/keepassxreboot/keepassxc/issues/2742), [#2746](https://github.com/keepassxreboot/keepassxc/issues/2746), [#2739](https://github.com/keepassxreboot/keepassxc/issues/2739)]
- Improve favicon fetching; transition to Duck-Duck-Go [[#2795](https://github.com/keepassxreboot/keepassxc/issues/2795), [#2011](https://github.com/keepassxreboot/keepassxc/issues/2011), [#2439](https://github.com/keepassxreboot/keepassxc/issues/2439)]
- Remove KeePassHttp support [#1752](https://github.com/keepassxreboot/keepassxc/issues/1752)
- CLI: output info to stderr for easier scripting [#2558](https://github.com/keepassxreboot/keepassxc/issues/2558)
- CLI: Add --quiet option [#2507](https://github.com/keepassxreboot/keepassxc/issues/2507)
- CLI: Add create command [#2540](https://github.com/keepassxreboot/keepassxc/issues/2540)
- CLI: Add recursive listing of entries [#2345](https://github.com/keepassxreboot/keepassxc/issues/2345)
- CLI: Fix stdin/stdout encoding on Windows [#2425](https://github.com/keepassxreboot/keepassxc/issues/2425)
- SSH Agent: Support OpenSSH for Windows [#1994](https://github.com/keepassxreboot/keepassxc/issues/1994)
- macOS: TouchID Quick Unlock [#1851](https://github.com/keepassxreboot/keepassxc/issues/1851)
- macOS: Multiple improvements; include CLI in DMG [[#2165](https://github.com/keepassxreboot/keepassxc/issues/2165), [#2331](https://github.com/keepassxreboot/keepassxc/issues/2331), [#2583](https://github.com/keepassxreboot/keepassxc/issues/2583)]
- Linux: Prevent Klipper from storing secrets in clipboard [#1969](https://github.com/keepassxreboot/keepassxc/issues/1969)
- Linux: Use polling based file watching for NFS [#2171](https://github.com/keepassxreboot/keepassxc/issues/2171)
- Linux: Enable use of browser plugin in Snap build [#2802](https://github.com/keepassxreboot/keepassxc/issues/2802)
- TOTP QR Code Generator [#1167](https://github.com/keepassxreboot/keepassxc/issues/1167)
- High-DPI Scaling for 4k screens [#2404](https://github.com/keepassxreboot/keepassxc/issues/2404)
- Make keyboard shortcuts more consistent [#2431](https://github.com/keepassxreboot/keepassxc/issues/2431)
- Warn user if deleting referenced entries [#1744](https://github.com/keepassxreboot/keepassxc/issues/1744)
- Allow toolbar to be hidden and repositioned [[#1819](https://github.com/keepassxreboot/keepassxc/issues/1819), [#2357](https://github.com/keepassxreboot/keepassxc/issues/2357)]
- Increase max allowed database timeout to 12 hours [#2173](https://github.com/keepassxreboot/keepassxc/issues/2173)
- Password generator uses existing password length by default [#2318](https://github.com/keepassxreboot/keepassxc/issues/2318)
- Improve alert message box button labels [#2376](https://github.com/keepassxreboot/keepassxc/issues/2376)
- Show message when a database merge makes no changes [#2551](https://github.com/keepassxreboot/keepassxc/issues/2551)
- Browser Integration Enhancements [[#1497](https://github.com/keepassxreboot/keepassxc/issues/1497), [#2253](https://github.com/keepassxreboot/keepassxc/issues/2253), [#1904](https://github.com/keepassxreboot/keepassxc/issues/1904), [#2232](https://github.com/keepassxreboot/keepassxc/issues/2232), [#1850](https://github.com/keepassxreboot/keepassxc/issues/1850), [#2218](https://github.com/keepassxreboot/keepassxc/issues/2218), [#2391](https://github.com/keepassxreboot/keepassxc/issues/2391), [#2396](https://github.com/keepassxreboot/keepassxc/issues/2396), [#2542](https://github.com/keepassxreboot/keepassxc/issues/2542), [#2622](https://github.com/keepassxreboot/keepassxc/issues/2622), [#2637](https://github.com/keepassxreboot/keepassxc/issues/2637), [#2790](https://github.com/keepassxreboot/keepassxc/issues/2790)]
- Overall Code Improvements [[#2316](https://github.com/keepassxreboot/keepassxc/issues/2316), [#2284](https://github.com/keepassxreboot/keepassxc/issues/2284), [#2351](https://github.com/keepassxreboot/keepassxc/issues/2351), [#2402](https://github.com/keepassxreboot/keepassxc/issues/2402), [#2410](https://github.com/keepassxreboot/keepassxc/issues/2410), [#2419](https://github.com/keepassxreboot/keepassxc/issues/2419), [#2422](https://github.com/keepassxreboot/keepassxc/issues/2422), [#2443](https://github.com/keepassxreboot/keepassxc/issues/2443), [#2491](https://github.com/keepassxreboot/keepassxc/issues/2491), [#2506](https://github.com/keepassxreboot/keepassxc/issues/2506), [#2610](https://github.com/keepassxreboot/keepassxc/issues/2610), [#2667](https://github.com/keepassxreboot/keepassxc/issues/2667), [#2709](https://github.com/keepassxreboot/keepassxc/issues/2709), [#2731](https://github.com/keepassxreboot/keepassxc/issues/2731)]

## 2.3.4 (2018-08-21)

- Show all URL schemes in entry view [#1768](https://github.com/keepassxreboot/keepassxc/issues/1768)
- Disable merge when database is locked [#1975](https://github.com/keepassxreboot/keepassxc/issues/1975)
- Fix intermittent crashes with favorite icon downloads [#1980](https://github.com/keepassxreboot/keepassxc/issues/1980)
- Provide potential crash warning to Qt 5.5.x users [#2211](https://github.com/keepassxreboot/keepassxc/issues/2211)
- Disable apply button when creating new entry/group to prevent data loss [#2204](https://github.com/keepassxreboot/keepassxc/issues/2204)
- Allow for 12 hour timeout to lock idle database [#2173](https://github.com/keepassxreboot/keepassxc/issues/2173)
- Multiple SSH Agent fixes [[#1981](https://github.com/keepassxreboot/keepassxc/issues/1981), [#2117](https://github.com/keepassxreboot/keepassxc/issues/2117)]
- Multiple Browser Integration enhancements [[#1993](https://github.com/keepassxreboot/keepassxc/issues/1993), [#2003](https://github.com/keepassxreboot/keepassxc/issues/2003), [#2055](https://github.com/keepassxreboot/keepassxc/issues/2055), [#2116](https://github.com/keepassxreboot/keepassxc/issues/2116), [#2159](https://github.com/keepassxreboot/keepassxc/issues/2159), [#2174](https://github.com/keepassxreboot/keepassxc/issues/2174), [#2185](https://github.com/keepassxreboot/keepassxc/issues/2185)]
- Fix browser proxy application not closing properly [#2142](https://github.com/keepassxreboot/keepassxc/issues/2142)
- Add real names and Patreon supporters to about dialog [#2214](https://github.com/keepassxreboot/keepassxc/issues/2214)
- Add settings button to toolbar, Donate button, and Report a Bug button to help menu [#2214](https://github.com/keepassxreboot/keepassxc/issues/2214)
- Enhancements to release-tool to appsign intermediate build products [#2101](https://github.com/keepassxreboot/keepassxc/issues/2101)


## 2.3.3 (2018-05-09)

- Fix crash when browser integration is enabled [#1923](https://github.com/keepassxreboot/keepassxc/issues/1923)

## 2.3.2 (2018-05-07)

- Enable high entropy ASLR on Windows [#1747](https://github.com/keepassxreboot/keepassxc/issues/1747)
- Enhance favicon fetching [#1786](https://github.com/keepassxreboot/keepassxc/issues/1786)
- Fix crash on Windows due to autotype [#1691](https://github.com/keepassxreboot/keepassxc/issues/1691)
- Fix dark tray icon changing all icons [#1680](https://github.com/keepassxreboot/keepassxc/issues/1680)
- Fix --pw-stdin not using getPassword function [#1686](https://github.com/keepassxreboot/keepassxc/issues/1686)
- Fix placeholders being resolved in notes [#1907](https://github.com/keepassxreboot/keepassxc/issues/1907)
- Enable auto-type start delay to be configurable [#1908](https://github.com/keepassxreboot/keepassxc/issues/1908)
- Browser: Fix native messaging reply size [#1719](https://github.com/keepassxreboot/keepassxc/issues/1719)
- Browser: Increase maximum buffer size [#1720](https://github.com/keepassxreboot/keepassxc/issues/1720)
- Browser: Enhance usability and functionality [[#1810](https://github.com/keepassxreboot/keepassxc/issues/1810), [#1822](https://github.com/keepassxreboot/keepassxc/issues/1822), [#1830](https://github.com/keepassxreboot/keepassxc/issues/1830), [#1884](https://github.com/keepassxreboot/keepassxc/issues/1884), [#1906](https://github.com/keepassxreboot/keepassxc/issues/1906)]
- SSH Agent: Parse aes-256-cbc/ctr keys [#1682](https://github.com/keepassxreboot/keepassxc/issues/1682)
- SSH Agent: Enhance usability and functionality [[#1677](https://github.com/keepassxreboot/keepassxc/issues/1677), [#1679](https://github.com/keepassxreboot/keepassxc/issues/1679), [#1681](https://github.com/keepassxreboot/keepassxc/issues/1681), [#1787](https://github.com/keepassxreboot/keepassxc/issues/1787)]

## 2.3.1 (2018-03-06)

- Fix unnecessary automatic upgrade to KDBX 4.0 and prevent challenge-response key being stripped [#1568](https://github.com/keepassxreboot/keepassxc/issues/1568)
- Abort saving and show an error message when challenge-response fails [#1659](https://github.com/keepassxreboot/keepassxc/issues/1659)
- Support inner stream protection on all string attributes [#1646](https://github.com/keepassxreboot/keepassxc/issues/1646)
- Fix favicon downloads not finishing on some websites [#1657](https://github.com/keepassxreboot/keepassxc/issues/1657)
- Fix freeze due to invalid STDIN data [#1628](https://github.com/keepassxreboot/keepassxc/issues/1628)
- Correct issue with encrypted RSA SSH keys [#1587](https://github.com/keepassxreboot/keepassxc/issues/1587)
- Fix crash on macOS due to QTBUG-54832 [#1607](https://github.com/keepassxreboot/keepassxc/issues/1607)
- Show error message if ssh-agent communication fails [#1614](https://github.com/keepassxreboot/keepassxc/issues/1614)
- Fix --pw-stdin and filename parameters being ignored [#1608](https://github.com/keepassxreboot/keepassxc/issues/1608)
- Fix Auto-Type syntax check not allowing spaces and special characters [#1626](https://github.com/keepassxreboot/keepassxc/issues/1626)
- Fix reference placeholders in combination with Auto-Type [#1649](https://github.com/keepassxreboot/keepassxc/issues/1649)
- Fix qtbase translations not being loaded [#1611](https://github.com/keepassxreboot/keepassxc/issues/1611)
- Fix startup crash on Windows due to missing SVG libraries [#1662](https://github.com/keepassxreboot/keepassxc/issues/1662)
- Correct database tab order regression [#1610](https://github.com/keepassxreboot/keepassxc/issues/1610)
- Fix GCC 8 compilation error [#1612](https://github.com/keepassxreboot/keepassxc/issues/1612)
- Fix copying of advanced attributes on KDE [#1640](https://github.com/keepassxreboot/keepassxc/issues/1640)
- Fix member initialization of CategoryListWidgetDelegate [#1613](https://github.com/keepassxreboot/keepassxc/issues/1613)
- Fix inconsistent toolbar icon sizes and provide higher-quality icons [#1616](https://github.com/keepassxreboot/keepassxc/issues/1616)
- Improve preview panel geometry [#1609](https://github.com/keepassxreboot/keepassxc/issues/1609)

## 2.3.0 (2018-02-27)

- Add support for KDBX 4.0, Argon2 and ChaCha20 [[#148](https://github.com/keepassxreboot/keepassxc/issues/148), [#1179](https://github.com/keepassxreboot/keepassxc/issues/1179), [#1230](https://github.com/keepassxreboot/keepassxc/issues/1230), [#1494](https://github.com/keepassxreboot/keepassxc/issues/1494)]
- Add SSH Agent feature [[#1098](https://github.com/keepassxreboot/keepassxc/issues/1098), [#1450](https://github.com/keepassxreboot/keepassxc/issues/1450), [#1463](https://github.com/keepassxreboot/keepassxc/issues/1463)]
- Add preview panel with details of the selected entry [[#879](https://github.com/keepassxreboot/keepassxc/issues/879), [#1338](https://github.com/keepassxreboot/keepassxc/issues/1338)]
- Add more and configurable columns to entry table and allow copying of values by double click [#1305](https://github.com/keepassxreboot/keepassxc/issues/1305)
- Add KeePassXC-Browser API as a replacement for KeePassHTTP [#608](https://github.com/keepassxreboot/keepassxc/issues/608)
- Deprecate KeePassHTTP [#1392](https://github.com/keepassxreboot/keepassxc/issues/1392)
- Add support for Steam one-time passwords [#1206](https://github.com/keepassxreboot/keepassxc/issues/1206)
- Add support for multiple Auto-Type sequences for a single entry [#1390](https://github.com/keepassxreboot/keepassxc/issues/1390)
- Adjust YubiKey HMAC-SHA1 challenge-response key generation for KDBX 4.0 [#1060](https://github.com/keepassxreboot/keepassxc/issues/1060)
- Replace qHttp with cURL for website icon downloads [#1460](https://github.com/keepassxreboot/keepassxc/issues/1460)
- Remove lock file [#1231](https://github.com/keepassxreboot/keepassxc/issues/1231)
- Add option to create backup file before saving [#1385](https://github.com/keepassxreboot/keepassxc/issues/1385)
- Ask to save a generated password before closing the entry password generator [#1499](https://github.com/keepassxreboot/keepassxc/issues/1499)
- Resolve placeholders recursively [#1078](https://github.com/keepassxreboot/keepassxc/issues/1078)
- Add Auto-Type button to the toolbar [#1056](https://github.com/keepassxreboot/keepassxc/issues/1056)
- Improve window focus handling for Auto-Type dialogs [[#1204](https://github.com/keepassxreboot/keepassxc/issues/1204), [#1490](https://github.com/keepassxreboot/keepassxc/issues/1490)]
- Auto-Type dialog and password generator can now be exited with ESC [[#1252](https://github.com/keepassxreboot/keepassxc/issues/1252), [#1412](https://github.com/keepassxreboot/keepassxc/issues/1412)]
- Add optional dark tray icon [#1154](https://github.com/keepassxreboot/keepassxc/issues/1154)
- Add new "Unsafe saving" option to work around saving problems with file sync services [#1385](https://github.com/keepassxreboot/keepassxc/issues/1385)
- Add IBus support to AppImage and additional image formats to Windows builds [[#1534](https://github.com/keepassxreboot/keepassxc/issues/1534), [#1537](https://github.com/keepassxreboot/keepassxc/issues/1537)]
- Add diceware password generator to CLI [#1406](https://github.com/keepassxreboot/keepassxc/issues/1406)
- Add --key-file option to CLI [[#816](https://github.com/keepassxreboot/keepassxc/issues/816), [#824](https://github.com/keepassxreboot/keepassxc/issues/824)]
- Add DBus interface for opening and closing KeePassXC databases [#283](https://github.com/keepassxreboot/keepassxc/issues/283)
- Add KDBX compression options to database settings [#1419](https://github.com/keepassxreboot/keepassxc/issues/1419)
- Discourage use of old fixed-length key files in favor of arbitrary files [[#1326](https://github.com/keepassxreboot/keepassxc/issues/1326), [#1327](https://github.com/keepassxreboot/keepassxc/issues/1327)]
- Correct reference resolution in entry fields [#1486](https://github.com/keepassxreboot/keepassxc/issues/1486)
- Fix window state and recent databases not being remembered on exit [#1453](https://github.com/keepassxreboot/keepassxc/issues/1453)
- Correct history item generation when configuring TOTP for an entry [#1446](https://github.com/keepassxreboot/keepassxc/issues/1446)
- Correct multiple TOTP bugs [#1414](https://github.com/keepassxreboot/keepassxc/issues/1414)
- Automatic saving after every change is now a default [#279](https://github.com/keepassxreboot/keepassxc/issues/279)
- Allow creation of new entries during search [#1398](https://github.com/keepassxreboot/keepassxc/issues/1398)
- Correct menu issues on macOS [#1335](https://github.com/keepassxreboot/keepassxc/issues/1335)
- Allow compilation on OpenBSD [#1328](https://github.com/keepassxreboot/keepassxc/issues/1328)
- Improve entry attachments view [[#1139](https://github.com/keepassxreboot/keepassxc/issues/1139), [#1298](https://github.com/keepassxreboot/keepassxc/issues/1298)]
- Fix auto lock for Gnome and Xfce [[#910](https://github.com/keepassxreboot/keepassxc/issues/910), [#1249](https://github.com/keepassxreboot/keepassxc/issues/1249)]
- Don't remember key files in file dialogs when the setting is disabled [#1188](https://github.com/keepassxreboot/keepassxc/issues/1188)
- Improve database merging and conflict resolution [[#807](https://github.com/keepassxreboot/keepassxc/issues/807), [#1165](https://github.com/keepassxreboot/keepassxc/issues/1165)]
- Fix macOS pasteboard issues [#1202](https://github.com/keepassxreboot/keepassxc/issues/1202)
- Improve startup times on some platforms [#1205](https://github.com/keepassxreboot/keepassxc/issues/1205)
- Hide the notes field by default [#1124](https://github.com/keepassxreboot/keepassxc/issues/1124)
- Toggle main window by clicking tray icon with the middle mouse button [#992](https://github.com/keepassxreboot/keepassxc/issues/992)
- Fix custom icons not copied over when databases are merged [#1008](https://github.com/keepassxreboot/keepassxc/issues/1008)
- Allow use of DEL key to delete entries [#914](https://github.com/keepassxreboot/keepassxc/issues/914)
- Correct intermittent crash due to stale history items [#1527](https://github.com/keepassxreboot/keepassxc/issues/1527)
- Sanitize newline characters in title, username and URL fields [#1502](https://github.com/keepassxreboot/keepassxc/issues/1502)
- Reopen previously opened databases in correct order [#774](https://github.com/keepassxreboot/keepassxc/issues/774)
- Use system's zxcvbn library if available [#701](https://github.com/keepassxreboot/keepassxc/issues/701)
- Implement various i18n improvements [[#690](https://github.com/keepassxreboot/keepassxc/issues/690), [#875](https://github.com/keepassxreboot/keepassxc/issues/875), [#1436](https://github.com/keepassxreboot/keepassxc/issues/1436)]

## 2.2.4 (2017-12-13)

- Prevent database corruption when locked [#1219](https://github.com/keepassxreboot/keepassxc/issues/1219)
- Fixes apply button not saving new entries [#1141](https://github.com/keepassxreboot/keepassxc/issues/1141)
- Switch to Consolas font on Windows for password edit [#1229](https://github.com/keepassxreboot/keepassxc/issues/1229)
- Multiple fixes to AppImage deployment [[#1115](https://github.com/keepassxreboot/keepassxc/issues/1115), [#1228](https://github.com/keepassxreboot/keepassxc/issues/1228)]
- Fixes multiple memory leaks [#1213](https://github.com/keepassxreboot/keepassxc/issues/1213)
- Resize message close to 16x16 pixels [#1253](https://github.com/keepassxreboot/keepassxc/issues/1253)

## 2.2.2 (2017-10-22)

- Fixed entries with empty URLs being reported to KeePassHTTP clients [#1031](https://github.com/keepassxreboot/keepassxc/issues/1031)
- Fixed YubiKey detection and enabled CLI tool for AppImage binary [#1100](https://github.com/keepassxreboot/keepassxc/issues/1100)
- Added AppStream description [#1082](https://github.com/keepassxreboot/keepassxc/issues/1082)
- Improved TOTP compatibility and added new Base32 implementation [#1069](https://github.com/keepassxreboot/keepassxc/issues/1069)
- Fixed error handling when processing invalid cipher stream [#1099](https://github.com/keepassxreboot/keepassxc/issues/1099)
- Fixed double warning display when opening a database [#1037](https://github.com/keepassxreboot/keepassxc/issues/1037)
- Fixed unlocking databases with --pw-stdin [#1087](https://github.com/keepassxreboot/keepassxc/issues/1087)
- Added ability to override QT_PLUGIN_PATH environment variable for AppImages [#1079](https://github.com/keepassxreboot/keepassxc/issues/1079)
- Fixed transform seed not being regenerated when saving the database [#1068](https://github.com/keepassxreboot/keepassxc/issues/1068)
- Fixed only one YubiKey slot being polled [#1048](https://github.com/keepassxreboot/keepassxc/issues/1048)
- Corrected an issue with entry icons while merging [#1008](https://github.com/keepassxreboot/keepassxc/issues/1008)
- Corrected desktop and tray icons in Snap package [#1030](https://github.com/keepassxreboot/keepassxc/issues/1030)
- Fixed screen lock and Google fallback settings [#1029](https://github.com/keepassxreboot/keepassxc/issues/1029)

## 2.2.1 (2017-10-01)

- Corrected multiple snap issues [[#934](https://github.com/keepassxreboot/keepassxc/issues/934), [#1011](https://github.com/keepassxreboot/keepassxc/issues/1011)]
- Corrected multiple custom icon issues [[#708](https://github.com/keepassxreboot/keepassxc/issues/708), [#719](https://github.com/keepassxreboot/keepassxc/issues/719), [#994](https://github.com/keepassxreboot/keepassxc/issues/994)]
- Corrected multiple Yubikey issues [#880](https://github.com/keepassxreboot/keepassxc/issues/880)
- Fixed single instance preventing load on occasion [#997](https://github.com/keepassxreboot/keepassxc/issues/997)
- Keep entry history when merging databases [#970](https://github.com/keepassxreboot/keepassxc/issues/970)
- Prevent data loss if passwords were mismatched [#1007](https://github.com/keepassxreboot/keepassxc/issues/1007)
- Fixed crash after merge [#941](https://github.com/keepassxreboot/keepassxc/issues/941)
- Added configurable auto-type default delay [#703](https://github.com/keepassxreboot/keepassxc/issues/703)
- Unlock database dialog window comes to front [#663](https://github.com/keepassxreboot/keepassxc/issues/663)
- Translation and compiling fixes

## 2.2.0 (2017-06-23)

- Added YubiKey 2FA integration for unlocking databases [#127](https://github.com/keepassxreboot/keepassxc/issues/127)
- Added TOTP support [#519](https://github.com/keepassxreboot/keepassxc/issues/519)
- Added CSV import tool [[#146](https://github.com/keepassxreboot/keepassxc/issues/146), [#490](https://github.com/keepassxreboot/keepassxc/issues/490)]
- Added KeePassXC CLI tool [#254](https://github.com/keepassxreboot/keepassxc/issues/254)
- Added diceware password generator [#373](https://github.com/keepassxreboot/keepassxc/issues/373)
- Added support for entry references [[#370](https://github.com/keepassxreboot/keepassxc/issues/370), [#378](https://github.com/keepassxreboot/keepassxc/issues/378)]
- Added support for Twofish encryption [#167](https://github.com/keepassxreboot/keepassxc/issues/167)
- Enabled DEP and ASLR for in-memory protection [#371](https://github.com/keepassxreboot/keepassxc/issues/371)
- Enabled single instance mode [#510](https://github.com/keepassxreboot/keepassxc/issues/510)
- Enabled portable mode [#645](https://github.com/keepassxreboot/keepassxc/issues/645)
- Enabled database lock on screensaver and session lock [#545](https://github.com/keepassxreboot/keepassxc/issues/545)
- Redesigned welcome screen with common features and recent databases [#292](https://github.com/keepassxreboot/keepassxc/issues/292)
- Multiple updates to search behavior [[#168](https://github.com/keepassxreboot/keepassxc/issues/168), [#213](https://github.com/keepassxreboot/keepassxc/issues/213), [#374](https://github.com/keepassxreboot/keepassxc/issues/374), [#471](https://github.com/keepassxreboot/keepassxc/issues/471), [#603](https://github.com/keepassxreboot/keepassxc/issues/603), [#654](https://github.com/keepassxreboot/keepassxc/issues/654)]
- Added auto-type fields {CLEARFIELD}, {SPACE}, {{}, {}} [[#267](https://github.com/keepassxreboot/keepassxc/issues/267), [#427](https://github.com/keepassxreboot/keepassxc/issues/427), [#480](https://github.com/keepassxreboot/keepassxc/issues/480)]
- Fixed auto-type errors on Linux [#550](https://github.com/keepassxreboot/keepassxc/issues/550)
- Prompt user prior to executing a cmd:// URL [#235](https://github.com/keepassxreboot/keepassxc/issues/235)
- Entry attributes can be protected (hidden) [#220](https://github.com/keepassxreboot/keepassxc/issues/220)
- Added extended ascii to password generator [#538](https://github.com/keepassxreboot/keepassxc/issues/538)
- Added new database icon to toolbar [#289](https://github.com/keepassxreboot/keepassxc/issues/289)
- Added context menu entry to empty recycle bin in databases [#520](https://github.com/keepassxreboot/keepassxc/issues/520)
- Added "apply" button to entry and group edit windows [#624](https://github.com/keepassxreboot/keepassxc/issues/624)
- Added macOS tray icon and enabled minimize on close [#583](https://github.com/keepassxreboot/keepassxc/issues/583)
- Fixed issues with unclean shutdowns [[#170](https://github.com/keepassxreboot/keepassxc/issues/170), [#580](https://github.com/keepassxreboot/keepassxc/issues/580)]
- Changed keyboard shortcut to create new database to CTRL+SHIFT+N [#515](https://github.com/keepassxreboot/keepassxc/issues/515)
- Compare window title to entry URLs [#556](https://github.com/keepassxreboot/keepassxc/issues/556)
- Implemented inline error messages [#162](https://github.com/keepassxreboot/keepassxc/issues/162)
- Ignore group expansion and other minor changes when making database "dirty" [#464](https://github.com/keepassxreboot/keepassxc/issues/464)
- Updated license and copyright information on souce files [#632](https://github.com/keepassxreboot/keepassxc/issues/632)
- Added contributors list to about dialog [#629](https://github.com/keepassxreboot/keepassxc/issues/629)

## 2.1.4 (2017-04-09)

- Bumped KeePassHTTP version to 1.8.4.2
- KeePassHTTP confirmation window comes to foreground [#466](https://github.com/keepassxreboot/keepassxc/issues/466)

## 2.1.3 (2017-03-03)

- Fix possible overflow in zxcvbn library [#363](https://github.com/keepassxreboot/keepassxc/issues/363)
- Revert HiDPI setting to avoid problems on laptop screens [#332](https://github.com/keepassxreboot/keepassxc/issues/332)
- Set file meta properties in Windows executable [#330](https://github.com/keepassxreboot/keepassxc/issues/330)
- Suppress error message when auto-reloading a locked database [#345](https://github.com/keepassxreboot/keepassxc/issues/345)
- Improve usability of question dialog when database is already locked by a different instance [#346](https://github.com/keepassxreboot/keepassxc/issues/346)
- Fix compiler warnings in QHttp library [#351](https://github.com/keepassxreboot/keepassxc/issues/351)
- Use unified toolbar on Mac OS X [#361](https://github.com/keepassxreboot/keepassxc/issues/361)
- Fix an issue on X11 where the main window would be raised instead of closed on Alt+F4 [#362](https://github.com/keepassxreboot/keepassxc/issues/362)

## 2.1.2 (2017-02-17)

- Ask for save location when creating a new database [#302](https://github.com/keepassxreboot/keepassxc/issues/302)
- Remove Libmicrohttpd dependency to clean up the code and ensure better OS X compatibility [[#317](https://github.com/keepassxreboot/keepassxc/issues/317), [#265](https://github.com/keepassxreboot/keepassxc/issues/265)]
- Prevent Qt from degrading Wifi network performance on certain platforms [#318](https://github.com/keepassxreboot/keepassxc/issues/318)
- Visually refine user interface on OS X and other platforms [#299](https://github.com/keepassxreboot/keepassxc/issues/299)
- Remove unusable tray icon setting on OS X [#293](https://github.com/keepassxreboot/keepassxc/issues/293)
- Fix compositing glitches on Ubuntu and prevent flashing when minimizing to the tray at startup [#307](https://github.com/keepassxreboot/keepassxc/issues/307)
- Fix AppImage tray icon on Ubuntu [[#277](https://github.com/keepassxreboot/keepassxc/issues/277), [#273](https://github.com/keepassxreboot/keepassxc/issues/273)]
- Fix global menu disappearing after restoring KeePassXC from the tray on Ubuntu [#276](https://github.com/keepassxreboot/keepassxc/issues/276)
- Fix result order in entry search [#320](https://github.com/keepassxreboot/keepassxc/issues/320)
- Enable HiDPI scaling on supported platforms [#315](https://github.com/keepassxreboot/keepassxc/issues/315)
- Remove empty directories from installation target [#282](https://github.com/keepassxreboot/keepassxc/issues/282)

## 2.1.1 (2017-02-06)

- Enabled HTTP plugin build; plugin is disabled by default and limited to localhost [#147](https://github.com/keepassxreboot/keepassxc/issues/147)
- Escape HTML in dialog boxes [#247](https://github.com/keepassxreboot/keepassxc/issues/247)
- Corrected crashes in favicon download and password generator [[#233](https://github.com/keepassxreboot/keepassxc/issues/233), [#226](https://github.com/keepassxreboot/keepassxc/issues/226)]
- Increase font size of password meter [#228](https://github.com/keepassxreboot/keepassxc/issues/228)
- Fixed compatibility with Qt 5.8 [#211](https://github.com/keepassxreboot/keepassxc/issues/211)
- Use consistent button heights in password generator [#229](https://github.com/keepassxreboot/keepassxc/issues/229)

## 2.1.0 (2017-01-22)

- Show unlock dialog when using autotype on a closed database [[#10](https://github.com/keepassxreboot/keepassxc/issues/10), [#89](https://github.com/keepassxreboot/keepassxc/issues/89)]
- Show different tray icon when database is locked [[#37](https://github.com/keepassxreboot/keepassxc/issues/37), [#46](https://github.com/keepassxreboot/keepassxc/issues/46)]
- Support autotype on Windows and OS X [[#42](https://github.com/keepassxreboot/keepassxc/issues/42), [#60](https://github.com/keepassxreboot/keepassxc/issues/60), [#63](https://github.com/keepassxreboot/keepassxc/issues/63)]
- Add delay feature to autotype [[#76](https://github.com/keepassxreboot/keepassxc/issues/76), [#77](https://github.com/keepassxreboot/keepassxc/issues/77)]
- Add password strength meter [[#84](https://github.com/keepassxreboot/keepassxc/issues/84), [#92](https://github.com/keepassxreboot/keepassxc/issues/92)]
- Add option for automatically locking the database when minimizing
  the window [#57](https://github.com/keepassxreboot/keepassxc/issues/57)
- Add feature to download favicons and use them as entry icons [#30](https://github.com/keepassxreboot/keepassxc/issues/30)
- Automatically reload and merge database when the file changed on
  disk [[#22](https://github.com/keepassxreboot/keepassxc/issues/22), [#33](https://github.com/keepassxreboot/keepassxc/issues/33), [#93](https://github.com/keepassxreboot/keepassxc/issues/93)]
- Add tool for merging two databases [[#22](https://github.com/keepassxreboot/keepassxc/issues/22), [#47](https://github.com/keepassxreboot/keepassxc/issues/47), [#143](https://github.com/keepassxreboot/keepassxc/issues/143)]
- Add --pw-stdin commandline option to unlock the database by providing
  a password on STDIN [#54](https://github.com/keepassxreboot/keepassxc/issues/54)
- Add utility script for reading the database password from KWallet [#55](https://github.com/keepassxreboot/keepassxc/issues/55)
- Fix some KeePassHTTP settings not being remembered [[#34](https://github.com/keepassxreboot/keepassxc/issues/34), [#65](https://github.com/keepassxreboot/keepassxc/issues/65)]
- Make search box persistent [[#15](https://github.com/keepassxreboot/keepassxc/issues/15), [#67](https://github.com/keepassxreboot/keepassxc/issues/67), [#157](https://github.com/keepassxreboot/keepassxc/issues/157)]
- Enhance search feature by scoping the search to selected group [[#16](https://github.com/keepassxreboot/keepassxc/issues/16), [#118](https://github.com/keepassxreboot/keepassxc/issues/118)]
- Improve interaction between search field and entry list [[#131](https://github.com/keepassxreboot/keepassxc/issues/131), [#141](https://github.com/keepassxreboot/keepassxc/issues/141)]
- Add stand-alone password-generator [[#18](https://github.com/keepassxreboot/keepassxc/issues/18), [#92](https://github.com/keepassxreboot/keepassxc/issues/92)]
- Don't require password repetition when password is visible [[#27](https://github.com/keepassxreboot/keepassxc/issues/27), [#92](https://github.com/keepassxreboot/keepassxc/issues/92)]
- Add support for entry attributes in autotype sequences [#107](https://github.com/keepassxreboot/keepassxc/issues/107)
- Always focus password field when opening the database unlock widget [[#116](https://github.com/keepassxreboot/keepassxc/issues/116), [#117](https://github.com/keepassxreboot/keepassxc/issues/117)]
- Fix compilation errors on various platforms [[#53](https://github.com/keepassxreboot/keepassxc/issues/53), [#126](https://github.com/keepassxreboot/keepassxc/issues/126), [#130](https://github.com/keepassxreboot/keepassxc/issues/130)]
- Restructure and improve kdbx-extract utility [#160](https://github.com/keepassxreboot/keepassxc/issues/160)

## 2.0.3 (2016-09-04)

- Improved error reporting when reading / writing databases fails. [[#450](https://github.com/keepassxreboot/keepassxc/issues/450), [#462](https://github.com/keepassxreboot/keepassxc/issues/462)]
- Display an error message when opening a custom icon fails.
- Detect custom icon format based on contents instead of the filename. [#512](https://github.com/keepassxreboot/keepassxc/issues/512)
- Keep symlink intact when saving databases. [#442](https://github.com/keepassxreboot/keepassxc/issues/442).
- Fix a crash when deleting parent group of recycle bin. [#520](https://github.com/keepassxreboot/keepassxc/issues/520)
- Display a confirm dialog before moving an entry to the recycle bin. [#447](https://github.com/keepassxreboot/keepassxc/issues/447)
- Repair UUIDs of inconsistent history items. [#130](https://github.com/keepassxreboot/keepassxc/issues/130)
- Only include top-level windows in auto-type window list when using gnome-shell.
- Update translations.

## 2.0.2 (2016-02-02)

- Fix regression in database writer that caused it to strip certain special
  characters (characters from Unicode plane > 0).
- Fix bug in repair function that caused it to strip non-ASCII characters.

## 2.0.1 (2016-01-31)

- Flush temporary file before opening attachment. [#390](https://github.com/keepassxreboot/keepassxc/issues/390)
- Disable password generator when showing entry in history mode. [#422](https://github.com/keepassxreboot/keepassxc/issues/422)
- Strip invalid XML chars when writing databases. [#392](https://github.com/keepassxreboot/keepassxc/issues/392)
- Add repair function to fix databases with invalid XML chars. [#392](https://github.com/keepassxreboot/keepassxc/issues/392)
- Display custom icons scaled. [#322](https://github.com/keepassxreboot/keepassxc/issues/322)
- Allow opening databases that have no password and keyfile. [#391](https://github.com/keepassxreboot/keepassxc/issues/391)
- Fix crash when importing .kdb files with invalid icon ids. [#425](https://github.com/keepassxreboot/keepassxc/issues/425)
- Update translations.

## 2.0 (2015-12-06)

- Improve UI of the search edit.
- Clear clipboard when locking databases. [#342](https://github.com/keepassxreboot/keepassxc/issues/342)
- Enable Ctrl+M shortcut to minimize the window on all platforms. [#329](https://github.com/keepassxreboot/keepassxc/issues/329)
- Show a better message when trying to open an old database format. [#338](https://github.com/keepassxreboot/keepassxc/issues/338)
- Fix global auto-type behavior with some window managers.
- Show global auto-type window on the active desktop. [#359](https://github.com/keepassxreboot/keepassxc/issues/359)
- Disable systray on OS X. [#326](https://github.com/keepassxreboot/keepassxc/issues/326)
- Restore main window when clicking on the OS X docker icon. [#326](https://github.com/keepassxreboot/keepassxc/issues/326)

## 2.0 Beta 2 (2015-09-06)

- Fix crash when locking with search UI open [#309](https://github.com/keepassxreboot/keepassxc/issues/309)
- Fix file locking on Mac OS X [#327](https://github.com/keepassxreboot/keepassxc/issues/327)
- Set default extension when saving a database [[#79](https://github.com/keepassxreboot/keepassxc/issues/79), [#308](https://github.com/keepassxreboot/keepassxc/issues/308)]

## 2.0 Beta 1 (2015-07-18)

- Remember entry column sizes [#159](https://github.com/keepassxreboot/keepassxc/issues/159)
- Add translations
- Support opening attachments directly
- Support cmd:// URLs [#244](https://github.com/keepassxreboot/keepassxc/issues/244)
- Protect opened databases with a file lock [#18](https://github.com/keepassxreboot/keepassxc/issues/18)
- Export to csv files [#57](https://github.com/keepassxreboot/keepassxc/issues/57)
- Add optional tray icon [#153](https://github.com/keepassxreboot/keepassxc/issues/153)
- Allow setting the default auto-type sequence for groups [#175](https://github.com/keepassxreboot/keepassxc/issues/175)
- Make the kdbx parser more lenient
- Remove --password command line option [#285](https://github.com/keepassxreboot/keepassxc/issues/285)

## 2.0 Alpha 6 (2014-04-12)

- Add option to lock databases after user inactivity [#62](https://github.com/keepassxreboot/keepassxc/issues/62)
- Add compatibility with libgcrypt 1.6 [#129](https://github.com/keepassxreboot/keepassxc/issues/129)
- Display passwords in monospace font [#51](https://github.com/keepassxreboot/keepassxc/issues/51)
- Use an icon for the button that shows/masks passwords [#38](https://github.com/keepassxreboot/keepassxc/issues/38)
- Add an option to show passwords by default [#93](https://github.com/keepassxreboot/keepassxc/issues/93)
- Improve password generator design [#122](https://github.com/keepassxreboot/keepassxc/issues/122)
- On Linux link .kdbx files with KeePassX
- Remember window size [#154](https://github.com/keepassxreboot/keepassxc/issues/154)
- Disallow global auto-typing when the database is locked

## 2.0 Alpha 5 (2013-12-20)

- Support copying entries and groups using drag'n'drop [#74](https://github.com/keepassxreboot/keepassxc/issues/74)
- Open last used databases on startup [#36](https://github.com/keepassxreboot/keepassxc/issues/36)
- Made the kdbx file parser more robust
- Only edit entries on doubleclick (not single) or with enter key
- Allow removing multiple entries
- Added option to minimize window when copying data to clipboard
- Save password generator settings
- Fixed auto-type producing wrong chars in some keyboard configurations [#116](https://github.com/keepassxreboot/keepassxc/issues/116)
- Added some more actions to the toolbar

## 2.0 Alpha 4 (2013-03-29)

- Add random password generator [#52](https://github.com/keepassxreboot/keepassxc/issues/52)
- Merge the 'Description' tab into the 'Entry' tab [#59](https://github.com/keepassxreboot/keepassxc/issues/59)
- Fix crash when deleting history items [#56](https://github.com/keepassxreboot/keepassxc/issues/56)
- Fix crash on Mac OS X Mountain Lion during startup [#50](https://github.com/keepassxreboot/keepassxc/issues/50)
- Improved KeePassX application icon [#58](https://github.com/keepassxreboot/keepassxc/issues/58)

## 2.0 Alpha 3 (2012-10-27)

- Auto-Type on Linux / X11
- Database locking
- Fix database corruption when changing key transformation rounds [#34](https://github.com/keepassxreboot/keepassxc/issues/34)
- Verify header data of kdbx files
- Add menu entry to open URLs in the browser
- Add menu entry to copy an entry attribute to clipboard

## 2.0 Alpha 2 (2012-07-02)

- Import kdb (KeePass 1) files [#2](https://github.com/keepassxreboot/keepassxc/issues/2)
- Display history items [#23](https://github.com/keepassxreboot/keepassxc/issues/23)
- Implement history item limits [#16](https://github.com/keepassxreboot/keepassxc/issues/16)
- Group and entry icons can be set [#22](https://github.com/keepassxreboot/keepassxc/issues/22)
- Add keyboard shortcuts
- Search in databases [#24](https://github.com/keepassxreboot/keepassxc/issues/24)
- Sortable entry view
- Support building Mac OS X bundles

## 2.0 Alpha 1 (2012-05-07)

- First release.
