#

## Hướng dẫn làm bài tập trên hệ thống `LMS` của thầy `Nguyễn Tất Thắng`

### 1. Giao diện khi mới vào

![1](https://user-images.githubusercontent.com/80816285/158299055-754d6c26-6877-4f15-a676-5510c58e9f7e.png)

### 2. Danh sách bài tập

![2](https://user-images.githubusercontent.com/80816285/158299574-1826a59f-6707-4668-885b-8f8abb4cb24b.png)

### 3. Giao diện code

![3](https://user-images.githubusercontent.com/80816285/158299908-8e655988-027b-467a-a430-2985764de2f5.png)

### 4. Bấm `F12` và chọn tab `Console` như này

![4](https://user-images.githubusercontent.com/80816285/158299767-561fba71-ea0c-4304-b754-4f082aa09dfb.png)

### 5. Copy đoạn code sau vào `Console` rồi `Enter`

```
var allowPaste = function(e){
  e.stopImmediatePropagation();
  return true;
};
document.addEventListener('paste', allowPaste, true);
```

![5](https://user-images.githubusercontent.com/80816285/158300002-11fe23e0-81e5-4e73-82c7-739fb53eabeb.png)

### 6. Bây giờ đã có thể thao tác `Paste` trên trang web

![6](https://user-images.githubusercontent.com/80816285/158300239-ca5ea865-4f6a-4e2b-b428-8956b99c9065.png)

### 7. Code và chạy thử trên IDE, chỉ việc copy paste lên hệ thống để nộp bài

![7](https://user-images.githubusercontent.com/80816285/158300344-d536a11d-0652-4e8d-9039-69b66f33a07d.png)
