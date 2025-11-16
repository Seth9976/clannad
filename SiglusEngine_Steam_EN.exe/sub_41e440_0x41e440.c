// 函数: sub_41e440
// 地址: 0x41e440
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
POINT point
GetCursorPos(&point)
void* esi = &data_925270
void* ebx = &data_f899ac

for (int32_t i = 0; i s< 0x10; )
    if (*esi != 0)
        RECT rect
        GetWindowRect(*ebx, &rect)
        int32_t x = point.x
        
        if (x s>= rect.left && x s<= rect.right)
            int32_t y = point.y
            
            if (y s>= rect.top && y s<= rect.bottom)
                sub_5f02dd(eax_1 ^ &__saved_ebp)
                return 1
    
    i += 1
    esi += 0x134
    ebx += 0x14

sub_5f02dd(eax_1 ^ &__saved_ebp)
return 0
