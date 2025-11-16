// 函数: sub_683b40
// 地址: 0x683b40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t* esi = data_bac4d0
POINT point
__builtin_memset(&point, 0, 8)
GetCursorPos(&point)
int32_t i = 0

if (((esi[1] - *esi) & 0xfffffffc) s> 0)
    do
        void* eax_5 = *(*esi + (i << 2))
        
        if (*(eax_5 + 4) != 0)
            HWND hWnd = *(eax_5 + 4)
            
            if (hWnd != 0)
                BOOL eax_6
                eax_6.b = IsWindowEnabled(hWnd) != 0
                
                if (eax_6.b != 0)
                    void* eax_8 = *(*esi + (i << 2))
                    RECT rect
                    __builtin_memset(&rect, 0, 0x10)
                    GetWindowRect(*(eax_8 + 4), &rect)
                    int32_t x = point.x
                    
                    if (rect.left s<= x && x s< rect.right)
                        int32_t y = point.y
                        
                        if (rect.top s<= y && y s< rect.bottom)
                            y.b = 1
                            sub_745f2b(eax_1 ^ &__saved_ebp)
                            return y
        
        i += 1
    while (i s< (esi[1] - *esi) s>> 2)

bool eax_12 = sub_5780e0(&esi[0x8c29], point.x, point.y) != 0
sub_745f2b(eax_1 ^ &__saved_ebp)
return eax_12
