# ContantBook

一個使用 Qt/C++ 開發的通訊錄管理應用程式。

## 功能特色

- ✅ 新增聯絡人資訊（學號、班級、姓名、電話）
- ✅ 以表格形式顯示所有聯絡人
- ✅ 匯出聯絡人資料到檔案
- ✅ 從檔案匯入聯絡人資料
- ✅ 現代化 UI 設計

## UI 設計特點

### 🎨 色彩設計
- **新增按鈕**: 綠色 (#4CAF50) - 清晰表示新增動作
- **匯出按鈕**: 藍色 (#2196F3) - 表示資料處理
- **匯入按鈕**: 橙色 (#FF9800) - 警示資料變更
- **結束按鈕**: 紅色 (#f44336) - 警告退出動作

### 📊 表格樣式
- 藍色表頭配白色粗體文字
- 交替行顏色（白色/淺灰）提升可讀性
- 綠色選取高亮
- 支援排序功能

### 🎯 使用者體驗
- 按鈕懸停效果提供即時回饋
- 輸入欄位焦點指示器
- 充足的間距和邊距設計
- Material Design 風格

## 技術規格

- **開發語言**: C++17
- **GUI 框架**: Qt (Core + GUI + Widgets)
- **建構系統**: qmake
- **專案類型**: QMainWindow 應用程式

## 專案結構

```
ContantBook/
├── contantbook.cpp       # 主要應用程式邏輯
├── contantbook.h         # 標頭檔
├── contantbook.ui        # Qt Designer UI 檔案（包含樣式）
├── main.cpp              # 程式進入點
├── ContantBook.pro       # Qt 專案檔
└── 說明文件/
    ├── UI_OPTIMIZATION_SUMMARY.md     # UI 優化總結
    ├── UI_COLOR_REFERENCE.md          # 配色指南
    └── BEFORE_AFTER_COMPARISON.md     # 改進前後對比
```

## 建置與執行

### 前置需求
- Qt 5.x 或更新版本
- C++17 相容編譯器
- qmake

### 建置步驟
```bash
qmake ContantBook.pro
make
./ContantBook
```

## 使用說明

1. **新增聯絡人**:
   - 在表單欄位輸入學號、班級、姓名、電話
   - 點擊綠色「新增」按鈕

2. **匯出資料**:
   - 點擊藍色「匯出」按鈕
   - 選擇儲存位置和檔名
   - 資料將以 CSV 格式儲存

3. **匯入資料**:
   - 點擊橙色「匯入」按鈕
   - 選擇要匯入的檔案
   - 資料將附加到現有表格

4. **結束程式**:
   - 點擊紅色「結束」按鈕
   - 程式將自動儲存並關閉

## UI 優化文件

詳細的 UI 優化說明請參考：
- [UI_OPTIMIZATION_SUMMARY.md](UI_OPTIMIZATION_SUMMARY.md) - 優化總結
- [UI_COLOR_REFERENCE.md](UI_COLOR_REFERENCE.md) - 配色參考
- [BEFORE_AFTER_COMPARISON.md](BEFORE_AFTER_COMPARISON.md) - 改進對比

## 授權

本專案遵循 MIT 授權條款。

