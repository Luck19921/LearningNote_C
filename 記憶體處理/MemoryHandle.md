C語言的動態記憶體配置很重要，可以用以增進程式處理效能與減少問題碰撞。
經常會使用到的記憶體相關函數都被存在stdlib.h中


void *malloc(size_t size);
malloc代表memory allocation
配置指定大小的記憶體空間並傳回新空間第一個位元組的記憶體位址
所配置的記憶體空間楚瑜尚未被初始化的狀態


void *calloc(stize_t nmemb, size_t size);
calloc代表contiguous allocation
配置陣列用的記憶體空間並傳回新空間的第一個位元組的記憶體位址
所配置的記憶體空間將會被初始化為0


void free(void *ptr);
釋放之前使用malloc & calloc函數所配置的記憶體空間


void *realloc(void *ptr, size_t size);
改變已配置記憶體空間的大小
