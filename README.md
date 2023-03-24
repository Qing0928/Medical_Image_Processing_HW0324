# Medical_Image_Processing_HW0324

## Edge Enhancement

### 初始化

```
Mat img_src = imread("HW_0324.png", 0);
if (!img_src.data) {
  cout << "圖片無法載入" << endl;
  return 0;
  }

EdgeEnhance EE;
```

### 邊緣強化

```
Mat img_edge_enhance = EE.edge(img_src);
```

### 處理用class

```
class EdgeEnhance{
    public:
        Mat edge(Mat img_src) {
            Mat img_edge_enhance;
            Canny(img_src, img_edge_enhance, 50, 100, 3, false);
            return img_edge_enhance;
        }
};
```
