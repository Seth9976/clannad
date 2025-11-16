// 函数: sub_45fa80
// 地址: 0x45fa80
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
void* i = &data_1321ee4
void* i_1 = &data_1321ee4

do
    void* i_2 = i
    int32_t j_1 = 0x20
    int32_t j
    
    do
        HICON hIcon = *(i_2 - 4)
        
        if (hIcon != 0)
            DestroyIcon(hIcon)
            *(i_2 - 4) = 0
        
        HICON hIcon_1 = *i_2
        
        if (hIcon_1 != 0)
            DestroyIcon(hIcon_1)
            *i_2 = 0
        
        i_2 += 8
        j = j_1
        j_1 -= 1
    while (j != 1)
    i = i_1 + 0x110
    i_1 = i
while (i s< 0x13262e4)

return i
