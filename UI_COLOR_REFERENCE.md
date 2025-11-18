# ContantBook UI Color Reference

## Button Colors

### 🟢 新增按鈕 (Add Button)
- **Primary Color**: `#4CAF50` (Green)
- **Hover Color**: `#45a049` (Darker Green)
- **Purpose**: 用於新增聯絡人的操作
- **Description**: 綠色代表創建/新增的正面行動

### 🔵 匯出按鈕 (Export Button)
- **Primary Color**: `#2196F3` (Blue)
- **Hover Color**: `#0b7dda` (Darker Blue)
- **Purpose**: 用於匯出資料到檔案
- **Description**: 藍色代表資料處理和輸出操作

### 🟠 匯入按鈕 (Import Button)
- **Primary Color**: `#FF9800` (Orange)
- **Hover Color**: `#e68900` (Darker Orange)
- **Purpose**: 用於從檔案匯入資料
- **Description**: 橙色代表警示和資料輸入，提醒使用者此操作會改變現有資料

### 🔴 結束按鈕 (Exit Button)
- **Primary Color**: `#f44336` (Red)
- **Hover Color**: `#da190b` (Darker Red)
- **Purpose**: 用於關閉應用程式
- **Description**: 紅色代表終止和危險操作，提醒使用者此操作將關閉程式

## Background Colors

### Main Background
- **Color**: `#f5f5f5` (Light Gray)
- **Usage**: 主視窗背景
- **Purpose**: 提供柔和的背景，減少眼睛疲勞

### Table Background
- **Primary**: `#FFFFFF` (White)
- **Alternate**: `#f9f9f9` (Very Light Gray)
- **Usage**: 表格行交替顏色
- **Purpose**: 提高表格可讀性，便於追蹤每一行資料

## Table Header
- **Background**: `#2196F3` (Blue)
- **Text Color**: `#FFFFFF` (White)
- **Font**: Bold, 11pt
- **Purpose**: 清晰標示欄位名稱，與表格內容形成對比

## Selection Color
- **Background**: `#4CAF50` (Green)
- **Text Color**: `#FFFFFF` (White)
- **Purpose**: 突出顯示選中的表格行

## Border & Grid Colors

### Input Fields Border
- **Default**: `#dddddd` (Light Gray)
- **Focus**: `#2196F3` (Blue)
- **Purpose**: 清晰顯示輸入欄位邊界，焦點時以藍色標示

### Table Grid
- **Color**: `#e0e0e0` (Very Light Gray)
- **Purpose**: 淡化的網格線，既能分隔資料又不會過於突兀

### Table Border
- **Color**: `#dddddd` (Light Gray)
- **Style**: 1px solid with 5px border-radius
- **Purpose**: 定義表格邊界，圓角設計更現代

## Text Colors

### Labels
- **Color**: `#333333` (Dark Gray)
- **Font**: 11pt, weight 500
- **Purpose**: 清晰易讀的標籤文字

### Input Text
- **Font**: 10pt
- **Background**: White
- **Purpose**: 確保輸入文字清晰可見

## Design Principles

1. **高對比度**: 確保文字和背景有足夠的對比度
2. **色彩語義**: 使用通用的色彩語言（綠色=確定，紅色=警告/退出）
3. **一致性**: 相同類型的元素使用一致的配色
4. **可訪問性**: 考慮色盲和視力受限的使用者
5. **Material Design**: 遵循 Google Material Design 的配色指南

## Spacing & Sizing

### Margins & Padding
- **Main Layout Margin**: 20px (all sides)
- **Element Spacing**: 15px (between major elements)
- **Form Spacing**: 
  - Horizontal: 15px
  - Vertical: 12px
- **Button Padding**: 10px (vertical) × 20px (horizontal)
- **Input Padding**: 8px (all sides)
- **Table Cell Padding**: 8px
- **Table Header Padding**: 10px

### Button Sizes
- **Minimum Width**: 100px
- **Minimum Height**: 40px
- **Font Size**: 11pt, bold

### Border Radius
- **Buttons**: 5px
- **Input Fields**: 4px
- **Table Widget**: 5px

## Visual Hierarchy

1. **Primary Actions** (Green): 最重要的操作（新增）
2. **Secondary Actions** (Blue): 常用操作（匯出）
3. **Tertiary Actions** (Orange): 特殊操作（匯入）
4. **Destructive Actions** (Red): 危險操作（結束）
